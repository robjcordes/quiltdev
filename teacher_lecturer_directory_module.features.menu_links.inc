<?php
/**
 * @file
 * teacher_lecturer_directory_module.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function teacher_lecturer_directory_module_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/505
  $menu_links['main-menu:node/505'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/505',
    'router_path' => 'node/%',
    'link_title' => 'Teacher & Lecturer Directory',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/11',
  );
  // Exported menu link: main-menu:node/506
  $menu_links['main-menu:node/506'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/506',
    'router_path' => 'node/%',
    'link_title' => 'Teacher & Lecturer Directory Sign Up',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/505',
  );
  // Exported menu link: management:admin/reports/teacher/expire
  $menu_links['management:admin/reports/teacher/expire'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/teacher/expire',
    'router_path' => 'admin/reports/teacher/expire',
    'link_title' => 'Status Admin View',
    'options' => array(),
    'module' => 'system',
    'hidden' => '-1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/reports/teacher',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Status Admin View');
  t('Teacher & Lecturer Directory');
  t('Teacher & Lecturer Directory Sign Up');


  return $menu_links;
}
