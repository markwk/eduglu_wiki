<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function eduglu_wiki_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'eduglu_wiki_home';
  $context->description = 'A home page context for wiki';
  $context->tag = 'Wiki';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'wiki' => 'wiki',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'wiki_all' => 'wiki_all',
        'wiki_all:page_1' => 'wiki_all:page_1',
        'wiki_backlinks' => 'wiki_backlinks',
        'wiki_backlinks:page' => 'wiki_backlinks:page',
        'wiki_new_pages' => 'wiki_new_pages',
        'wiki_new_pages:page' => 'wiki_new_pages:page',
        'wiki_tracker' => 'wiki_tracker',
        'wiki_tracker:page' => 'wiki_tracker:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-eduglu_wiki_welcome' => array(
          'module' => 'boxes',
          'delta' => 'eduglu_wiki_welcome',
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
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A home page context for wiki');
  t('Wiki');

  $export['eduglu_wiki_home'] = $context;
  return $export;
}
