<?php
/**
 * @file
 * coding_projects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function coding_projects_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function coding_projects_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function coding_projects_node_info() {
  $items = array(
    'coding_project' => array(
      'name' => t('Coding Project'),
      'base' => 'node_content',
      'description' => t('coding projects I\'ve been involved in'),
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
