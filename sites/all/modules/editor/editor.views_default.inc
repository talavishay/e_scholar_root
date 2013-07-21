<?php
/**
 * @file
 * editor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function editor_views_default_views() {
  $export = array();
$view = new view();
$view->name = 'editor';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'editor';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'עוד';
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'חפש';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
$handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['row_class'] = '[biblio_custom7]';
$handler->display->display_options['style_options']['columns'] = array(
  'biblio_custom7' => 'biblio_custom7',
  'views_bulk_operations' => 'views_bulk_operations',
  'edit_node' => 'edit_node',
  'delete_node' => 'delete_node',
  'nothing' => 'nothing',
  'nid' => 'nid',
  'biblio_custom1' => 'biblio_custom1',
  'title' => 'title',
  'field_biblio_qualitive' => 'field_biblio_qualitive',
  'field_biblio_quantitative' => 'field_biblio_quantitative',
  'field_biblio_research' => 'field_biblio_research',
  'changed' => 'changed',
  'name' => 'name',
  'uid' => 'uid',
  'biblio_secondary_title' => 'biblio_secondary_title',
  'field_commerce' => 'field_commerce',
);
$handler->display->display_options['style_options']['default'] = 'changed';
$handler->display->display_options['style_options']['info'] = array(
  'biblio_custom7' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'delete_node' => array(
    'align' => 'views-align-center',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nothing' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'biblio_custom1' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_biblio_qualitive' => array(
    'align' => 'views-align-right',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_biblio_quantitative' => array(
    'align' => 'views-align-right',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_biblio_research' => array(
    'align' => 'views-align-right',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'uid' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'biblio_secondary_title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_commerce' => array(
    'align' => 'views-align-right',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
/* כותרת: כללי: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* התנהגות כאשר אין תוצאות: כללי: Result summary */
$handler->display->display_options['empty']['result']['id'] = 'result';
$handler->display->display_options['empty']['result']['table'] = 'views';
$handler->display->display_options['empty']['result']['field'] = 'result';
$handler->display->display_options['empty']['result']['empty'] = TRUE;
/* התנהגות כאשר אין תוצאות: כללי: אזור טקסט */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<h5 style="text-align: center">click on nid to get more info about the article </h5>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* יחס: תוכן: מחבר */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* שדה: פעולות צובר: תוכן */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Content';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '8';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_assign_owner_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 1,
  ),
  'action::system_message_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::flag_node_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_make_sticky_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 're-Categorize',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        'biblio::field_biblio_qualitive' => 'biblio::field_biblio_qualitive',
        'biblio::field_biblio_quantitative' => 'biblio::field_biblio_quantitative',
        'biblio::field_biblio_research' => 'biblio::field_biblio_research',
      ),
    ),
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'url' => '',
    ),
  ),
  'action::node_promote_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_publish_action' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 1,
  ),
  'action::system_goto_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_unpromote_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_save_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::system_send_email_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_unpublish_action' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 1,
  ),
  'action::node_unpublish_by_keyword_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
);
/* שדה: Biblio: Custom 1 */
$handler->display->display_options['fields']['biblio_custom1']['id'] = 'biblio_custom1';
$handler->display->display_options['fields']['biblio_custom1']['table'] = 'biblio';
$handler->display->display_options['fields']['biblio_custom1']['field'] = 'biblio_custom1';
$handler->display->display_options['fields']['biblio_custom1']['label'] = 'name';
/* שדה: תוכן: כותרת */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* שדה: תוכן: איכותני */
$handler->display->display_options['fields']['field_biblio_qualitive']['id'] = 'field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['table'] = 'field_data_field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['field'] = 'field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['label'] = 'biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_qualitive']['delta_offset'] = '0';
/* שדה: תוכן: כמותני */
$handler->display->display_options['fields']['field_biblio_quantitative']['id'] = 'field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['table'] = 'field_data_field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['field'] = 'field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['label'] = 'biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_quantitative']['delta_offset'] = '0';
/* שדה: תוכן: תחום */
$handler->display->display_options['fields']['field_biblio_research']['id'] = 'field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['table'] = 'field_data_field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['field'] = 'field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['label'] = 'biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_research']['delta_offset'] = '0';
/* שדה: תוכן: commerce */
$handler->display->display_options['fields']['field_commerce']['id'] = 'field_commerce';
$handler->display->display_options['fields']['field_commerce']['table'] = 'field_data_field_commerce';
$handler->display->display_options['fields']['field_commerce']['field'] = 'field_commerce';
$handler->display->display_options['fields']['field_commerce']['type'] = 'commerce_product_reference_title_plain';
$handler->display->display_options['fields']['field_commerce']['settings'] = array(
  'show_quantity' => 0,
  'default_quantity' => '1',
  'combine' => 1,
  'show_single_product_attributes' => 0,
  'line_item_type' => 0,
);
$handler->display->display_options['fields']['field_commerce']['delta_offset'] = '0';
/* שדה: תוכן: פרסם */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['label'] = 'Published';
$handler->display->display_options['fields']['status']['not'] = 0;
/* שדה: תוכן: מחק קישור */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = 'Delete link';
/* שדה: תוכן: ערוך קישור */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Edit link';
/* שדה: תוכן: תאריך עידכון */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated date';
$handler->display->display_options['fields']['changed']['date_format'] = 'long';
/* שדה: Biblio: Type of Publication */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'biblio_types';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Type';
/* קריטריון לסידור: תוכן: איכותני (field_biblio_qualitive) */
$handler->display->display_options['sorts']['field_biblio_qualitive_tid']['id'] = 'field_biblio_qualitive_tid';
$handler->display->display_options['sorts']['field_biblio_qualitive_tid']['table'] = 'field_data_field_biblio_qualitive';
$handler->display->display_options['sorts']['field_biblio_qualitive_tid']['field'] = 'field_biblio_qualitive_tid';
$handler->display->display_options['sorts']['field_biblio_qualitive_tid']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_biblio_qualitive_tid']['expose']['label'] = 'biblio_qualitive';
/* קריטריון לסידור: תוכן: כמותני (field_biblio_quantitative) */
$handler->display->display_options['sorts']['field_biblio_quantitative_tid']['id'] = 'field_biblio_quantitative_tid';
$handler->display->display_options['sorts']['field_biblio_quantitative_tid']['table'] = 'field_data_field_biblio_quantitative';
$handler->display->display_options['sorts']['field_biblio_quantitative_tid']['field'] = 'field_biblio_quantitative_tid';
$handler->display->display_options['sorts']['field_biblio_quantitative_tid']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_biblio_quantitative_tid']['expose']['label'] = 'biblio_quantitative';
/* קריטריון לסידור: תוכן: תחום (field_biblio_research) */
$handler->display->display_options['sorts']['field_biblio_research_tid']['id'] = 'field_biblio_research_tid';
$handler->display->display_options['sorts']['field_biblio_research_tid']['table'] = 'field_data_field_biblio_research';
$handler->display->display_options['sorts']['field_biblio_research_tid']['field'] = 'field_biblio_research_tid';
$handler->display->display_options['sorts']['field_biblio_research_tid']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_biblio_research_tid']['expose']['label'] = 'biblio_research';
/* קריטריון לסידור: תוכן: תאריך פירסום */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['sorts']['created']['exposed'] = TRUE;
$handler->display->display_options['sorts']['created']['expose']['label'] = 'תאריך פירסום';
/* קריטריון לסידור: Biblio: Type of Publication */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'biblio_types';
$handler->display->display_options['sorts']['name']['field'] = 'name';
$handler->display->display_options['sorts']['name']['exposed'] = TRUE;
$handler->display->display_options['sorts']['name']['expose']['label'] = 'Type';
/* קריטריון לסידור: Biblio: Year of Publication */
$handler->display->display_options['sorts']['biblio_year']['id'] = 'biblio_year';
$handler->display->display_options['sorts']['biblio_year']['table'] = 'biblio';
$handler->display->display_options['sorts']['biblio_year']['field'] = 'biblio_year';
$handler->display->display_options['sorts']['biblio_year']['exposed'] = TRUE;
$handler->display->display_options['sorts']['biblio_year']['expose']['label'] = 'Year';
/* קריטריון לסידור: תוכן: commerce (field_commerce) */
$handler->display->display_options['sorts']['field_commerce_product_id']['id'] = 'field_commerce_product_id';
$handler->display->display_options['sorts']['field_commerce_product_id']['table'] = 'field_data_field_commerce';
$handler->display->display_options['sorts']['field_commerce_product_id']['field'] = 'field_commerce_product_id';
$handler->display->display_options['sorts']['field_commerce_product_id']['exposed'] = TRUE;
$handler->display->display_options['sorts']['field_commerce_product_id']['expose']['label'] = 'commerce';
/* קריטריון לסידור: תוכן: תאריך עידכון */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'node';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
$handler->display->display_options['sorts']['changed']['expose']['label'] = 'Updated date';
$handler->display->display_options['sorts']['changed']['granularity'] = 'day';
/* קריטריון לסידור: תוכן: כותרת */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* קריטריון לסידור: Biblio: Translated Title */
$handler->display->display_options['sorts']['biblio_translated_title']['id'] = 'biblio_translated_title';
$handler->display->display_options['sorts']['biblio_translated_title']['table'] = 'biblio';
$handler->display->display_options['sorts']['biblio_translated_title']['field'] = 'biblio_translated_title';
/* קריטריון לסידור: תוכן: כותרת */
$handler->display->display_options['sorts']['title_1']['id'] = 'title_1';
$handler->display->display_options['sorts']['title_1']['table'] = 'node';
$handler->display->display_options['sorts']['title_1']['field'] = 'title';
/* קריטריון לסידור: תוכן: תאריך פירסום */
$handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
$handler->display->display_options['sorts']['created_1']['table'] = 'node';
$handler->display->display_options['sorts']['created_1']['field'] = 'created';
$handler->display->display_options['sorts']['created_1']['exposed'] = TRUE;
$handler->display->display_options['sorts']['created_1']['expose']['label'] = 'תאריך פירסום';
/* קריטריון לסינון: תוכן: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group'] = 1;
$handler->display->display_options['filters']['nid']['exposed'] = TRUE;
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
$handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
$handler->display->display_options['filters']['nid']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* קריטריון לסינון: תוכן: סוג */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'biblio' => 'biblio',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* קריטריון לסינון: Content revision: כותרת */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node_revision';
$handler->display->display_options['filters']['title']['field'] = 'title';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'מספר פריטים בעמוד';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '5, 10, 50,100';
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
$handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- הכל -';
$handler->display->display_options['pager']['options']['expose']['offset_label'] = 'היסט';
$handler->display->display_options['pager']['options']['tags']['first'] = '« לעמוד הראשון';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ לעמוד הקודם';
$handler->display->display_options['pager']['options']['tags']['next'] = 'לעמוד הבא ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'לעמוד האחרון »';
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* שדה: משתמש: שם */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'users';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
/* שדה: תוכן: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
/* שדה: Biblio: URL */
$handler->display->display_options['fields']['biblio_url']['id'] = 'biblio_url';
$handler->display->display_options['fields']['biblio_url']['table'] = 'biblio';
$handler->display->display_options['fields']['biblio_url']['field'] = 'biblio_url';
$handler->display->display_options['fields']['biblio_url']['label'] = '';
$handler->display->display_options['fields']['biblio_url']['exclude'] = TRUE;
$handler->display->display_options['fields']['biblio_url']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['biblio_url']['empty'] = 'url field is empty !?!';
$handler->display->display_options['fields']['biblio_url']['biblio_label'] = 0;
/* שדה: Biblio: Custom 7 */
$handler->display->display_options['fields']['biblio_custom7']['id'] = 'biblio_custom7';
$handler->display->display_options['fields']['biblio_custom7']['table'] = 'biblio';
$handler->display->display_options['fields']['biblio_custom7']['field'] = 'biblio_custom7';
$handler->display->display_options['fields']['biblio_custom7']['label'] = '';
$handler->display->display_options['fields']['biblio_custom7']['exclude'] = TRUE;
$handler->display->display_options['fields']['biblio_custom7']['element_label_colon'] = FALSE;
/* שדה: פעולות צובר: תוכן */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Content';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '8';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::flag_node_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 're-Categorize',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        'biblio::field_biblio_qualitive' => 'biblio::field_biblio_qualitive',
        'biblio::field_biblio_quantitative' => 'biblio::field_biblio_quantitative',
        'biblio::field_biblio_research' => 'biblio::field_biblio_research',
        'biblio::field_commerce' => 'biblio::field_commerce',
        'biblio::field_biblio_lang' => 'biblio::field_biblio_lang',
      ),
    ),
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'url' => '',
    ),
  ),
  'action::node_unpromote_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_by_keyword_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_make_sticky_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_publish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_promote_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_assign_owner_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::system_send_email_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_save_action' => array(
    'selected' => 0,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* שדה: תוכן: ערוך קישור */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Edit link';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
/* שדה: תוכן: מחק קישור */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = 'Delete link';
$handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
/* שדה: כללי: טקסט מותאם אישית */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '[delete_node]<br/>[edit_node] <hr/> nid : <br/>[nid]<hr/>[name_1] ';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* שדה: Biblio: Custom 1 */
$handler->display->display_options['fields']['biblio_custom1']['id'] = 'biblio_custom1';
$handler->display->display_options['fields']['biblio_custom1']['table'] = 'biblio';
$handler->display->display_options['fields']['biblio_custom1']['field'] = 'biblio_custom1';
$handler->display->display_options['fields']['biblio_custom1']['label'] = 'name';
$handler->display->display_options['fields']['biblio_custom1']['exclude'] = TRUE;
$handler->display->display_options['fields']['biblio_custom1']['alter']['text'] = '<div title="URL - [biblio_url]">[biblio_custom1]</div>';
/* שדה: תוכן: כותרת */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'title';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<div title="URL - [biblio_url]">[title]</div>';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* שדה: כללי: Tooltip field */
$handler->display->display_options['fields']['tooltip']['id'] = 'tooltip';
$handler->display->display_options['fields']['tooltip']['table'] = 'views';
$handler->display->display_options['fields']['tooltip']['field'] = 'tooltip';
$handler->display->display_options['fields']['tooltip']['label'] = 'name';
$handler->display->display_options['fields']['tooltip']['alter']['text'] = '[biblio_custom1]';
$handler->display->display_options['fields']['tooltip']['tooltip_text'] = '[biblio_url]';
$handler->display->display_options['fields']['tooltip']['tooltip_hide_if_equal'] = 1;
/* שדה: כללי: Tooltip field */
$handler->display->display_options['fields']['tooltip_1']['id'] = 'tooltip_1';
$handler->display->display_options['fields']['tooltip_1']['table'] = 'views';
$handler->display->display_options['fields']['tooltip_1']['field'] = 'tooltip';
$handler->display->display_options['fields']['tooltip_1']['label'] = 'title';
$handler->display->display_options['fields']['tooltip_1']['alter']['text'] = '[title]';
$handler->display->display_options['fields']['tooltip_1']['tooltip_text'] = '[biblio_url]';
$handler->display->display_options['fields']['tooltip_1']['tooltip_hide_if_equal'] = 1;
/* שדה: תוכן: איכותני */
$handler->display->display_options['fields']['field_biblio_qualitive']['id'] = 'field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['table'] = 'field_data_field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['field'] = 'field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_qualitive']['delta_offset'] = '0';
/* שדה: תוכן: כמותני */
$handler->display->display_options['fields']['field_biblio_quantitative']['id'] = 'field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['table'] = 'field_data_field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['field'] = 'field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_quantitative']['delta_offset'] = '0';
/* שדה: תוכן: תחום */
$handler->display->display_options['fields']['field_biblio_research']['id'] = 'field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['table'] = 'field_data_field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['field'] = 'field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_research']['delta_offset'] = '0';
/* שדה: Biblio: Type of Publication */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'biblio_types';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Type';
/* שדה: Biblio: Secondary Title */
$handler->display->display_options['fields']['biblio_secondary_title']['id'] = 'biblio_secondary_title';
$handler->display->display_options['fields']['biblio_secondary_title']['table'] = 'biblio';
$handler->display->display_options['fields']['biblio_secondary_title']['field'] = 'biblio_secondary_title';
$handler->display->display_options['fields']['biblio_secondary_title']['biblio_label'] = 1;
/* שדה: תוכן: commerce */
$handler->display->display_options['fields']['field_commerce']['id'] = 'field_commerce';
$handler->display->display_options['fields']['field_commerce']['table'] = 'field_data_field_commerce';
$handler->display->display_options['fields']['field_commerce']['field'] = 'field_commerce';
$handler->display->display_options['fields']['field_commerce']['label'] = 'חינם';
$handler->display->display_options['fields']['field_commerce']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_commerce']['alter']['text'] = 'לא';
$handler->display->display_options['fields']['field_commerce']['empty'] = 'כן';
$handler->display->display_options['fields']['field_commerce']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['field_commerce']['type'] = 'commerce_product_reference_title_plain';
$handler->display->display_options['fields']['field_commerce']['settings'] = array(
  'show_quantity' => 0,
  'default_quantity' => '1',
  'combine' => 1,
  'show_single_product_attributes' => 0,
  'line_item_type' => 0,
);
$handler->display->display_options['fields']['field_commerce']['delta_offset'] = '0';
/* שדה: תוכן: תאריך עידכון */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated date';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* קריטריון לסינון: תוכן: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['group'] = 1;
$handler->display->display_options['filters']['nid']['exposed'] = TRUE;
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
$handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
$handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* קריטריון לסינון: תוכן: סוג */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'biblio' => 'biblio',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* קריטריון לסינון: תוכן: Author uid */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'node';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['value'] = array(
  0 => '124',
  1 => '127',
);
$handler->display->display_options['filters']['uid']['group'] = 1;
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'שם משתמש';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => 0,
  3 => '3',
  1 => 0,
);
$handler->display->display_options['filters']['uid']['expose']['reduce'] = TRUE;
/* קריטריון לסינון: תוכן: פרסם */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '0';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'מפורסם';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => 0,
  3 => '3',
  1 => 0,
);
/* קריטריון לסינון: תוכן: איכותני (field_biblio_qualitive) */
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['id'] = 'field_biblio_qualitive_tid';
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['table'] = 'field_data_field_biblio_qualitive';
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['field'] = 'field_biblio_qualitive_tid';
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['value'] = '';
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['group'] = 1;
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['expose']['operator_id'] = 'field_biblio_qualitive_tid_op';
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['expose']['label'] = 'איכותני ';
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['expose']['operator'] = 'field_biblio_qualitive_tid_op';
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['expose']['identifier'] = 'field_biblio_qualitive_tid';
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_biblio_qualitive_tid']['vocabulary'] = 'biblio_qualitative';
/* קריטריון לסינון: תוכן: כמותני (field_biblio_quantitative) */
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['id'] = 'field_biblio_quantitative_tid';
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['table'] = 'field_data_field_biblio_quantitative';
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['field'] = 'field_biblio_quantitative_tid';
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['value'] = '';
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['group'] = 1;
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['expose']['operator_id'] = 'field_biblio_quantitative_tid_op';
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['expose']['label'] = 'כמותני';
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['expose']['operator'] = 'field_biblio_quantitative_tid_op';
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['expose']['identifier'] = 'field_biblio_quantitative_tid';
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_biblio_quantitative_tid']['vocabulary'] = 'biblio_quantitative';
/* קריטריון לסינון: תוכן: שפת המאמר (field_biblio_lang) */
$handler->display->display_options['filters']['field_biblio_lang_tid']['id'] = 'field_biblio_lang_tid';
$handler->display->display_options['filters']['field_biblio_lang_tid']['table'] = 'field_data_field_biblio_lang';
$handler->display->display_options['filters']['field_biblio_lang_tid']['field'] = 'field_biblio_lang_tid';
$handler->display->display_options['filters']['field_biblio_lang_tid']['value'] = '';
$handler->display->display_options['filters']['field_biblio_lang_tid']['group'] = 1;
$handler->display->display_options['filters']['field_biblio_lang_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_biblio_lang_tid']['expose']['operator_id'] = 'field_biblio_lang_tid_op';
$handler->display->display_options['filters']['field_biblio_lang_tid']['expose']['label'] = 'שפת המאמר';
$handler->display->display_options['filters']['field_biblio_lang_tid']['expose']['operator'] = 'field_biblio_lang_tid_op';
$handler->display->display_options['filters']['field_biblio_lang_tid']['expose']['identifier'] = 'field_biblio_lang_tid';
$handler->display->display_options['filters']['field_biblio_lang_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_biblio_lang_tid']['vocabulary'] = 'language';
/* קריטריון לסינון: תוכן: תחום (field_biblio_research) */
$handler->display->display_options['filters']['field_biblio_research_tid']['id'] = 'field_biblio_research_tid';
$handler->display->display_options['filters']['field_biblio_research_tid']['table'] = 'field_data_field_biblio_research';
$handler->display->display_options['filters']['field_biblio_research_tid']['field'] = 'field_biblio_research_tid';
$handler->display->display_options['filters']['field_biblio_research_tid']['value'] = '';
$handler->display->display_options['filters']['field_biblio_research_tid']['group'] = 1;
$handler->display->display_options['filters']['field_biblio_research_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_biblio_research_tid']['expose']['operator_id'] = 'field_biblio_research_tid_op';
$handler->display->display_options['filters']['field_biblio_research_tid']['expose']['label'] = 'תחום';
$handler->display->display_options['filters']['field_biblio_research_tid']['expose']['operator'] = 'field_biblio_research_tid_op';
$handler->display->display_options['filters']['field_biblio_research_tid']['expose']['identifier'] = 'field_biblio_research_tid';
$handler->display->display_options['filters']['field_biblio_research_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['field_biblio_research_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['field_biblio_research_tid']['vocabulary'] = 'biblio_research';
/* קריטריון לסינון: Biblio: Custom 7 */
$handler->display->display_options['filters']['biblio_custom7']['id'] = 'biblio_custom7';
$handler->display->display_options['filters']['biblio_custom7']['table'] = 'biblio';
$handler->display->display_options['filters']['biblio_custom7']['field'] = 'biblio_custom7';
$handler->display->display_options['filters']['biblio_custom7']['operator'] = 'contains';
$handler->display->display_options['filters']['biblio_custom7']['group'] = 1;
$handler->display->display_options['filters']['biblio_custom7']['exposed'] = TRUE;
$handler->display->display_options['filters']['biblio_custom7']['expose']['operator_id'] = 'biblio_custom7_op';
$handler->display->display_options['filters']['biblio_custom7']['expose']['label'] = 'שבור';
$handler->display->display_options['filters']['biblio_custom7']['expose']['operator'] = 'biblio_custom7_op';
$handler->display->display_options['filters']['biblio_custom7']['expose']['identifier'] = 'biblio_custom7';
$handler->display->display_options['filters']['biblio_custom7']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['biblio_custom7']['expose']['remember_roles'] = array(
  2 => 0,
  3 => '3',
  1 => 0,
);
$handler->display->display_options['path'] = 'editor';

/* Display: Embed on order_stats */
$handler = $view->new_display('embed', 'Embed on order_stats', 'embed_1');
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['defaults']['query'] = FALSE;
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* שדה: תוכן: איכותני */
$handler->display->display_options['fields']['field_biblio_qualitive']['id'] = 'field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['table'] = 'field_data_field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['field'] = 'field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['label'] = 'biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_qualitive']['delta_offset'] = '0';
/* שדה: תוכן: כמותני */
$handler->display->display_options['fields']['field_biblio_quantitative']['id'] = 'field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['table'] = 'field_data_field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['field'] = 'field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['label'] = 'biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_quantitative']['delta_offset'] = '0';
/* שדה: תוכן: תחום */
$handler->display->display_options['fields']['field_biblio_research']['id'] = 'field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['table'] = 'field_data_field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['field'] = 'field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['label'] = 'biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_research']['delta_offset'] = '0';
/* שדה: Biblio: Type of Publication */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'biblio_types';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Type';
$handler->display->display_options['defaults']['sorts'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* קריטריון לסינון: תוכן: סוג */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'biblio' => 'biblio',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* קריטריון לסינון: תוכן: Nid */
$handler->display->display_options['filters']['nid']['id'] = 'nid';
$handler->display->display_options['filters']['nid']['table'] = 'node';
$handler->display->display_options['filters']['nid']['field'] = 'nid';
$handler->display->display_options['filters']['nid']['exposed'] = TRUE;
$handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
$handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
$handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
$handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['use_ajax_flags'] = array(
  'biblio_url' => 0,
  'export' => 0,
  'bookmarks' => 0,
);
$handler->display->display_options['use_ajax_flags_noscrolltop'] = 1;

/* Display: Feed */
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'חפש';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'מיין לפי';
$handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'עולה';
$handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'יורד';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'xls';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* שדה: פעולות צובר: תוכן */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Content';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '8';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_assign_owner_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 1,
  ),
  'action::system_message_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::flag_node_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_make_sticky_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_make_unsticky_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 're-Categorize',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        'biblio::field_biblio_qualitive' => 'biblio::field_biblio_qualitive',
        'biblio::field_biblio_quantitative' => 'biblio::field_biblio_quantitative',
        'biblio::field_biblio_research' => 'biblio::field_biblio_research',
      ),
    ),
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'url' => '',
    ),
  ),
  'action::node_promote_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_publish_action' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 1,
  ),
  'action::system_goto_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_unpromote_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_save_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::system_send_email_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_unpublish_action' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 1,
  ),
  'action::node_unpublish_by_keyword_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
);
/* שדה: Biblio: Custom 1 */
$handler->display->display_options['fields']['biblio_custom1']['id'] = 'biblio_custom1';
$handler->display->display_options['fields']['biblio_custom1']['table'] = 'biblio';
$handler->display->display_options['fields']['biblio_custom1']['field'] = 'biblio_custom1';
$handler->display->display_options['fields']['biblio_custom1']['label'] = 'name';
/* שדה: תוכן: כותרת */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* שדה: תוכן: איכותני */
$handler->display->display_options['fields']['field_biblio_qualitive']['id'] = 'field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['table'] = 'field_data_field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['field'] = 'field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['label'] = 'biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_qualitive']['delta_offset'] = '0';
/* שדה: תוכן: כמותני */
$handler->display->display_options['fields']['field_biblio_quantitative']['id'] = 'field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['table'] = 'field_data_field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['field'] = 'field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['label'] = 'biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_quantitative']['delta_offset'] = '0';
/* שדה: תוכן: תחום */
$handler->display->display_options['fields']['field_biblio_research']['id'] = 'field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['table'] = 'field_data_field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['field'] = 'field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['label'] = 'biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_research']['delta_offset'] = '0';
/* שדה: תוכן: commerce */
$handler->display->display_options['fields']['field_commerce']['id'] = 'field_commerce';
$handler->display->display_options['fields']['field_commerce']['table'] = 'field_data_field_commerce';
$handler->display->display_options['fields']['field_commerce']['field'] = 'field_commerce';
$handler->display->display_options['fields']['field_commerce']['type'] = 'commerce_product_reference_title_plain';
$handler->display->display_options['fields']['field_commerce']['settings'] = array(
  'show_quantity' => 0,
  'default_quantity' => '1',
  'combine' => 1,
  'show_single_product_attributes' => 0,
  'line_item_type' => 0,
);
$handler->display->display_options['fields']['field_commerce']['delta_offset'] = '0';
/* שדה: תוכן: פרסם */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'node';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['label'] = 'Published';
$handler->display->display_options['fields']['status']['not'] = 0;
/* שדה: תוכן: תאריך עידכון */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['label'] = 'Updated date';
$handler->display->display_options['fields']['changed']['date_format'] = 'long';
/* שדה: Biblio: Type of Publication */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'biblio_types';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Type';
/* שדה: תוכן: Author uid */
$handler->display->display_options['fields']['uid']['id'] = 'uid';
$handler->display->display_options['fields']['uid']['table'] = 'node';
$handler->display->display_options['fields']['uid']['field'] = 'uid';
$handler->display->display_options['path'] = 'editor/xls';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
  'embed_1' => 0,
);

