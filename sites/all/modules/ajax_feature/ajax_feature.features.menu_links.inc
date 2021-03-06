<?php
/**
 * @file
 * ajax_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ajax_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_ajax:node/1.
  $menu_links['main-menu_ajax:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'AJAX',
    'options' => array(
      'identifier' => 'main-menu_ajax:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AJAX');

  return $menu_links;
}
