<?php
/**
 * @file
 * attac_kalender.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function attac_kalender_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function attac_kalender_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function attac_kalender_node_info() {
  $items = array(
    'event_calendar' => array(
      'name' => t('Termin'),
      'base' => 'node_content',
      'description' => t('Termine werden im Kalender und auf der Startseite angezeigt.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News erscheinen als Aktuelle Ankündigungen auf der Startseite.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ort' => array(
      'name' => t('Ort'),
      'base' => 'node_content',
      'description' => t('Ein Ort kann an allen möglichen Stellen verlinkt werden und bietet eine Karte etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}