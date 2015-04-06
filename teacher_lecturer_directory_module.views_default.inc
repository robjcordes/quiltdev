<?php
/**
 * @file
 * teacher_lecturer_directory_module.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function teacher_lecturer_directory_module_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'teacher_lecturer_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Teacher Lecturer View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Teacher Lecturer View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['exclude'] = TRUE;
  /* Field: Content: Website URL */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['exclude'] = TRUE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-country] | [field_address-administrative_area]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_tlregion']['id'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['table'] = 'field_data_field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['field'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['label'] = '';
  $handler->display->display_options['fields']['field_tlregion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tlregion']['element_label_colon'] = FALSE;
  /* Field: Content: Teach */
  $handler->display->display_options['fields']['field_teach']['id'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['table'] = 'field_data_field_teach';
  $handler->display->display_options['fields']['field_teach']['field'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teach']['delta_offset'] = '0';
  /* Field: Content: Lecture */
  $handler->display->display_options['fields']['field_lecture']['id'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['table'] = 'field_data_field_lecture';
  $handler->display->display_options['fields']['field_lecture']['field'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lecture']['delta_offset'] = '0';
  /* Field: Content: Agree */
  $handler->display->display_options['fields']['field_agree']['id'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['table'] = 'field_data_field_agree';
  $handler->display->display_options['fields']['field_agree']['field'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['exclude'] = TRUE;
  /* Field: Content: Classification */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['delta_offset'] = '0';
  /* Field: Content: Display */
  $handler->display->display_options['fields']['field_display']['id'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['table'] = 'field_data_field_display';
  $handler->display->display_options['fields']['field_display']['field'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['exclude'] = TRUE;
  /* Field: Content: Listing Expires */
  $handler->display->display_options['fields']['field_listing_expires']['id'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['field'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listing_expires']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Payment Status */
  $handler->display->display_options['fields']['field_payment_status']['id'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['table'] = 'field_data_field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['field'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['exclude'] = TRUE;
  /* Field: Content: Quilter's Statement */
  $handler->display->display_options['fields']['field_quilter_s_statement']['id'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['table'] = 'field_data_field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['field'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[field_first_name] [field_last_name]</strong>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_teach], [field_lecture]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] | [field_email_address] | [field_website_url] | [field_address] | [field_tlregion] <br>
[nothing_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher_lecturer_directory' => 'teacher_lecturer_directory',
  );

  /* Display: Teacher Lecturer Full Block */
  $handler = $view->new_display('block', 'Teacher Lecturer Full Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teacher Lecturer Live View';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['exclude'] = TRUE;
  /* Field: Content: Website URL */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['exclude'] = TRUE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-country] | [field_address-administrative_area]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_tlregion']['id'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['table'] = 'field_data_field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['field'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['label'] = '';
  $handler->display->display_options['fields']['field_tlregion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tlregion']['element_label_colon'] = FALSE;
  /* Field: Content: Teach */
  $handler->display->display_options['fields']['field_teach']['id'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['table'] = 'field_data_field_teach';
  $handler->display->display_options['fields']['field_teach']['field'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teach']['delta_offset'] = '0';
  /* Field: Content: Lecture */
  $handler->display->display_options['fields']['field_lecture']['id'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['table'] = 'field_data_field_lecture';
  $handler->display->display_options['fields']['field_lecture']['field'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lecture']['delta_offset'] = '0';
  /* Field: Content: Agree */
  $handler->display->display_options['fields']['field_agree']['id'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['table'] = 'field_data_field_agree';
  $handler->display->display_options['fields']['field_agree']['field'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['exclude'] = TRUE;
  /* Field: Content: Classification */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['delta_offset'] = '0';
  /* Field: Content: Display */
  $handler->display->display_options['fields']['field_display']['id'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['table'] = 'field_data_field_display';
  $handler->display->display_options['fields']['field_display']['field'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['exclude'] = TRUE;
  /* Field: Content: Listing Expires */
  $handler->display->display_options['fields']['field_listing_expires']['id'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['field'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listing_expires']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Payment Status */
  $handler->display->display_options['fields']['field_payment_status']['id'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['table'] = 'field_data_field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['field'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['exclude'] = TRUE;
  /* Field: Content: Quilter's Statement */
  $handler->display->display_options['fields']['field_quilter_s_statement']['id'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['table'] = 'field_data_field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['field'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[field_first_name] [field_last_name]</strong>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_teach], [field_lecture]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[title]</h3>
<strong>[field_email_address] | [field_website_url] | [field_address] | [field_tlregion] </strong><br>
[nothing_1]
<hr>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher_lecturer_directory' => 'teacher_lecturer_directory',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search by Name';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'title' => 'title',
  );
  /* Filter criterion: Content: First Name (field_first_name) */
  $handler->display->display_options['filters']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['filters']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_first_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator_id'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['label'] = 'Search by First Name';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['operator'] = 'field_first_name_value_op';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['identifier'] = 'field_first_name_value';
  $handler->display->display_options['filters']['field_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Lecture (field_lecture) */
  $handler->display->display_options['filters']['field_lecture_value']['id'] = 'field_lecture_value';
  $handler->display->display_options['filters']['field_lecture_value']['table'] = 'field_data_field_lecture';
  $handler->display->display_options['filters']['field_lecture_value']['field'] = 'field_lecture_value';
  $handler->display->display_options['filters']['field_lecture_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lecture_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lecture_value']['expose']['operator_id'] = 'field_lecture_value_op';
  $handler->display->display_options['filters']['field_lecture_value']['expose']['label'] = 'Lecture Subject';
  $handler->display->display_options['filters']['field_lecture_value']['expose']['operator'] = 'field_lecture_value_op';
  $handler->display->display_options['filters']['field_lecture_value']['expose']['identifier'] = 'field_lecture_value';
  $handler->display->display_options['filters']['field_lecture_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_lecture_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Teach (field_teach) */
  $handler->display->display_options['filters']['field_teach_value']['id'] = 'field_teach_value';
  $handler->display->display_options['filters']['field_teach_value']['table'] = 'field_data_field_teach';
  $handler->display->display_options['filters']['field_teach_value']['field'] = 'field_teach_value';
  $handler->display->display_options['filters']['field_teach_value']['group'] = 1;
  $handler->display->display_options['filters']['field_teach_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_teach_value']['expose']['operator_id'] = 'field_teach_value_op';
  $handler->display->display_options['filters']['field_teach_value']['expose']['label'] = 'Teaching Subject';
  $handler->display->display_options['filters']['field_teach_value']['expose']['operator'] = 'field_teach_value_op';
  $handler->display->display_options['filters']['field_teach_value']['expose']['identifier'] = 'field_teach_value';
  $handler->display->display_options['filters']['field_teach_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_teach_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Address (field_address:country) */
  $handler->display->display_options['filters']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['filters']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['filters']['field_address_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_country']['expose']['operator_id'] = 'field_address_country_op';
  $handler->display->display_options['filters']['field_address_country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_address_country']['expose']['operator'] = 'field_address_country_op';
  $handler->display->display_options['filters']['field_address_country']['expose']['identifier'] = 'field_address_country';
  $handler->display->display_options['filters']['field_address_country']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    4 => 0,
    3 => 0,
    8 => 0,
    9 => 0,
  );

  /* Display: Teacher Lecturer Detail Block */
  $handler = $view->new_display('block', 'Teacher Lecturer Detail Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teacher Lecturer Detail Page';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['exclude'] = TRUE;
  /* Field: Content: Website URL */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['exclude'] = TRUE;
  /* Field: Content: Phone Number */
  $handler->display->display_options['fields']['field_directory_phone_number']['id'] = 'field_directory_phone_number';
  $handler->display->display_options['fields']['field_directory_phone_number']['table'] = 'field_data_field_directory_phone_number';
  $handler->display->display_options['fields']['field_directory_phone_number']['field'] = 'field_directory_phone_number';
  $handler->display->display_options['fields']['field_directory_phone_number']['label'] = '';
  $handler->display->display_options['fields']['field_directory_phone_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_directory_phone_number']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = 'Location: [field_address-locality] | [field_address-administrative_area] | [field_address-country]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_tlregion']['id'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['table'] = 'field_data_field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['field'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['label'] = '';
  $handler->display->display_options['fields']['field_tlregion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tlregion']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tlregion']['alter']['text'] = 'Membership: [field_tlregion]';
  $handler->display->display_options['fields']['field_tlregion']['element_label_colon'] = FALSE;
  /* Field: Content: Teach */
  $handler->display->display_options['fields']['field_teach']['id'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['table'] = 'field_data_field_teach';
  $handler->display->display_options['fields']['field_teach']['field'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teach']['delta_offset'] = '0';
  /* Field: Content: Lecture */
  $handler->display->display_options['fields']['field_lecture']['id'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['table'] = 'field_data_field_lecture';
  $handler->display->display_options['fields']['field_lecture']['field'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lecture']['delta_offset'] = '0';
  /* Field: Content: Agree */
  $handler->display->display_options['fields']['field_agree']['id'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['table'] = 'field_data_field_agree';
  $handler->display->display_options['fields']['field_agree']['field'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['exclude'] = TRUE;
  /* Field: Content: Classification */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['delta_offset'] = '0';
  /* Field: Content: Display */
  $handler->display->display_options['fields']['field_display']['id'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['table'] = 'field_data_field_display';
  $handler->display->display_options['fields']['field_display']['field'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['exclude'] = TRUE;
  /* Field: Content: Listing Expires */
  $handler->display->display_options['fields']['field_listing_expires']['id'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['field'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listing_expires']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Payment Status */
  $handler->display->display_options['fields']['field_payment_status']['id'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['table'] = 'field_data_field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['field'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['exclude'] = TRUE;
  /* Field: Content: Quilter's Statement */
  $handler->display->display_options['fields']['field_quilter_s_statement']['id'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['table'] = 'field_data_field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['field'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[field_first_name] [field_last_name]</strong>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_teach], [field_lecture]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="eleven columns"><h2><strong>[field_first_name] [field_last_name]</strong></h2><br>
<h3>[field_classification]</h3><br><br></div>
<div class="eleven columns">
<div class="five columns">[field_address]
<br><br>
[field_tlregion]
<br><br>
Contact me at: [field_email_address] <br>
Website: [field_website_url]<br>
Phone: [field_directory_phone_number]<br></div>
<div class="five columns">
<strong>I teach the following subjects:</strong><br>
[field_teach]
<br><br>
<strong>I teach the following subjects:</strong><br>
[field_lecture] </div></div><br><div class="eleven columns">
<br>
<hr>
[field_quilter_s_statement]</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher_lecturer_directory' => 'teacher_lecturer_directory',
  );

  /* Display: Payment Status Page */
  $handler = $view->new_display('page', 'Payment Status Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'tlview';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'created' => 'created',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_email_address' => 'field_email_address',
    'field_website_url' => 'field_website_url',
    'field_address' => 'field_address',
    'field_tlregion' => 'field_tlregion',
    'field_teach' => 'field_teach',
    'field_lecture' => 'field_lecture',
    'field_agree' => 'field_agree',
    'field_classification' => 'field_classification',
    'field_display' => 'field_display',
    'field_listing_expires' => 'field_listing_expires',
    'field_payment_status' => 'field_payment_status',
    'field_quilter_s_statement' => 'field_quilter_s_statement',
    'title' => 'title',
    'nothing_1' => 'nothing_1',
    'nothing' => 'nothing',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'field_payment_status';
  $handler->display->display_options['style_options']['info'] = array(
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tlregion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_teach' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lecture' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agree' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_classification' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_display' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_expires' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_payment_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_quilter_s_statement' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Submitted: [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['exclude'] = TRUE;
  /* Field: Content: Website URL */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['exclude'] = TRUE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-country] | [field_address-administrative_area]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_tlregion']['id'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['table'] = 'field_data_field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['field'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['label'] = '';
  $handler->display->display_options['fields']['field_tlregion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tlregion']['element_label_colon'] = FALSE;
  /* Field: Content: Teach */
  $handler->display->display_options['fields']['field_teach']['id'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['table'] = 'field_data_field_teach';
  $handler->display->display_options['fields']['field_teach']['field'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teach']['delta_offset'] = '0';
  /* Field: Content: Lecture */
  $handler->display->display_options['fields']['field_lecture']['id'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['table'] = 'field_data_field_lecture';
  $handler->display->display_options['fields']['field_lecture']['field'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lecture']['delta_offset'] = '0';
  /* Field: Content: Agree */
  $handler->display->display_options['fields']['field_agree']['id'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['table'] = 'field_data_field_agree';
  $handler->display->display_options['fields']['field_agree']['field'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['exclude'] = TRUE;
  /* Field: Content: Classification */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['delta_offset'] = '0';
  /* Field: Content: Display */
  $handler->display->display_options['fields']['field_display']['id'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['table'] = 'field_data_field_display';
  $handler->display->display_options['fields']['field_display']['field'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['exclude'] = TRUE;
  /* Field: Content: Listing Expires */
  $handler->display->display_options['fields']['field_listing_expires']['id'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['field'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listing_expires']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Payment Status */
  $handler->display->display_options['fields']['field_payment_status']['id'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['table'] = 'field_data_field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['field'] = 'field_payment_status';
  /* Field: Content: Quilter's Statement */
  $handler->display->display_options['fields']['field_quilter_s_statement']['id'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['table'] = 'field_data_field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['field'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[field_first_name] [field_last_name]</strong>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_teach], [field_lecture]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] | [field_email_address] | [field_website_url] | [field_address] | [field_tlregion] <br>
[nothing_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'admin/reports/teacher';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Status Admin View';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Expiration Status Page */
  $handler = $view->new_display('page', 'Expiration Status Page', 'page_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'tlview';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_listing_expires_1' => 'field_listing_expires_1',
    'created' => 'created',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_email_address' => 'field_email_address',
    'field_address' => 'field_address',
    'field_website_url' => 'field_website_url',
    'field_tlregion' => 'field_tlregion',
    'field_teach' => 'field_teach',
    'field_lecture' => 'field_lecture',
    'field_agree' => 'field_agree',
    'field_classification' => 'field_classification',
    'field_display' => 'field_display',
    'field_listing_expires' => 'field_listing_expires',
    'field_payment_status' => 'field_payment_status',
    'field_quilter_s_statement' => 'field_quilter_s_statement',
    'title' => 'title',
    'nothing_1' => 'nothing_1',
    'nothing' => 'nothing',
    'edit_node' => 'edit_node',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_listing_expires_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tlregion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_teach' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lecture' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agree' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_classification' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_display' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_expires' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_payment_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_quilter_s_statement' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Listing Expires */
  $handler->display->display_options['fields']['field_listing_expires_1']['id'] = 'field_listing_expires_1';
  $handler->display->display_options['fields']['field_listing_expires_1']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires_1']['field'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires_1']['settings'] = array(
    'format_type' => 'month_and_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_listing_expires_1']['group_columns'] = array(
    'entity_type' => 'entity_type',
    'entity_id' => 'entity_id',
    'value' => 'value',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Submitted: [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_email_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-country] | [field_address-administrative_area]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Website URL */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['exclude'] = TRUE;
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_tlregion']['id'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['table'] = 'field_data_field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['field'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['label'] = '';
  $handler->display->display_options['fields']['field_tlregion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tlregion']['element_label_colon'] = FALSE;
  /* Field: Content: Teach */
  $handler->display->display_options['fields']['field_teach']['id'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['table'] = 'field_data_field_teach';
  $handler->display->display_options['fields']['field_teach']['field'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teach']['delta_offset'] = '0';
  /* Field: Content: Lecture */
  $handler->display->display_options['fields']['field_lecture']['id'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['table'] = 'field_data_field_lecture';
  $handler->display->display_options['fields']['field_lecture']['field'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lecture']['delta_offset'] = '0';
  /* Field: Content: Agree */
  $handler->display->display_options['fields']['field_agree']['id'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['table'] = 'field_data_field_agree';
  $handler->display->display_options['fields']['field_agree']['field'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['exclude'] = TRUE;
  /* Field: Content: Classification */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['delta_offset'] = '0';
  /* Field: Content: Display */
  $handler->display->display_options['fields']['field_display']['id'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['table'] = 'field_data_field_display';
  $handler->display->display_options['fields']['field_display']['field'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['exclude'] = TRUE;
  /* Field: Content: Listing Expires */
  $handler->display->display_options['fields']['field_listing_expires']['id'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['field'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listing_expires']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Payment Status */
  $handler->display->display_options['fields']['field_payment_status']['id'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['table'] = 'field_data_field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['field'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['exclude'] = TRUE;
  /* Field: Content: Quilter's Statement */
  $handler->display->display_options['fields']['field_quilter_s_statement']['id'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['table'] = 'field_data_field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['field'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[field_first_name] [field_last_name]</strong>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_teach], [field_lecture]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] | [field_email_address] | [field_website_url] | [field_address] | [field_tlregion] <br>
[nothing_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_listing_expires_1]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Listing Expires (field_listing_expires) */
  $handler->display->display_options['sorts']['field_listing_expires_value']['id'] = 'field_listing_expires_value';
  $handler->display->display_options['sorts']['field_listing_expires_value']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['sorts']['field_listing_expires_value']['field'] = 'field_listing_expires_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher_lecturer_directory' => 'teacher_lecturer_directory',
  );
  /* Filter criterion: Content: Listing Expires (field_listing_expires) */
  $handler->display->display_options['filters']['field_listing_expires_value']['id'] = 'field_listing_expires_value';
  $handler->display->display_options['filters']['field_listing_expires_value']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['filters']['field_listing_expires_value']['field'] = 'field_listing_expires_value';
  $handler->display->display_options['filters']['field_listing_expires_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_listing_expires_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_listing_expires_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_listing_expires_value']['default_to_date'] = '2 months';
  $handler->display->display_options['path'] = 'admin/reports/teacher/expire';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Status Admin View';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 1;

  /* Display: Expiration Page */
  $handler = $view->new_display('block', 'Expiration Page', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teacher Lecturer Expiration in Next 60 days';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_email_address' => 'field_email_address',
    'field_website_url' => 'field_website_url',
    'field_address' => 'field_address',
    'field_tlregion' => 'field_tlregion',
    'field_teach' => 'field_teach',
    'field_lecture' => 'field_lecture',
    'field_agree' => 'field_agree',
    'field_classification' => 'field_classification',
    'field_display' => 'field_display',
    'field_listing_expires' => 'field_listing_expires',
    'field_payment_status' => 'field_payment_status',
    'field_quilter_s_statement' => 'field_quilter_s_statement',
    'title' => 'title',
    'nothing_1' => 'nothing_1',
    'nothing' => 'nothing',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tlregion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_teach' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lecture' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agree' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_classification' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_display' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_expires' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_payment_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_quilter_s_statement' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['exclude'] = TRUE;
  /* Field: Content: Website URL */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['exclude'] = TRUE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-country] | [field_address-administrative_area]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_tlregion']['id'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['table'] = 'field_data_field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['field'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['label'] = '';
  $handler->display->display_options['fields']['field_tlregion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tlregion']['element_label_colon'] = FALSE;
  /* Field: Content: Teach */
  $handler->display->display_options['fields']['field_teach']['id'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['table'] = 'field_data_field_teach';
  $handler->display->display_options['fields']['field_teach']['field'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teach']['delta_offset'] = '0';
  /* Field: Content: Lecture */
  $handler->display->display_options['fields']['field_lecture']['id'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['table'] = 'field_data_field_lecture';
  $handler->display->display_options['fields']['field_lecture']['field'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lecture']['delta_offset'] = '0';
  /* Field: Content: Agree */
  $handler->display->display_options['fields']['field_agree']['id'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['table'] = 'field_data_field_agree';
  $handler->display->display_options['fields']['field_agree']['field'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['exclude'] = TRUE;
  /* Field: Content: Classification */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['delta_offset'] = '0';
  /* Field: Content: Display */
  $handler->display->display_options['fields']['field_display']['id'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['table'] = 'field_data_field_display';
  $handler->display->display_options['fields']['field_display']['field'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['exclude'] = TRUE;
  /* Field: Content: Listing Expires */
  $handler->display->display_options['fields']['field_listing_expires']['id'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['field'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Payment Status */
  $handler->display->display_options['fields']['field_payment_status']['id'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['table'] = 'field_data_field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['field'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['exclude'] = TRUE;
  /* Field: Content: Quilter's Statement */
  $handler->display->display_options['fields']['field_quilter_s_statement']['id'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['table'] = 'field_data_field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['field'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[field_first_name] [field_last_name]</strong>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_teach], [field_lecture]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] | [field_email_address] | [field_website_url] | [field_address] | [field_tlregion] <br>
[nothing_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Listing Expires (field_listing_expires) */
  $handler->display->display_options['sorts']['field_listing_expires_value']['id'] = 'field_listing_expires_value';
  $handler->display->display_options['sorts']['field_listing_expires_value']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['sorts']['field_listing_expires_value']['field'] = 'field_listing_expires_value';
  /* Sort criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher_lecturer_directory' => 'teacher_lecturer_directory',
  );
  /* Filter criterion: Content: Listing Expires (field_listing_expires) */
  $handler->display->display_options['filters']['field_listing_expires_value']['id'] = 'field_listing_expires_value';
  $handler->display->display_options['filters']['field_listing_expires_value']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['filters']['field_listing_expires_value']['field'] = 'field_listing_expires_value';
  $handler->display->display_options['filters']['field_listing_expires_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_listing_expires_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_listing_expires_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_listing_expires_value']['default_to_date'] = '2 month';
  $handler->display->display_options['block_description'] = 'Expiring in 30 days';

  /* Display: Expiration Page Expired */
  $handler = $view->new_display('block', 'Expiration Page Expired', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teacher Lecturer Expired';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_email_address' => 'field_email_address',
    'field_website_url' => 'field_website_url',
    'field_address' => 'field_address',
    'field_tlregion' => 'field_tlregion',
    'field_teach' => 'field_teach',
    'field_lecture' => 'field_lecture',
    'field_agree' => 'field_agree',
    'field_classification' => 'field_classification',
    'field_display' => 'field_display',
    'field_listing_expires' => 'field_listing_expires',
    'field_payment_status' => 'field_payment_status',
    'field_quilter_s_statement' => 'field_quilter_s_statement',
    'title' => 'title',
    'nothing_1' => 'nothing_1',
    'nothing' => 'nothing',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tlregion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_teach' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lecture' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agree' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_classification' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_display' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_expires' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_payment_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_quilter_s_statement' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['exclude'] = TRUE;
  /* Field: Content: Website URL */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['exclude'] = TRUE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-country] | [field_address-administrative_area]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_tlregion']['id'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['table'] = 'field_data_field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['field'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['label'] = '';
  $handler->display->display_options['fields']['field_tlregion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tlregion']['element_label_colon'] = FALSE;
  /* Field: Content: Teach */
  $handler->display->display_options['fields']['field_teach']['id'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['table'] = 'field_data_field_teach';
  $handler->display->display_options['fields']['field_teach']['field'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teach']['delta_offset'] = '0';
  /* Field: Content: Lecture */
  $handler->display->display_options['fields']['field_lecture']['id'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['table'] = 'field_data_field_lecture';
  $handler->display->display_options['fields']['field_lecture']['field'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lecture']['delta_offset'] = '0';
  /* Field: Content: Agree */
  $handler->display->display_options['fields']['field_agree']['id'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['table'] = 'field_data_field_agree';
  $handler->display->display_options['fields']['field_agree']['field'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['exclude'] = TRUE;
  /* Field: Content: Classification */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['delta_offset'] = '0';
  /* Field: Content: Display */
  $handler->display->display_options['fields']['field_display']['id'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['table'] = 'field_data_field_display';
  $handler->display->display_options['fields']['field_display']['field'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['exclude'] = TRUE;
  /* Field: Content: Listing Expires */
  $handler->display->display_options['fields']['field_listing_expires']['id'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['field'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Payment Status */
  $handler->display->display_options['fields']['field_payment_status']['id'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['table'] = 'field_data_field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['field'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['exclude'] = TRUE;
  /* Field: Content: Quilter's Statement */
  $handler->display->display_options['fields']['field_quilter_s_statement']['id'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['table'] = 'field_data_field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['field'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[field_first_name] [field_last_name]</strong>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_teach], [field_lecture]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] | [field_email_address] | [field_website_url] | [field_address] | [field_tlregion] <br>
[nothing_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Listing Expires (field_listing_expires) */
  $handler->display->display_options['sorts']['field_listing_expires_value']['id'] = 'field_listing_expires_value';
  $handler->display->display_options['sorts']['field_listing_expires_value']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['sorts']['field_listing_expires_value']['field'] = 'field_listing_expires_value';
  /* Sort criterion: Content: Last Name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher_lecturer_directory' => 'teacher_lecturer_directory',
  );
  /* Filter criterion: Content: Listing Expires (field_listing_expires) */
  $handler->display->display_options['filters']['field_listing_expires_value']['id'] = 'field_listing_expires_value';
  $handler->display->display_options['filters']['field_listing_expires_value']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['filters']['field_listing_expires_value']['field'] = 'field_listing_expires_value';
  $handler->display->display_options['filters']['field_listing_expires_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_listing_expires_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_listing_expires_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_listing_expires_value']['default_to_date'] = '2 month';
  $handler->display->display_options['block_description'] = 'Expired';

  /* Display: Expiration Status Page */
  $handler = $view->new_display('page', 'Expiration Status Page', 'page_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'tlview';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_listing_expires_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_listing_expires_1' => 'field_listing_expires_1',
    'created' => 'created',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_email_address' => 'field_email_address',
    'field_address' => 'field_address',
    'field_website_url' => 'field_website_url',
    'field_tlregion' => 'field_tlregion',
    'field_teach' => 'field_teach',
    'field_lecture' => 'field_lecture',
    'field_agree' => 'field_agree',
    'field_classification' => 'field_classification',
    'field_display' => 'field_display',
    'field_listing_expires' => 'field_listing_expires',
    'field_payment_status' => 'field_payment_status',
    'field_quilter_s_statement' => 'field_quilter_s_statement',
    'title' => 'title',
    'nothing_1' => 'nothing_1',
    'nothing' => 'nothing',
    'edit_node' => 'edit_node',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['style_options']['default'] = 'field_listing_expires_1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_listing_expires_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tlregion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_teach' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lecture' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agree' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_classification' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_display' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_expires' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_payment_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_quilter_s_statement' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Listing Expires */
  $handler->display->display_options['fields']['field_listing_expires_1']['id'] = 'field_listing_expires_1';
  $handler->display->display_options['fields']['field_listing_expires_1']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires_1']['field'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires_1']['settings'] = array(
    'format_type' => 'month_and_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_listing_expires_1']['group_columns'] = array(
    'entity_type' => 'entity_type',
    'entity_id' => 'entity_id',
    'value' => 'value',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Submitted: [created]';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: Content: Email Address */
  $handler->display->display_options['fields']['field_email_address']['id'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['table'] = 'field_data_field_email_address';
  $handler->display->display_options['fields']['field_email_address']['field'] = 'field_email_address';
  $handler->display->display_options['fields']['field_email_address']['label'] = '';
  $handler->display->display_options['fields']['field_email_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email_address']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-country] | [field_address-administrative_area]';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Website URL */
  $handler->display->display_options['fields']['field_website_url']['id'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['table'] = 'field_data_field_website_url';
  $handler->display->display_options['fields']['field_website_url']['field'] = 'field_website_url';
  $handler->display->display_options['fields']['field_website_url']['exclude'] = TRUE;
  /* Field: Content: Membership */
  $handler->display->display_options['fields']['field_tlregion']['id'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['table'] = 'field_data_field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['field'] = 'field_tlregion';
  $handler->display->display_options['fields']['field_tlregion']['label'] = '';
  $handler->display->display_options['fields']['field_tlregion']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tlregion']['element_label_colon'] = FALSE;
  /* Field: Content: Teach */
  $handler->display->display_options['fields']['field_teach']['id'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['table'] = 'field_data_field_teach';
  $handler->display->display_options['fields']['field_teach']['field'] = 'field_teach';
  $handler->display->display_options['fields']['field_teach']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_teach']['delta_offset'] = '0';
  /* Field: Content: Lecture */
  $handler->display->display_options['fields']['field_lecture']['id'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['table'] = 'field_data_field_lecture';
  $handler->display->display_options['fields']['field_lecture']['field'] = 'field_lecture';
  $handler->display->display_options['fields']['field_lecture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lecture']['delta_offset'] = '0';
  /* Field: Content: Agree */
  $handler->display->display_options['fields']['field_agree']['id'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['table'] = 'field_data_field_agree';
  $handler->display->display_options['fields']['field_agree']['field'] = 'field_agree';
  $handler->display->display_options['fields']['field_agree']['exclude'] = TRUE;
  /* Field: Content: Classification */
  $handler->display->display_options['fields']['field_classification']['id'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['table'] = 'field_data_field_classification';
  $handler->display->display_options['fields']['field_classification']['field'] = 'field_classification';
  $handler->display->display_options['fields']['field_classification']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_classification']['delta_offset'] = '0';
  /* Field: Content: Display */
  $handler->display->display_options['fields']['field_display']['id'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['table'] = 'field_data_field_display';
  $handler->display->display_options['fields']['field_display']['field'] = 'field_display';
  $handler->display->display_options['fields']['field_display']['exclude'] = TRUE;
  /* Field: Content: Listing Expires */
  $handler->display->display_options['fields']['field_listing_expires']['id'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['field'] = 'field_listing_expires';
  $handler->display->display_options['fields']['field_listing_expires']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_listing_expires']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Payment Status */
  $handler->display->display_options['fields']['field_payment_status']['id'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['table'] = 'field_data_field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['field'] = 'field_payment_status';
  $handler->display->display_options['fields']['field_payment_status']['exclude'] = TRUE;
  /* Field: Content: Quilter's Statement */
  $handler->display->display_options['fields']['field_quilter_s_statement']['id'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['table'] = 'field_data_field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['field'] = 'field_quilter_s_statement';
  $handler->display->display_options['fields']['field_quilter_s_statement']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[field_first_name] [field_last_name]</strong>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_teach], [field_lecture]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] | [field_email_address] | [field_website_url] | [field_address] | [field_tlregion] <br>
[nothing_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_listing_expires_1]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Listing Expires (field_listing_expires) */
  $handler->display->display_options['sorts']['field_listing_expires_value']['id'] = 'field_listing_expires_value';
  $handler->display->display_options['sorts']['field_listing_expires_value']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['sorts']['field_listing_expires_value']['field'] = 'field_listing_expires_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'teacher_lecturer_directory' => 'teacher_lecturer_directory',
  );
  /* Filter criterion: Content: Listing Expires (field_listing_expires) */
  $handler->display->display_options['filters']['field_listing_expires_value']['id'] = 'field_listing_expires_value';
  $handler->display->display_options['filters']['field_listing_expires_value']['table'] = 'field_data_field_listing_expires';
  $handler->display->display_options['filters']['field_listing_expires_value']['field'] = 'field_listing_expires_value';
  $handler->display->display_options['filters']['field_listing_expires_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_listing_expires_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_listing_expires_value']['default_date'] = 'now +2 months';
  $handler->display->display_options['filters']['field_listing_expires_value']['default_to_date'] = '2 months';
  $handler->display->display_options['path'] = 'admin/reports/teacher/upcoming';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Upcoming Expiration ';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 1;
  $export['teacher_lecturer_view'] = $view;

  return $export;
}
