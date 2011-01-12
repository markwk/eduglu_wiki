<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function eduglu_wiki_user_default_permissions() {
  $permissions = array();

  // Exported permission: access freelinking list
  $permissions['access freelinking list'] = array(
    'name' => 'access freelinking list',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer freelinking
  $permissions['administer freelinking'] = array(
    'name' => 'administer freelinking',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'admin',
    ),
  );

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

  // Exported permission: delete revisions
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
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

  // Exported permission: edit own wiki content
  $permissions['edit own wiki content'] = array(
    'name' => 'edit own wiki content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}
