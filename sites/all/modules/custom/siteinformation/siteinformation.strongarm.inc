<?php
/**
 * @file
 * siteinformation.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function siteinformation_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'nic@nicportfolio.com';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Nic Netzel\'s Coding Portfolio';
  $export['site_name'] = $strongarm;

  return $export;
}
