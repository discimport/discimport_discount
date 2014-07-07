<?php
/**
 * @file
 * discimport_discount.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function discimport_discount_taxonomy_default_vocabularies() {
  return array(
    'discountgroup' => array(
      'name' => 'Discount group',
      'machine_name' => 'discountgroup',
      'description' => 'Group products together - mainly for discount purposes.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
