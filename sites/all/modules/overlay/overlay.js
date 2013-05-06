jQuery(document).ready(function(){    




jQuery('body:not(.ie) #zone-header').css('position','relative').append('<div id="overlay"></div><div id="overlay_controls_wrap"><div id="overlay_control" class="overlay_controls_box"></div><div id="overlay_control_dark" class="overlay_controls_box"></div><div id="overlay_control_light" class="overlay_controls_box"></div><div id="overlay_control_opacity" class="overlay_controls_box"></div></div>');//+

// '<div id="ruler" style="position:fixed;top:0px;left:20px;background:red;width:1px;height:100%"></div>');
 jQuery('#overlay_control').bind("click", function(e){
    jQuery('#overlay').toggle();
 });
 jQuery('#overlay_control_light').bind("click", function(e){
    overlay_control_light();
 });
 jQuery('#overlay_control_dark').bind("click", function(e){
    
     overlay_control_dark();
 });
 
 function overlay_control_light(){
     jQuery('#overlay').css("opacity", function(index,val) {
        var overlay_control_opacity = val * 1.1;
        jQuery('#overlay_control_opacity').html(overlay_control_opacity);
        return overlay_control_opacity;
    });
 }
 function overlay_control_dark(){
     jQuery('#overlay').css("opacity", function(index,val) {
        var overlay_control_opacity =  val - (val * .1);
        jQuery('#overlay_control_opacity').html(overlay_control_opacity);
        return overlay_control_opacity;
     });
     
 };
 jQuery(window).bind("keyup", function(e){
//     console.log(e.which);
     if(e.ctrlKey){
        if(e.which == 40 ){
//            console.log("down");
            overlay_control_dark();
        }
        if(e.which == 38 ){
//            console.log("up");
            overlay_control_light();
        }
        if(e.which == 32 ){
            jQuery('#overlay').toggle();
        }
     }
     
 });
 jQuery('body.front #overlay').css("background","url(/sites/all/modules/overlay/homepage.jpg)");
 jQuery('body.page-user #overlay').css("background","url(/sites/all/modules/overlay/my_account.jpg)");
jQuery('body.page-contact #overlay').css("background","url(/sites/all/modules/overlay/contact_form.jpg)");
 
});