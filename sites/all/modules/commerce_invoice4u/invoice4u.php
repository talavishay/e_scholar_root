<?php
class Document
{
	public $GeneralCustomer;
    public $DocumentType = 3;
    public $Subject = "Test123";
    public $Currency = "ILS";
    public $Total = 110;
    //public $TotalWithoutTax = 100;
   // public $TotalTaxAmount = 10;
   // public $TaxPercentage = 10;
    public $Items;
    public $AssociatedEmails;
    public $Payments;
	public $TaxIncluded = true;

    public function __construct()
    {
      $this->Items = array(new Item());
      $this->AssociatedEmails = array(new Email());
      $this->Payments = array(new Payment());
	  $this->GeneralCustomer = new GeneralCustomer();
    }
}

class GeneralCustomer
{
    public $Name="test_client";
}

class Item
{
    public $Code = "001";
    public $Name = "first Item";
    public $Quantity = 1;
    public $Price = 50;
    public $Total = 50;
    //public $TotalWithoutTax = 50;
    //public $TaxPercentage = 0;
}

class Email
{
    public $Mail = "test@test.com";
    public $IsUserMail = true;
}

class Payment
{
    public $Date;
    public $Amount = 0;
    public $PaymentType = 4;

    public function __construct()
    {
      $this->Date = time();
    }
}

class Invoice4u
{
  public $token;
  public $result;

  private function requestWS($wsdl, $service, $params)
  {
      $options = array('trace' => true, 'exceptions' => true, 'cache_wsdl' => WSDL_CACHE_NONE, 'connection_timeout' => 10);

      $client = new SoapClient($wsdl, $options);

      $response = $client->$service($params);

      $service = $service . "Result";

      $this->result = $response->$service;

  }

  public function Login()
  {
    $wsdl = "http://private.invoice4u.co.il/Services/LoginService.svc?wsdl";
    $user = array('username' => variable_get("commerce_invoice4u_user", 'test@test.com'), 'password' => variable_get("commerce_invoice4u_password", '123456'), 'isPersistent' => false);
    $this->requestWS($wsdl, "VerifyLogin", $user);
    $this->token = $this->result;
  }

  public function CreateDocument($order)
  {
    $wsdl = "http://private.invoice4u.co.il/Services/DocumentService.svc?wsdl";
    $doc = new Document();
    $line_items = array();


    foreach(	$order->commerce_line_items["und"] as $key => $item	){
    	$line_item = commerce_line_item_load(intval($item['line_item_id']));
    	$Price = (int) $line_item->commerce_unit_price["und"][0]["amount"];
    	$Price = $Price/100;
    	$line_items[$key] = new Item(); 
    	$line_items[$key]->Code = $line_item->line_item_label ;
    	$line_items[$key]->Name = $line_item->field_laxo_name["und"][0]["value"];
    	$line_items[$key]->Price = $Price ;
    	$line_items[$key]->Total = $line_items[$key]->Price ;
    	//$line_items[$key]->TotalWithoutTax = $line_items[$key]->Price ;
    	$line_items[$key]->Quantity = (int) $line_item->quantity;
    	
    	$ammout = $ammout+$line_items[$key]->Price;
    	
    }
    $doc->AssociatedEmails[0]->Mail = $order->mail;
        //$doc->Items= array($iii);
    $doc->Items= $line_items;
      
    // calculate 
    
    //$doc->TaxPercentage = (int) 18;
  //  $totaTaxIncluded = $ammout + ($ammout * ($doc->TaxPercentage/100) ); 
    //$doc->TotalTaxAmount = $ammout * ($doc->TaxPercentage/100) ;     
    //$doc->Total = $ammout + $doc->TotalTaxAmount ;
    $doc->TotalWithoutTax = $ammout;
    
    
    $doc->Payments[0]->Amount = $ammout;
    $doc->GeneralCustomer->Name = $order->mail;
    $doc->GeneralCustomer->Identifier = $order->uid;
    $doc->Subject = t("הזמנה מספר @orderid באתר @site_name", array("@orderid" => $order->order_number, "@site_name" => variable_get('site_name')));
    
    
    $this->requestWS($wsdl, "CreateDocument", array('doc' => $doc, 'token' => $this->token));
  }
}
?>
