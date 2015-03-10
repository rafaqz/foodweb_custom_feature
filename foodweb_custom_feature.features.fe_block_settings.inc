<?php
/**
 * @file
 * foodweb_custom_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function foodweb_custom_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-blog_list-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog_list-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-news_list-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news_list-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-slider-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'slider-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'featured',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-slider_admin-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'slider_admin-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
