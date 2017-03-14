<?php

/**
 * @file
 * GSB 12Twenty module settings UI.
 */

/**
 * Provides settings pages.
 */
function gsb_twelve_twenty_admin_settings() {

  $form['twelve_twenty_token'] = array(
    '#type' => 'textfield',
    '#title' => t('GSB 12Twenty Token Key'),
    '#default_value' => variable_get('twelve_twenty_token', ''),
    '#description' => t('The 12Twenty website authentication token generating key.'),
    '#required' => TRUE,
  );

  $form['twelve_twenty_token_auth_url'] = array(
    '#type' => 'textfield',
    '#title' => t('GSB 12Twenty Token Auth URL'),
    '#default_value' => variable_get('twelve_twenty_token_auth_url', ''),
    '#description' => t('The 12Twenty website token generating url.'),
    '#required' => TRUE,
  );

  $form['twelve_twenty_token_ret_url'] = array(
    '#type' => 'textfield',
    '#title' => t('GSB 12Twenty Token Return URL'),
    '#default_value' => variable_get('twelve_twenty_token_ret_url', ''),
    '#description' => t('The 12Twenty website token passing url.'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
