<?php
/**
 * @file
 * laxo_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function laxo_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function laxo_search_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function laxo_search_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_search_api_solr_view'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_search_api_solr_view",
    "name" : "search_api_solr_view",
    "index_id" : "solr_node_index",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : { "result count" : true },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function laxo_search_default_search_api_index() {
  $items = array();
  $items['solr_node_index'] = entity_import('search_api_index', '{
    "name" : "solr node index",
    "machine_name" : "solr_node_index",
    "description" : null,
    "server" : "solrerver",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "500",
      "fields" : {
        "nid" : { "type" : "integer" },
        "title" : { "type" : "text", "boost" : "0.5" },
        "biblio_custom1" : { "type" : "text" },
        "biblio_keywords" : { "type" : "string" },
        "biblio_contributors" : { "type" : "string" },
        "biblio_year" : { "type" : "integer" },
        "biblio_type" : { "type" : "string" },
        "biblio_secondary_title" : { "type" : "string" },
        "field_commerce" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "commerce_product" },
        "field_biblio_qualitive" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_biblio_quantitative" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_biblio_research" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "biblio" : "biblio" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function laxo_search_default_search_api_server() {
  $items = array();
  $items['solrerver'] = entity_import('search_api_server', '{
    "name" : "solrerver",
    "machine_name" : "solrerver",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "host" : "localhost",
      "port" : "8080",
      "path" : "\\/solr\\/prod",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
