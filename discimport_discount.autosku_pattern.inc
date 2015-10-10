<?php
/**
 * @file
 * discimport_discount.autosku_pattern.inc
 */

/**
 * Implements hook_default_commerce_autosku_patterns().
 */
function discimport_discount_default_commerce_autosku_patterns() {
  $export = array();

  $commerce_autosku_patterns = new stdClass();
  $commerce_autosku_patterns->disabled = FALSE; /* Edit this to true to make a default commerce_autosku_patterns disabled initially */
  $commerce_autosku_patterns->api_version = 1;
  $commerce_autosku_patterns->product_type = 'giftcard';
  $commerce_autosku_patterns->pattern = '';
  $commerce_autosku_patterns->advanced = array();
  $export['giftcard'] = $commerce_autosku_patterns;

  return $export;
}
