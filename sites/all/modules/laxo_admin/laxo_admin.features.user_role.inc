<?php
/**
 * @file
 * laxo_admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function laxo_admin_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '3',
  );

  return $roles;
}
