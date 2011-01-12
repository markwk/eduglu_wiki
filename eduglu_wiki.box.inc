<?php

/**
 * Implementation of hook_default_box().
 */
function eduglu_wiki_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'wiki_navigation';
  $box->plugin_key = 'simple';
  $box->title = 'Navigation';
  $box->description = 'Wiki Navigation';
  $box->options = array(
    'body' => '<ul><li><a href="%/wiki/new_pages">New Pages</a></li><li><a href="og/wiki/recent_changes">Recent Changes</a></li></ul>',
    'format' => '3',
  );

  $export['wiki_navigation'] = $box;
  return $export;
}
