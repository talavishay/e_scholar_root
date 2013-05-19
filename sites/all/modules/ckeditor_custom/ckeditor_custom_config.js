/*
Copyright (c) 2003-2011, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

CKEDITOR.config.fontSize_sizes ='12 פיקסל/12px;'        +
'13 פיקסל/13px;'+
'14 פיקסל/14px;'+
'16 פיקסל/16px;'+
                                    '18 פיקסל/18px;'+
                                    '20 פיקסל/20px;'+
                                    '22 פיקסל/22px;'+
                                    '24 פיקסל/24px;'+
                                    '26 פיקסל/26px;'+
                                    '28 פיקסל/28px;'+
                                    '30 פיקסל/30px;'+   
                                    '32 פיקסל/32px;'+
                                    '40 פיקסל/40px;'+
                                    '50 פיקסל/50px;'+
                                    '60 פיקסל/60px;';
                            
CKEDITOR.config.contentsLangDirection='rtl';

CKEDITOR.editorConfig = function( config )
{
     
  // config.styleSet is an array of objects that define each style available
  // in the font styles tool in the ckeditor toolbar
  
    config.stylesSet =
  [
        /* Block Styles */

        // Each style is an object whose properties define how it is displayed
        // in the dropdown, as well as what it outputs as html into the editor
        // text area.
        { name : 'פיסקה'   , element : 'p' },
//        { name : 'padding', element : 'div', attributes : { 'style' : 'padding:2em;    ' } },
        { name : 'כותרת 1'  , element : 'h1' },
        { name : 'כותרת 2'   , element : 'h2' },
        { name : 'כותרת 3'   , element : 'h3' },
//        { name : 'כותרת 4'   , element : 'h4' },
//        { name : 'Float Right', element : 'div', attributes : { 'style' : 'float:right;' } },
//        { name : 'Float Left', element : 'div', attributes : { 'style' : 'float:left;margin-right: 2em;' } },
//        { name : 'Preformatted Text', element : 'pre' },
  ];

}
