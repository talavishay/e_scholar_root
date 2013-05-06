<?php
/**
 * @file
 * laxo_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function laxo_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'patterns_first_install';
  $strongarm->value = FALSE;
  $export['patterns_first_install'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 0;
  $export['preprocess_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_js';
  $strongarm->value = 0;
  $export['preprocess_js'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'test2' => array(
      'search_api_views:test2:page' => 'search_api_views:test2:page',
      'search_api_autocomplete' => 'search_api_autocomplete',
      'search_api_page:sss' => 'search_api_page:sss',
      'search_api_views:vbo:page' => 'search_api_views:vbo:page',
      'search_api_views:test2:panel_pane_1' => 'search_api_views:test2:panel_pane_1',
      'search_api_views:test2:default' => 'search_api_views:test2:default',
      'search_api_views:f:default' => 'search_api_views:f:default',
      'search_api_views:f:search_api_views_facets_block_1' => 'search_api_views:f:search_api_views_facets_block_1',
      'search_api_views:test2:attachment_1' => 'search_api_views:test2:attachment_1',
      'search_api_views:test2:services_1' => 'search_api_views:test2:services_1',
      'search_api_views:load:default' => 'search_api_views:load:default',
      'search_api_views:load:services_1' => 'search_api_views:load:services_1',
    ),
    'solr_node_index' => array(
      'search_api_views:search_api_solr_view:page' => 'search_api_views:search_api_solr_view:page',
      'search_api_autocomplete' => 'search_api_autocomplete',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'sub_bartik';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_sub_bartik_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 0,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_sub_bartik_settings'] = $strongarm;

  return $export;
}
