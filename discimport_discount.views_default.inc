<?php
/**
 * @file
 * discimport_discount.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function discimport_discount_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'discounted_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Discounted Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Outlet';
  $handler->display->display_options['css_class'] = 'products-per-collection';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'product_list';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Brand (field_brand) */
  $handler->display->display_options['sorts']['field_brand_tid']['id'] = 'field_brand_tid';
  $handler->display->display_options['sorts']['field_brand_tid']['table'] = 'field_data_field_brand';
  $handler->display->display_options['sorts']['field_brand_tid']['field'] = 'field_brand_tid';
  /* Filterkriterie: Indhold: Discount group (field_discount_group) */
  $handler->display->display_options['filters']['field_discount_group_tid']['id'] = 'field_discount_group_tid';
  $handler->display->display_options['filters']['field_discount_group_tid']['table'] = 'field_data_field_discount_group';
  $handler->display->display_options['filters']['field_discount_group_tid']['field'] = 'field_discount_group_tid';
  $handler->display->display_options['filters']['field_discount_group_tid']['value'] = array(
    0 => '196',
    1 => '195',
    2 => '194',
    3 => '192',
    4 => '193',
    5 => '190',
  );
  $handler->display->display_options['filters']['field_discount_group_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_discount_group_tid']['vocabulary'] = 'discountgroup';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'outlet';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Outlet';
  $handler->display->display_options['menu']['weight'] = '100';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['discounted_products'] = array(
    t('Master'),
    t('Outlet'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Page'),
  );
  $export['discounted_products'] = $view;

  return $export;
}
