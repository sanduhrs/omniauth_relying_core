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
    'http://axschema.org/namePerson/friendly' => array(
      'value' => 'name',
      'handler' => array(
        'name' => 'Basic text',
        'class' => 'openid_profile_basic',
      ),
      'field_type' => 'name',
    ),
    'http://axschema.org/contact/email' => array(
      'value' => 'mail',
      'handler' => array(
        'name' => 'Basic text',
        'class' => 'openid_profile_basic',
      ),
      'field_type' => 'mail',
    ),
    'http://axschema.org/namePerson/first' => array(
      'value' => 'field_name_person_first',
      'handler' => array(
        'name' => 'Field',
        'class' => 'openid_profile_field',
      ),
      'field_type' => 'text',
    ),
    'http://axschema.org/namePerson/last' => array(
      'value' => 'field_name_person_last',
      'handler' => array(
        'name' => 'Field',
        'class' => 'openid_profile_field',
      ),
      'field_type' => 'text',
    ),
    'http://axschema.org/contact/postalCode/business' => array(
      'value' => 'field_contact_postal_code_home',
      'handler' => array(
        'name' => 'Field',
        'class' => 'openid_profile_field',
      ),
      'field_type' => 'number_integer',
    ),
    'http://axschema.org/contact/city/home' => array(
      'value' => 'field_contact_city_home',
      'handler' => array(
        'name' => 'Field',
        'class' => 'openid_profile_field',
      ),
      'field_type' => 'text',
    ),
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

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = 0;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  return $export;
}
