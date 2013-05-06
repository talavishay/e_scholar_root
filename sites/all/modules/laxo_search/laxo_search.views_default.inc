<?php
/**
 * @file
 * laxo_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function laxo_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_api_solr_view';
  $view->description = '';
  $view->tag = 'laxo';
  $view->base_table = 'search_api_index_solr_node_index';
  $view->human_name = 'laxo search_api@solr';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_biblio_qualitive' => 'field_biblio_qualitive',
    'field_biblio_quantitative' => 'field_biblio_quantitative',
    'field_biblio_research' => 'field_biblio_research',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['link_to_entity'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['biblio_custom4']['id'] = 'biblio_custom4';
  $handler->display->display_options['fields']['biblio_custom4']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['biblio_custom4']['field'] = 'biblio_custom4';
  $handler->display->display_options['fields']['biblio_custom4']['label'] = '';
  $handler->display->display_options['fields']['biblio_custom4']['element_type'] = 'strong';
  $handler->display->display_options['fields']['biblio_custom4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['biblio_custom4']['empty'] = 'שם מאמר יחודי לאתר לא הוגדר למאמר זה..';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'שם מאמר מקור';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: biblio keywords */
  $handler->display->display_options['fields']['biblio_keywords']['id'] = 'biblio_keywords';
  $handler->display->display_options['fields']['biblio_keywords']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['biblio_keywords']['field'] = 'biblio_keywords';
  $handler->display->display_options['fields']['biblio_keywords']['label'] = 'מילות מפתח';
  $handler->display->display_options['fields']['biblio_keywords']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['biblio_keywords']['link_to_entity'] = 0;
  /* Field: Indexed Node: biblio type */
  $handler->display->display_options['fields']['biblio_type']['id'] = 'biblio_type';
  $handler->display->display_options['fields']['biblio_type']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['biblio_type']['field'] = 'biblio_type';
  $handler->display->display_options['fields']['biblio_type']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['biblio_type']['link_to_entity'] = 0;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'free/url/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['link_class'] = 'use-ajax';
  $handler->display->display_options['fields']['nid']['element_label_type'] = 'p';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '\'';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: biblio_qualitive */
  $handler->display->display_options['fields']['field_biblio_qualitive']['id'] = 'field_biblio_qualitive';
  $handler->display->display_options['fields']['field_biblio_qualitive']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_biblio_qualitive']['field'] = 'field_biblio_qualitive';
  $handler->display->display_options['fields']['field_biblio_qualitive']['label'] = 'איכותני';
  $handler->display->display_options['fields']['field_biblio_qualitive']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_biblio_qualitive']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_biblio_qualitive']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_biblio_qualitive']['view_mode'] = 'full';
  /* Field: Indexed Node: biblio_quantitative */
  $handler->display->display_options['fields']['field_biblio_quantitative']['id'] = 'field_biblio_quantitative';
  $handler->display->display_options['fields']['field_biblio_quantitative']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_biblio_quantitative']['field'] = 'field_biblio_quantitative';
  $handler->display->display_options['fields']['field_biblio_quantitative']['label'] = 'כמותני';
  $handler->display->display_options['fields']['field_biblio_quantitative']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_biblio_quantitative']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_biblio_quantitative']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_biblio_quantitative']['view_mode'] = 'full';
  /* Field: Indexed Node: biblio_research */
  $handler->display->display_options['fields']['field_biblio_research']['id'] = 'field_biblio_research';
  $handler->display->display_options['fields']['field_biblio_research']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_biblio_research']['field'] = 'field_biblio_research';
  $handler->display->display_options['fields']['field_biblio_research']['label'] = 'תחום';
  $handler->display->display_options['fields']['field_biblio_research']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_biblio_research']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_biblio_research']['view_mode'] = 'full';
  /* Field: Indexed Node: commerce */
  $handler->display->display_options['fields']['field_commerce']['id'] = 'field_commerce';
  $handler->display->display_options['fields']['field_commerce']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['fields']['field_commerce']['field'] = 'field_commerce';
  $handler->display->display_options['fields']['field_commerce']['label'] = '';
  $handler->display->display_options['fields']['field_commerce']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_commerce']['alter']['text'] = '<a href="/url/[nid_1]">קרא \\ רכוש</a> ';
  $handler->display->display_options['fields']['field_commerce']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce']['empty'] = '<a href="/free/url/[nid]">קרא בחינם</a>';
  $handler->display->display_options['fields']['field_commerce']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_commerce']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_commerce']['view_mode'] = 'full';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'nid_1' => 0,
    'biblio_custom4' => 0,
    'title' => 0,
    'biblio_keywords' => 0,
    'biblio_type' => 0,
    'nid' => 0,
    'field_biblio_qualitive' => 0,
    'field_biblio_quantitative' => 0,
    'field_biblio_research' => 0,
    'field_commerce' => 0,
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_solr_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search-api-solr-view';
  $export['search_api_solr_view'] = $view;

  return $export;
}
