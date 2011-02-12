<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglu_wiki_user_default_permissions() {
  $permissions = array();

  // Exported permission: create wiki content
  $permissions['create wiki content'] = array(
    'name' => 'create wiki content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any wiki content
  $permissions['delete any wiki content'] = array(
    'name' => 'delete any wiki content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own wiki content
  $permissions['delete own wiki content'] = array(
    'name' => 'delete own wiki content',
    'roles' => array(),
  );

  // Exported permission: edit any wiki content
  $permissions['edit any wiki content'] = array(
    'name' => 'edit any wiki content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
