<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function eduglu_wiki_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:wiki
  $menu_links['features:wiki'] = array(
    'menu_name' => 'features',
    'link_path' => 'wiki',
    'router_path' => 'wiki',
    'link_title' => 'Wiki',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Wiki');


  return $menu_links;
}
