<?php
/**
 * @file
 * rmets_cpd_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rmets_cpd_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rmets_cpd_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}