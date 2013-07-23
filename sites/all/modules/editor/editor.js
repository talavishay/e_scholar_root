jQuery(document).ready(function(){
    jQuery(".form-item-sort-order label").text("סדר");
    jQuery(".views-widget-sort-by, .views-widget-sort-order").css("float", "right").wrapAll(jQuery('<div style="direction:rtl;float:left" id="order_wrap"></div>'));
//    jQuery("#edit-biblio-custom7-wrapper").attr("title","click me to filter view on broken articles").bind("click",function(e){
  //      jQuery("input", jQuery(e.currentTarget).parent()).val("broken").change();

    //});
jQuery("#edit-biblio-custom7-wrapper").attr("title","click me to toggle filter on broken articles").bind("click",function(e){
if( jQuery("#edit-biblio-custom7-wrapper input").val() !== "broken"){
  jQuery("#edit-biblio-custom7-wrapper input").val("broken").change();
  } else {
    jQuery("#edit-biblio-custom7-wrapper input").val("").change();
  }
});

});
        
