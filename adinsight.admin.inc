<?php

function adinsight_admin() {
  $form = array();
  
  $form['adinsight_id'] = array(
      '#type' => 'textfield',
      '#title' => t('AdInsight ID'),
      '#description' => t('This is your unique numeric AdInsight identifier.  See the README to find out how to get yours if you don\'t know it.'),
      '#default_value' => variable_get('adinsight_id', NULL),
      '#element_validate' => array('adinsight_identifier_validate'),
      '#required' => TRUE,
  );
  
  return system_settings_form($form);
}

function adinsight_identifier_validate($element, &$form_state, $form) {
  $value = (isset($element['#value']) ? $element['#value'] : NULL);
  
  if (is_null($value)) {
    form_error($element, t('This is a required field.'));
  }
  
  if (!is_null($value) && !is_numeric($value)) {
    form_error($element, t('Your AdInsight ID should be numeric.'));
  }
}