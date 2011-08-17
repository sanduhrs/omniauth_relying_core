<?php
/**
 * @file
 * omniauth_relying_core.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function omniauth_relying_core_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_profile_map';
  $strongarm->value = array(
    'http://axschema.org/namePerson/prefix' => 'field_name_person_prefix',
    'http://axschema.org/namePerson/first' => 'field_name_person_first',
    'http://axschema.org/namePerson/last' => 'field_name_person_last',
    'http://axschema.org/contact/postalCode/home' => 'field_contact_postal_code_home',
    'http://axschema.org/contact/city/home' => 'field_contact_city_home',
    'http://axschema.org/contact/email' => 'mail',
    'http://axschema.org/namePerson/friendly' => 'name',
    'http://axschema.org/pref/timezone' => 'timezone',
  );
  $export['openid_profile_map'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_profile_read_only_fields';
  $strongarm->value = array(
    'name' => 'name',
    'mail' => 'mail',
    'picture' => 0,
    'timezone' => 0,
    'language' => 0,
    'field_name_person_prefix' => 0,
    'field_name_person_first' => 0,
    'field_name_person_last' => 0,
    'field_contact_postal_code_home' => 0,
    'field_contact_city_home' => 0,
  );
  $export['openid_profile_read_only_fields'] = $strongarm;

  return $export;
}
