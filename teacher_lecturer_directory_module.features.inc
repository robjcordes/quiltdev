<?php
/**
 * @file
 * teacher_lecturer_directory_module.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function teacher_lecturer_directory_module_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function teacher_lecturer_directory_module_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function teacher_lecturer_directory_module_node_info() {
  $items = array(
    'teacher_lecturer_directory' => array(
      'name' => t('Teacher Lecturer Directory'),
      'base' => 'node_content',
      'description' => t('Teacher and Lecturer Directory Content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
