<?php
/**
 * @file
 * discimport_discount.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function discimport_discount_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function discimport_discount_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function discimport_discount_node_info() {
  $items = array(
    'gift_card' => array(
      'name' => t('Gift Card'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
