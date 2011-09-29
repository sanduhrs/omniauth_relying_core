<?php

/**
 * Implementation of hook_strongarm().
 */
function omniauth_relying_core_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_profile';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '3',
    'revision_information' => '5',
    'author' => '4',
    'options' => '6',
    'menu' => '2',
  );

  $export['content_extra_weights_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_profile';
  $strongarm->value = array(
    'weight' => 0,
    'user_display' => 'full',
    'edit_link' => 0,
    'edit_tab' => 'sub',
    'add_link' => 1,
    'registration_use' => 1,
    'admin_user_create_use' => 1,
    'registration_hide' => array(
      0 => 'title',
    ),
  );

  $export['content_profile_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_profile';
  $strongarm->value = 1;

  $export['content_profile_use_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_profile';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openid_cp_field_map_profile';
  $strongarm->value = array(
    'http://axschema.org/namePerson/first' => array(
      'value' => 'field_name_person_first',
      'handler' => array(
        'name' => 'Field',
        'class' => 'openid_cp_field_field',
      ),
      'field_type' => NULL,
    ),
    'http://axschema.org/namePerson/last' => array(
      'value' => 'field_name_person_last',
      'handler' => array(
        'name' => 'Field',
        'class' => 'openid_cp_field_field',
      ),
      'field_type' => NULL,
    ),
    'http://axschema.org/contact/postalCode/business' => array(
      'value' => 'field_contact_postal_code_home',
      'handler' => array(
        'name' => 'Field',
        'class' => 'openid_cp_field_field',
      ),
      'field_type' => NULL,
    ),
    'http://axschema.org/contact/city/home' => array(
      'value' => 'field_contact_city_home',
      'handler' => array(
        'name' => 'Field',
        'class' => 'openid_cp_field_field',
      ),
      'field_type' => NULL,
    ),
  );

  $export['openid_cp_field_map_profile'] = $strongarm;
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
  );

  $export['openid_profile_map'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = TRUE;

  $export['user_email_verification'] = $strongarm;
  return $export;
}
