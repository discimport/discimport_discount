<?php
/**
 * @file
 * discimport_discount.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function discimport_discount_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer giftcard transactions'.
  $permissions['administer giftcard transactions'] = array(
    'name' => 'administer giftcard transactions',
    'roles' => array(
      'administrator' => 'administrator',
      'store administrator' => 'store administrator',
    ),
    'module' => 'commerce_gc',
  );

  // Exported permission: 'administer giftcards'.
  $permissions['administer giftcards'] = array(
    'name' => 'administer giftcards',
    'roles' => array(
      'administrator' => 'administrator',
      'store administrator' => 'store administrator',
    ),
    'module' => 'commerce_gc',
  );

  // Exported permission: 'create commerce_coupon entities of bundle giftcard_coupon'.
  $permissions['create commerce_coupon entities of bundle giftcard_coupon'] = array(
    'name' => 'create commerce_coupon entities of bundle giftcard_coupon',
    'roles' => array(
      'administrator' => 'administrator',
      'store administrator' => 'store administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'create new giftcard transactions'.
  $permissions['create new giftcard transactions'] = array(
    'name' => 'create new giftcard transactions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'store administrator' => 'store administrator',
    ),
    'module' => 'commerce_gc',
  );

  // Exported permission: 'delete giftcard transactions'.
  $permissions['delete giftcard transactions'] = array(
    'name' => 'delete giftcard transactions',
    'roles' => array(
      'administrator' => 'administrator',
      'store administrator' => 'store administrator',
    ),
    'module' => 'commerce_gc',
  );

  // Exported permission: 'edit any commerce_coupon entity of bundle giftcard_coupon'.
  $permissions['edit any commerce_coupon entity of bundle giftcard_coupon'] = array(
    'name' => 'edit any commerce_coupon entity of bundle giftcard_coupon',
    'roles' => array(
      'administrator' => 'administrator',
      'store administrator' => 'store administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'edit own commerce_coupon entities of bundle giftcard_coupon'.
  $permissions['edit own commerce_coupon entities of bundle giftcard_coupon'] = array(
    'name' => 'edit own commerce_coupon entities of bundle giftcard_coupon',
    'roles' => array(
      'administrator' => 'administrator',
      'store administrator' => 'store administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'redeem coupons of type giftcard_coupon'.
  $permissions['redeem coupons of type giftcard_coupon'] = array(
    'name' => 'redeem coupons of type giftcard_coupon',
    'roles' => array(),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'redeem non user specific coupons of type giftcard_coupon'.
  $permissions['redeem non user specific coupons of type giftcard_coupon'] = array(
    'name' => 'redeem non user specific coupons of type giftcard_coupon',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_coupon_user',
  );

  // Exported permission: 'redeem received coupons of type giftcard_coupon'.
  $permissions['redeem received coupons of type giftcard_coupon'] = array(
    'name' => 'redeem received coupons of type giftcard_coupon',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_coupon_user',
  );

  // Exported permission: 'view any commerce_coupon entity of bundle giftcard_coupon'.
  $permissions['view any commerce_coupon entity of bundle giftcard_coupon'] = array(
    'name' => 'view any commerce_coupon entity of bundle giftcard_coupon',
    'roles' => array(
      'administrator' => 'administrator',
      'store administrator' => 'store administrator',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view non user specific coupons of type giftcard_coupon'.
  $permissions['view non user specific coupons of type giftcard_coupon'] = array(
    'name' => 'view non user specific coupons of type giftcard_coupon',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_coupon_user',
  );

  // Exported permission: 'view own commerce_coupon entities of bundle giftcard_coupon'.
  $permissions['view own commerce_coupon entities of bundle giftcard_coupon'] = array(
    'name' => 'view own commerce_coupon entities of bundle giftcard_coupon',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_coupon',
  );

  // Exported permission: 'view own giftcard transactions'.
  $permissions['view own giftcard transactions'] = array(
    'name' => 'view own giftcard transactions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'store administrator' => 'store administrator',
    ),
    'module' => 'commerce_gc',
  );

  // Exported permission: 'view received coupons of type giftcard_coupon'.
  $permissions['view received coupons of type giftcard_coupon'] = array(
    'name' => 'view received coupons of type giftcard_coupon',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_coupon_user',
  );

  return $permissions;
}
