<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_wiki_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eduglu_wiki';
  $context->description = '';
  $context->tag = 'eduglu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'wiki' => 'wiki',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'wiki' => 'wiki',
        'wiki/*' => 'wiki/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'wiki_all:page_1' => 'wiki_all:page_1',
        'wiki_backlinks:page' => 'wiki_backlinks:page',
        'wiki_new_pages:page' => 'wiki_new_pages:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-wiki_welcome' => array(
          'module' => 'boxes',
          'delta' => 'wiki_welcome',
          'region' => 'right',
          'weight' => 0,
        ),
        'boxes-wiki_navigation' => array(
          'module' => 'boxes',
          'delta' => 'wiki_navigation',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'wiki',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('eduglu');

  $export['eduglu_wiki'] = $context;
  return $export;
}