/* Display: Block 2 */
$handler = $view->new_display('block', 'Block 2', 'block_2');
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* שדה: תוכן: איכותני */
$handler->display->display_options['fields']['field_biblio_qualitive']['id'] = 'field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['table'] = 'field_data_field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['field'] = 'field_biblio_qualitive';
$handler->display->display_options['fields']['field_biblio_qualitive']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_qualitive']['delta_offset'] = '0';
/* שדה: תוכן: כמותני */
$handler->display->display_options['fields']['field_biblio_quantitative']['id'] = 'field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['table'] = 'field_data_field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['field'] = 'field_biblio_quantitative';
$handler->display->display_options['fields']['field_biblio_quantitative']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_quantitative']['delta_offset'] = '0';
/* שדה: תוכן: תחום */
$handler->display->display_options['fields']['field_biblio_research']['id'] = 'field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['table'] = 'field_data_field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['field'] = 'field_biblio_research';
$handler->display->display_options['fields']['field_biblio_research']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_biblio_research']['delta_offset'] = '0';
/* שדה: Biblio: Type of Publication */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'biblio_types';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'סוג';
$handler->display->display_options['defaults']['sorts'] = FALSE;
$handler->display->display_options['block_description'] = 'order stats helper';

  $export['editor'] = $view;

  return $export;
}
