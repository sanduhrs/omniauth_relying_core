<?php

/**
 * Implementation of hook_user_default_roles().
 */
function omniauth_relying_core_user_default_roles() {
  $roles = array();

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  return $roles;
}
