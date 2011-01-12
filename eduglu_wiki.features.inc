<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function eduglu_wiki_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function eduglu_wiki_node_info() {
  $items = array(
    'wiki' => array(
      'name' => t('Wiki'),
      'module' => 'features',
      'description' => t('A Wiki can be edited by anyone and includes the feature of creating a link that will when clicked allow you to create a new page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function eduglu_wiki_views_api() {
  return array(
    'api' => '2',
  );
}
