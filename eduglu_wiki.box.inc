<?php

/**
 * Implementation of hook_default_box().
 */
function eduglu_wiki_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'eduglu_wiki_welcome';
  $box->plugin_key = 'simple';
  $box->title = 'Welcome to the Wiki';
  $box->description = 'Wiki Welcome Box';
  $box->options = array(
    'body' => '<p>Wiki pages are for editing collaboratively. <strong>So be bold!</strong></p>',
    'format' => '3',
  );

  $export['eduglu_wiki_welcome'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'eduglu_wiki_navigation';
  $box->plugin_key = 'simple';
  $box->title = 'Navigation';
  $box->description = 'Wiki Navigation';
  $box->options = array(
    'body' => '<ul><li>Main Page</li><li><a href="new_pages">New Pages</a></li><li><a href="recent_changes">Recent Changes</a></li><li>Random Page</li></ul>',
    'format' => '3',
  );

  $export['eduglu_wiki_navigation'] = $box;
  return $export;
}
