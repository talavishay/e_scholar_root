<?php
/**
 * @file
 * laxo_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function laxo_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'devel',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: administer flags.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: administer line items.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(),
    'module' => 'commerce_line_item',
  );

  // Exported permission: administer patterns.
  $permissions['administer patterns'] = array(
    'name' => 'administer patterns',
    'roles' => array(),
    'module' => 'patterns',
  );

  // Exported permission: get patterns.
  $permissions['get patterns'] = array(
    'name' => 'get patterns',
    'roles' => array(),
    'module' => 'patterns',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: public patterns.
  $permissions['public patterns'] = array(
    'name' => 'public patterns',
    'roles' => array(),
    'module' => 'patterns',
  );

  // Exported permission: use flag import.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(),
    'module' => 'flag',
  );

  return $permissions;
}
