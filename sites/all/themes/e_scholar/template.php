<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
//    function e_scholar_pager_first($variables){
//        
//        $text = $variables['text'];
//  $element = $variables['element'];
//  $parameters = $variables['parameters'];
//  global $pager_page_array;
//  $output = '';
//
//  // If we are anywhere but the first page
//  if ($pager_page_array[$element] > 0) {
//    $output = theme('pager_link', array('text' => $text, 'page_new' => pager_load_array(0, $element, $pager_page_array), 'element' => $element, 'parameters' => $parameters));
//  }
//
//  return $output;
//        

function e_scholar_preprocess_html(&$variables) {
  drupal_add_css(path_to_theme() . '/css/ie-lte-8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 9', '!IE' => FALSE), 'preprocess' => FALSE));
}