<?php
/**
 * @file
 * biblio_url_validation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
//function biblio_url_validation_views_default_views() {
//$export = array();
//$view = new view();
//$view->name = 'broken';
//$view->description = '';
//$view->tag = 'default';
//$view->base_table = 'node';
//$view->human_name = 'broken';
//$view->core = 7;
//$view->api_version = '3.0';
//$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
//
///* Display: Master */
//$handler = $view->new_display('default', 'Master', 'default');
//$handler->display->display_options['title'] = 'broken';
//$handler->display->display_options['use_more_always'] = FALSE;
//$handler->display->display_options['use_more_text'] = 'עוד';
//$handler->display->display_options['access']['type'] = 'perm';
//$handler->display->display_options['cache']['type'] = 'none';
//$handler->display->display_options['query']['type'] = 'views_query';
//$handler->display->display_options['exposed_form']['type'] = 'basic';
//$handler->display->display_options['exposed_form']['options']['submit_button'] = 'חפש';
//$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
//$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
//$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
//$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
//$handler->display->display_options['pager']['type'] = 'full';
//$handler->display->display_options['pager']['options']['items_per_page'] = '10';
//$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'מספר פריטים בעמוד';
//$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- הכל -';
//$handler->display->display_options['pager']['options']['expose']['offset_label'] = 'היסט';
//$handler->display->display_options['pager']['options']['tags']['first'] = '« לעמוד הראשון';
//$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ לעמוד הקודם';
//$handler->display->display_options['pager']['options']['tags']['next'] = 'לעמוד הבא ›';
//$handler->display->display_options['pager']['options']['tags']['last'] = 'לעמוד האחרון »';
//$handler->display->display_options['style_plugin'] = 'table';
//$handler->display->display_options['style_options']['columns'] = array(
//  'title' => 'title',
//  'biblio_custom1' => 'biblio_custom1',
//  'nid' => 'nid',
//  'biblio_url' => 'biblio_url',
//  'delete_node' => 'delete_node',
//  'edit_node' => 'edit_node',
//  'contextual_links' => 'title',
//);
//$handler->display->display_options['style_options']['default'] = '-1';
//$handler->display->display_options['style_options']['info'] = array(
//  'title' => array(
//    'sortable' => 0,
//    'default_sort_order' => 'asc',
//    'align' => '',
//    'separator' => '',
//    'empty_column' => 0,
//  ),
//  'biblio_custom1' => array(
//    'align' => '',
//    'separator' => '',
//    'empty_column' => 0,
//  ),
//  'nid' => array(
//    'sortable' => 0,
//    'default_sort_order' => 'asc',
//    'align' => '',
//    'separator' => '',
//    'empty_column' => 0,
//  ),
//  'biblio_url' => array(
//    'align' => '',
//    'separator' => '',
//    'empty_column' => 0,
//  ),
//  'delete_node' => array(
//    'align' => '',
//    'separator' => '',
//    'empty_column' => 0,
//  ),
//  'edit_node' => array(
//    'align' => '',
//    'separator' => '',
//    'empty_column' => 0,
//  ),
//  'contextual_links' => array(
//    'align' => '',
//    'separator' => '',
//    'empty_column' => 0,
//  ),
//);
//$handler->display->display_options['style_options']['sticky'] = TRUE;
///* שדה: תוכן: כותרת */
//$handler->display->display_options['fields']['title']['id'] = 'title';
//$handler->display->display_options['fields']['title']['table'] = 'node';
//$handler->display->display_options['fields']['title']['field'] = 'title';
//$handler->display->display_options['fields']['title']['label'] = '';
//$handler->display->display_options['fields']['title']['exclude'] = TRUE;
//$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
//$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
//$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
//$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
///* שדה: Biblio: Custom 1 */
//$handler->display->display_options['fields']['biblio_custom1']['id'] = 'biblio_custom1';
//$handler->display->display_options['fields']['biblio_custom1']['table'] = 'biblio';
//$handler->display->display_options['fields']['biblio_custom1']['field'] = 'biblio_custom1';
//$handler->display->display_options['fields']['biblio_custom1']['label'] = '';
//$handler->display->display_options['fields']['biblio_custom1']['alter']['alter_text'] = TRUE;
//$handler->display->display_options['fields']['biblio_custom1']['alter']['text'] = '<div title="[title]">[biblio_custom1]</div>';
//$handler->display->display_options['fields']['biblio_custom1']['element_label_colon'] = FALSE;
//$handler->display->display_options['fields']['biblio_custom1']['empty'] = '<div title="[title]">אין שם מאמר ??</div>';
///* שדה: תוכן: Nid */
//$handler->display->display_options['fields']['nid']['id'] = 'nid';
//$handler->display->display_options['fields']['nid']['table'] = 'node';
//$handler->display->display_options['fields']['nid']['field'] = 'nid';
//$handler->display->display_options['fields']['nid']['label'] = '';
//$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
//$handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="">מאמר תקין</a>';
//$handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
//$handler->display->display_options['fields']['nid']['alter']['path'] = 'valid/[nid]';
//$handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
//$handler->display->display_options['fields']['nid']['alter']['alt'] = 'הפוך מאמר לתקין';
//$handler->display->display_options['fields']['nid']['alter']['target'] = '_blank';
//$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
///* שדה: Biblio: URL */
//$handler->display->display_options['fields']['biblio_url']['id'] = 'biblio_url';
//$handler->display->display_options['fields']['biblio_url']['table'] = 'biblio';
//$handler->display->display_options['fields']['biblio_url']['field'] = 'biblio_url';
//$handler->display->display_options['fields']['biblio_url']['label'] = '';
//$handler->display->display_options['fields']['biblio_url']['alter']['make_link'] = TRUE;
//$handler->display->display_options['fields']['biblio_url']['alter']['path'] = '[biblio_url]';
//$handler->display->display_options['fields']['biblio_url']['alter']['external'] = TRUE;
//$handler->display->display_options['fields']['biblio_url']['alter']['target'] = '_blank';
//$handler->display->display_options['fields']['biblio_url']['element_label_colon'] = FALSE;
//$handler->display->display_options['fields']['biblio_url']['biblio_label'] = 0;
///* שדה: תוכן: מחק קישור */
//$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
//$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
//$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
//$handler->display->display_options['fields']['delete_node']['label'] = '';
//$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
//$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
///* שדה: תוכן: ערוך קישור */
//$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
//$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
//$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
//$handler->display->display_options['fields']['edit_node']['label'] = '';
//$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
//$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
///* שדה: כללי: Contextual Links */
//$handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
//$handler->display->display_options['fields']['contextual_links']['table'] = 'views';
//$handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
//$handler->display->display_options['fields']['contextual_links']['label'] = '';
//$handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
//$handler->display->display_options['fields']['contextual_links']['fields'] = array(
//  'nid' => 'nid',
//  'delete_node' => 'delete_node',
//  'edit_node' => 'edit_node',
//  'title' => 0,
//  'biblio_custom1' => 0,
//  'biblio_url' => 0,
//);
///* קריטריון לסידור: תוכן: תאריך פירסום */
//$handler->display->display_options['sorts']['created']['id'] = 'created';
//$handler->display->display_options['sorts']['created']['table'] = 'node';
//$handler->display->display_options['sorts']['created']['field'] = 'created';
//$handler->display->display_options['sorts']['created']['order'] = 'DESC';
///* קריטריון לסינון: תוכן: סוג */
//$handler->display->display_options['filters']['type']['id'] = 'type';
//$handler->display->display_options['filters']['type']['table'] = 'node';
//$handler->display->display_options['filters']['type']['field'] = 'type';
//$handler->display->display_options['filters']['type']['value'] = array(
//  'biblio' => 'biblio',
//);
///* קריטריון לסינון: Biblio: Custom 7 */
//$handler->display->display_options['filters']['biblio_custom7']['id'] = 'biblio_custom7';
//$handler->display->display_options['filters']['biblio_custom7']['table'] = 'biblio';
//$handler->display->display_options['filters']['biblio_custom7']['field'] = 'biblio_custom7';
//$handler->display->display_options['filters']['biblio_custom7']['value'] = 'broken';
//
///* Display: Page */
//$handler = $view->new_display('page', 'Page', 'page');
//$handler->display->display_options['path'] = 'broken';
//  $export['broken'] = $view;
//
//  return $export;
//}
