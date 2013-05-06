
(function($) {

  Drupal.Collapsiblock = Drupal.Collapsiblock || {};

  Drupal.behaviors.collapsiblock = {

    attach: function (context,settings) {
      var cookieData = Drupal.Collapsiblock.getCookieData();
      var slidetype = settings.collapsiblock.slide_type;
      var defaultState = settings.collapsiblock.default_state;
      var slidespeed = parseInt(settings.collapsiblock.slide_speed);
      var title = settings.collapsiblock.block_title;
      var block = settings.collapsiblock.block;
      var block_content = settings.collapsiblock.block_content;
      $(block + ':not(.collapsiblock-processed)', context).addClass('collapsiblock-processed').each(function () {
        var id = this.id.replace(/_/g, '-');
        var titleElt = $(title, this).not($('.content :header',this));
        if (titleElt.size()) {
          titleElt = titleElt[0];
          // Status values: 1 = not collapsible, 2 = collapsible and expanded, 3 = collapsible and collapsed, 4 = always collapsed
          var stat = settings.collapsiblock.blocks[id] ? settings.collapsiblock.blocks[id] : defaultState;
          if (stat == 1) {
            return;
          }

          titleElt.target = $(this).find(block_content);
          $(titleElt)
          .wrapInner('<a href="#" role="link" />')
          .addClass('collapsiblock')
          .click(function (e) {
            var st = Drupal.Collapsiblock.getCookieData();
            if ($(this).is('.collapsiblockCollapsed')) {
              $(this).removeClass('collapsiblockCollapsed');
              if (slidetype == 1) {
                $(this.target).slideDown(slidespeed).attr('aria-hidden', false); ;
              }
              else {
                $(this.target).animate({
                  height:'show',
                  opacity:'show'
                }, slidespeed);
              }

              // Don't save cookie data if the block is always collapsed.
              if (stat != 4) {
                st[id] = 1;
              }
            }
            else {
              $(this).addClass('collapsiblockCollapsed');
              if (slidetype == 1) {
                $(this.target).slideUp(slidespeed).attr('aria-hidden', true);
              }
              else {
                $(this.target).animate({
                  height:'hide',
                  opacity:'hide'
                }, slidespeed);
              }

              // Don't save cookie data if the block is always collapsed.
              if (stat != 4) {
                st[id] = 0;
              }
            }
            // Stringify the object in JSON format for saving in the cookie.
            var cookieString = '{ ';
            var cookieParts = [];
            $.each(st, function (id, setting) {
              cookieParts[cookieParts.length] = ' "' + id + '": ' + setting;
            });
            cookieString += cookieParts.join(', ') + ' }';
            $.cookie('collapsiblock', cookieString, {
              path: settings.basePath
            });
            e.preventDefault();
          });
          // Leave active blocks uncollapsed. If the block is expanded, do nothing.
          if (stat ==  4 || (cookieData[id] == 0 || (stat == 3 && cookieData[id] == undefined)) && !$(this).find('a.active').size()) {
            // Allow block content to assign class 'collapsiblock-force-open' to it's content to force
            // itself to stay open. E.g. useful if block contains a form that was just ajaxly updated and should be visible
            if (titleElt.target.hasClass('collapsiblock-force-open') || titleElt.target.find('.collapsiblock-force-open').size() > 0) {
              return;
            }
            $(titleElt).addClass('collapsiblockCollapsed');
            $(titleElt.target).hide();
          }
        }
      });
    }

  };

  Drupal.Collapsiblock.getCookieData = function () {
    if ($.cookie) {
      var cookieString = $.cookie('collapsiblock');
      return cookieString ? $.parseJSON(cookieString) : {};
    }
    else {
      return '';
    }
  };


})(jQuery);
;
Drupal.avishay = {};
Drupal.avishay.getCitations = function(nid){
    if(Drupal.settings.username != "anonymous"){
        if(typeof(arguments[0]) === "number"){
            that = Array();
            var url = '/ajax/citation/'+nid+'/style-all';
            jQuery.getJSON(url, function(json) {
                    jQuery.each(json.nodes[0].node , function(key, val){
                            var citation = {"key" : key, "nid": nid, "citation" : val};
                            that.push( citation);
                    });
            });
            return that;
        };
    }
};
Drupal.avishay.bookmarkActionLiveClick =  function(e){
	var context = jQuery(e.currentTarget).parents("tr");
	var productName = jQuery(context).attr("cart_export");
	var articleName = jQuery('td.views-field-biblio-custom1 p', context).text();
	var nid = jQuery(context).attr("nid");
	var messages = Array();
	if(jQuery(".cart_export ", context).length === 1 || jQuery(".buy_export ", context).length === 1){
		e.preventDefault();
		jQuery(".buy_export", context ).addClass("getme");
		if(jQuery(".buy_export", context).length != 0){
			messages.push(Drupal.t(	'you must buy this ("גישה ליצוא ביבליוגרפיה") for the article:</a> ("'+articleName+'") before exporting it'));
		}
		if(jQuery(".cart_export", context).length != 0){
			//~ console.log('context');
			messages.push(Drupal.t('<div style="direction: ltr">the ("article export product") <br/>for the article :<br/>("'+articleName+'")<br/> is in your cart..<br/> in order to export it you need to pay .. <br/><a style="width:100%; text-align:center;display:inline-block;color: inherit;direction:ltr;" href="/checkout">checkout now ?</a></div>'));
		}
		//~ Drupal.avishay.msg(messages, jQuery('#block-views-flag-bookmarks-block-2 div.view'),	600,false);

		jQuery(messages).each(function(i,val){
		var notice = '<div class="notice purr avishaycsspurr" ><div class="notice-body">';
			notice += val;
			notice += '</div><div class="notice-bottom"></div></div>';
			jQuery(notice).purr();


		})
		return false;
	} else {
		if(jQuery(e.currentTarget).hasClass("check")){
			jQuery(e.currentTarget).removeClass("check");
		} else {
			jQuery(e.currentTarget).addClass("check");
		}
	}
};
Drupal.avishay.bookmarkAttach = function(context){

	context = jQuery(	'.view-flags.view-id-flags.view-display-id-attachment_1'			);
	jQuery('table:not(.bookmarkExportActionTaken)', context ).addClass('bookmarkExportActionTaken').each(function(i,table){
		var op = jQuery('<div class="input_wrap"><input type="checkbox" class="bookmarkAction" style="margin:0px"/></div>');
		var select = jQuery('<select></select>').attr("id",  "style");
		// check for a table haeder
		jQuery('thead tr', table).each(function(i,val){
				jQuery(val).append(jQuery('<th class="action">סמן מקורות</th>').addClass('bookmarkExportActionTaken').addClass('all').css({"padding": "0 5px","vertical-align": "middle"}));
		});
		jQuery(' tbody tr', table).each(function(i,val){				// insert a checkbox  in a new  table colum
			jQuery(val).append(jQuery('<td class="action"></td>').append(jQuery(op).clone()
						)/*append*/	);/*append*/
			var classs = String(jQuery(val).attr("class"));
			nid = parseInt(classs.replace(/(.*)nid-(\d*)-nid(.*)/g, "$2"));
			jQuery(val).attr("nid",nid);
		});
		jQuery(Array("ama", "apa", "chicago", "classic", "cse", "ieee", "mla", "vancouver")).each(function(i, val){
			var option = jQuery('<option></option>').attr({"value": val}).text(val);
//			if(i===0){
//				option = jQuery('<option></option>').attr({"value": val,"selected" : "selected"}).text(val).attr();
//			}
			jQuery(select).append(option);
		});
                jQuery(select).append(jQuery('<option></option>').attr({"value": "default","selected" : "selected"}).text("-ערך ברירת מחדל-"));
		// add an "action button + select options" to act upon our selected rows
//		var style = '    border: 2px solid green;    border-radius: 7px ;     padding: 2px 7px;  margin-top:3px;  position: absolute;    ';
		jQuery(table).parents(".view.quote").append(jQuery('<div id="export_wrap"><div id="help"></div></div>').prepend(jQuery('<div id="select_wrap"></div>').prepend(select)).append(jQuery('<a href="/get_export" id="bookmarkActionSubmit">צור רשימה ביבליוגרפית</a>')));
		jQuery('body.page-user .view.quote #export_wrap').append(jQuery(''));

		jQuery('input.all:not(input:checked)', table).live("mousedown", function(e){
				jQuery('input.bookmarkAction:not(input:checked):not(.all)').click();
		});
		jQuery('input:not(.all):not(:checked)', table).live("click", function(e){
						Drupal.avishay.bookmarkActionLiveClick(e);
						});
	});
};
Drupal.avishay.msg = function(text, context, speed, title){
//TODO:  .stop(true, true) --  animation stop ?
		clearTimeout(this.timer);
		if(jQuery("div#messages").length !== 0 ){

			jQuery(text).each(function(i,val){

				jQuery("div.messages ul").prepend('<li>'+val+'</li>');
			});
			jQuery('div#messages').show(speed);
		} else {
			var container = jQuery('<div id="messages"><div class="section clearfix sectionClearWidth"><div class="messages status"><h2 class="element-invisible">Status message</h2><ul></ul></div></div></div>');
			if(title === true){
				if(jQuery("div#messages h4", container).length  === 0){
						jQuery("div.messages", container).prepend('<h4>'+Drupal.t('Some items have not been selected, details')+':</h4>');
					};
			}

			jQuery(text).each(function(i,val){
				jQuery("div.messages ul",	container).append(jQuery('<li>'+val+'</li>'));
			});

			jQuery('div#messages',		container).show(speed);

			var settings = {"content": jQuery(container).html() ,"title" : "", "height" : 450, "width"	:800, "animate" : true};


			jQuery(context).before(container);
			//~ Drupal.avishay.shadowbox(settings);
		}
		this.timer = setTimeout(function(){
					jQuery('div#messages:not(.stop)').hide(1000);
						jQuery("div.messages ul li").addClass("old");
		},5000);
};
Drupal.avishay.shadowbox = function(settings){
	Shadowbox.init({skipSetup: true });
    Shadowbox.open({
        content:    settings.content,
        player:     "html",
		title:      settings.title,
        height:     settings.height,
        width:      settings.width,
        animate:	settings.animate,
		options:	{	onClose : function() {

						//~ jQuery('#page-wrapper').css({"opacity":"1"});
						if(jQuery("body.page-cart")){
							 jQuery("body.page-cart").css("display", "none");
							 window.location.reload();

						}
						},
						onFinish: function(elm){
										var notice = '<div class="notice purr avishaycsspurr" id="shadowbox_buy_url_bug" ><div class="notice-body">';
										notice += 'XXXXXXXXXX';
										notice += '</div><div class="notice-bottom"></div></div>';
									//	jQuery(notice).purr();

										Drupal.avishay.bookmarkAttach();
										Drupal.avishay.incart();
										Drupal.avishay.free_url();
										Drupal.avishay.cartLinks();
										Drupal.avishay.link_setup_get_productName(jQuery('#sb-player .buy_url'));
										Drupal.avishay.bookmarkFlag();
										},
						//overlayColor : "#f00"
					}
    });
};

