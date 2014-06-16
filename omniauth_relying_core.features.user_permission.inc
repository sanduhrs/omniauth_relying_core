<?php
/**
 * @file
 * omniauth_relying_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function omniauth_relying_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer openid client ax'.
  $permissions['administer openid client ax'] = array(
    'name' => 'administer openid client ax',
    'roles' => array(),
    'module' => 'openid_client_ax',
  );

  return $permissions;
}
