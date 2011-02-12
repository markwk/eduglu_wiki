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
  $box->title = 'Wiki Navigation';
  $box->description = 'Wiki Navigation';
  $box->options = array(
    'body' => '<ul><li>Main Page</li><li><a href="new_pages">New Pages</a></li><li><a href="recent_changes">Recent Changes</a></li><li>Random Page</li></ul>',
    'format' => '3',
  );

  $export['wiki_navigation'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'wiki_welcome';
  $box->plugin_key = 'simple';
  $box->title = 'Wiki Welcome';
  $box->description = 'Wiki Welcome';
  $box->options = array(
    'body' => '<p>Wiki pages are for editing collaboratively. <strong>So be bold!</strong></p>',
    'format' => '3',
  );

  $export['wiki_welcome'] = $box;
  return $export;
}
