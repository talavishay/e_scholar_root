jQuery(document).ready(function(){
if(typeof(Drupal.settings.broken_nid) !== "undefined"){
    var url = "/validate_url/"+Drupal.settings.broken_nid;
    
    jQuery("#edit-biblio-url").before(
        jQuery("<a href=\"#\" id=\"check_url\">Validate url</a>").css("display","inline-block").bind("click", function(e){
        e.preventDefault();
        jQuery.post(url, {
            "url" : encodeURIComponent(jQuery("#edit-biblio-url").val())
        },function(res){
            if(res === "valid"){
                jQuery("#edit-biblio-url").css("background-color", "rgba(0, 255, 0, 0.4)");
                var text = "the url has been found VALID ! \n press ok to save the url and publish the article OR canel to stay in the edit form";
                if (confirm(text)){
                    jQuery.post(
                            "/valid/"+Drupal.settings.broken_nid, {
                                "url" : encodeURIComponent(jQuery("#edit-biblio-url").val())
                            },  function(res){
                                if(res === "saved"){
                                    
                                    if(confirm("article Unbroken & Published successful\npress ok to be redircted to the editor page")){
                                        window.location.replace("/editor");
                                    }
                                } else {
                                    window.alert("ERROR : published UNsuccessful\n you should try to publish and save manualy");
                                }
                            });
                } else {

                } 
            } else {
                window.alert("the url has been found NOT VALID !\n make sure there are no spaces typos or duplicate text..\n ");
            }
        });
        return false;
        })
    ).before(
            jQuery('<a id="mark_broken" href="#">toggle mark</a>').css({"margin-left":"30px","display": "inline-block"}).bind("click", function(e){
                jQuery("#edit-title,#edit-title-copy,#edit-biblio-custom1-value").each(function(i,val){
                    if(!jQuery(val).val().match(/###/i)){
                        jQuery(val).val("### "+jQuery(val).val());
                    } else {
                        jQuery(val).val(        jQuery(val).val().replace(/### /i, ""));
                    }
                });
            })
            );
}
});
        
