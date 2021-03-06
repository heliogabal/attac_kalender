<?php
/**
 * @file
 * attac_kalender.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function attac_kalender_user_default_roles() {
  $roles = array();

  // Exported role: news.
  $roles['news'] = array(
    'name' => 'news',
    'weight' => 4,
  );

  // Exported role: termine.
  $roles['termine'] = array(
    'name' => 'termine',
    'weight' => 5,
  );

  return $roles;
}
