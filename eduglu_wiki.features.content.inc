<?php

/**
 * Implementation of hook_content_default_fields().
 */
function eduglu_wiki_content_default_fields() {
  $fields = array();

  // Exported field: field_attachment
  $fields['wiki-field_attachment'] = array(
    'field_name' => 'field_attachment',
    'type_name' => 'wiki',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 0,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps odt ods odp py rb zip java swf pages key numbers gz tar bz2',
      'file_path' => '[uid]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'filefield_sources' => array(
        'remote' => TRUE,
        'reference' => TRUE,
        '0' => 1,
        'attach' => FALSE,
      ),
      'filefield_source_attach_path' => 'file_attach',
      'filefield_source_attach_absolute' => '0',
      'filefield_source_attach_mode' => 'move',
      'filefield_source_autocomplete' => '1',
      'insert' => TRUE,
      'insert_styles' => array(
        'image' => TRUE,
        'imagecache_Large' => TRUE,
        'imagecache_Medium' => TRUE,
        'imagecache_Small' => TRUE,
        '0' => 1,
        'auto' => FALSE,
        'link' => FALSE,
        'imagecache_20x20_crop' => FALSE,
        'imagecache_25x25_crop' => FALSE,
        'imagecache_30x30_crop' => FALSE,
        'imagecache_user_image_default' => FALSE,
        'imagecache_user_image_large' => FALSE,
      ),
      'insert_default' => array(
        '0' => 'imagecache_Medium',
      ),
      'insert_class' => 'float-left',
      'insert_width' => '',
      'label' => 'File attachment',
      'weight' => 0,
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('File attachment');

  return $fields;
}