jQuery(document).ready(function(){
// #####    MENU - user menu <= zone-header => region-user-second


    jQuery('body.page-user  ul.tabs li').each(function(i,val){
        var a = jQuery("a", val);
        var match = /צור איתנו קשר/i;
            var match2 = /ערוך/i;
         if(jQuery(a).text().match(match)){
             jQuery( val).remove();
         }
         if(jQuery(a).text().match(match2)){
             jQuery("a", val).text("פרטים אישיים");
         }
    });

    jQuery('#section-header .region-inner.region-user-second-inner li').each(function(i,val){
        var a = jQuery("a", val);
        var match = /לקופה/i;
        var match2 = /חידוש סיסמה/i;
        var match3 = /Log out/i;
         if(jQuery(a).text().match(match)){
             jQuery( val).attr({"id":"shopping-cart"}).addClass("shopping-cart").children('a').attr("href", "/cart");
            jQuery(a).css("color","rgba(255,255,255,0)").text(".");

            jQuery(val).addClass("showme");
            jQuery('.block-login .item-list ul').append(val);
         }
         if(jQuery(a).text().match(match2)){
             jQuery(val).remove();
         }
         if(jQuery(a).text().match(match3)){
             jQuery(a).text("יציאה");
         }
     });
    jQuery('#region-user-second .item-list ul').prepend(   jQuery('<li><a id="block-login-toggle" title="" href="#">כניסה</a></li>'));
    jQuery('#region-user-second  .block-login #block-login-toggle').bind("click", function(e){
             jQuery('.block-login #user-login-form .form-item,.block-login #user-login-form .form-submit').toggle(500);
    });
    var ulMenu = jQuery("body.not-logged-in #block-system-user-menu ul.menu");
    if(jQuery("li", ulMenu ).length === 0){
        jQuery(ulMenu).remove();
    }
    jQuery('#region-user-second ul').parent().not(".contextual-links-wrapper").append(jQuery('<div id="menu_bg_grad_left"></div>')).prepend(jQuery('<div id="menu_bg_grad_right"></div>'));

   // ####  CITATION EXPORT  -START
    // - help div toggle
    jQuery('.quote #export_wrap #help').live("click", function(e){
        jQuery('.quote .view-footer').toggle('fast');

     });
    jQuery('a#bookmarkActionSubmit').live("click", function(e){
		e.preventDefault();
		var target = '';
		//~ var len = jQuery('table tr.get_export input:checked').length;
		var len = jQuery('table tr input:checked').length;
		//~ jQuery('table tr.get_export .bookmarkAction:checked:not(.all)').each(function(i, val){
		jQuery('table tr .bookmarkAction:checked:not(.all)').each(function(i, val){
			var nid = jQuery(val).parents("tr").attr("nid");
			var classs = String(jQuery(val).parent().parent().attr("class"));
			if(typeof(nid) === "undefined" && classs != ""){
				nid = parseInt(classs.replace(/(.*)nid-(\d*)-nid(.*)/g, "$2"));
			}
			if(i === len-1){
				target += nid;
			}	else{
				target += nid+'+';
			}
		});
		var style = jQuery('select#style option:selected').val();
		if(typeof(target) === "string" && target != ""){
		//~ jQuery(e.currentTarget).attr("href", '/get_export?style='+style+'&target='+target);
			window.location = '/get_export?style='+style+'&target='+target;
		}
		return false;
	});
    // ####  CITATION EXPORT  - END
    document.title =  document.title+' | '+Drupal.settings.username;
    jQuery('#header h2.element-invisible').removeClass('element-invisible');
    if(typeof(Drupal.avishay.flags) !== "undefined"){Drupal.avishay.flags();};

    //  ####  TRANSLATION  -- cart summary -- "Order total" on /checkout
	jQuery('.commerce-order-commerce-order .component-title').text('סה"כ');
    //  ####  citation export feature on page-orders 
    if(jQuery('body.page-user-').length === 1){
        Drupal.avishay.bookmarkAttach();
    }

    //homepage layout change - block services
    
    jQuery('body.front #region-sidebar-first').removeClass('suffix-1').removeClass('grid-3').addClass('grid-4');
    
    // search page - research page - block un -collapse
    jQuery('body.page-search-biblio-research #block-facetapi-teg6sxevoi6j1spgksf3t0fons374p0k h2').click();

    
//  CONTACT FORM 
jQuery('body.page-contact #contact-site-form .form-item:visible"').each(function(i,val){
    jQuery("span", val).remove();
    var label = jQuery("label", val).text();
    if(typeof(jQuery("input", val).attr("value")) === "string"){
        if(jQuery("input", val).attr("value").length === 0){                
            jQuery("input", val).attr("value",label).bind("focus", function(e){
                jQuery(e.currentTarget).attr("value","");
            });
        }
    }
});

jQuery('body.page-contact #contact-site-form .form-item-message').each(function(i,val){
    jQuery("span", val).remove();
    var label = jQuery("label", val).text();
    if(jQuery("textarea", val).text().length === 0){
    jQuery("textarea", val).text(label).bind("focus", function(e){                
                jQuery(e.currentTarget).text("");
            });;
    }
    
});



 // homepage slideshow pager style
var timer =     window.setTimeout(function(){
    var ul_width = 0;
        jQuery('.view-id-homepage_banner  .jcarousel-navigation li').each(function(i,val){
            ul_width = ul_width  + 40;
        });
        jQuery('.view-id-homepage_banner  ul.jcarousel-navigation').css({"width":ul_width ,"visibility":"visible"});
},500);
//jQuery('section#block-system-main-menu.block div.block-inner div.content').show();       

});
jQuery(document).ajaxStart(function () {
/* * 		setup global ajax event listeners*/
        }).ajaxSend(function (e, xhr, opts) {
        }).ajaxError(function (e, xhr, opts) {
        }).ajaxSuccess(function (e, xhr, opts) {
        }).ajaxComplete(function (e, xhr, opts) {
    window.setTimeout(function(){jQuery('img.views_flag_refresh-throbber').remove();},1000);
});
;
