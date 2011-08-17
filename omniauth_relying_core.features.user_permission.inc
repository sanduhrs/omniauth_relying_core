<?php
/**
 * @file
 * omniauth_relying_core.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function omniauth_relying_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer openid client ax
  $permissions['administer openid client ax'] = array(
    'name' => 'administer openid client ax',
    'roles' => array(),
  );

  return $permissions;
}
