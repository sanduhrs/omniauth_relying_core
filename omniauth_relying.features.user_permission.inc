<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function omniauth_relying_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit own profile content
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(),
  );

  return $permissions;
}
