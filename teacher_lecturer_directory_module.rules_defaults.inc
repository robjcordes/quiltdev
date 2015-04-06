<?php
/**
 * @file
 * teacher_lecturer_directory_module.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function teacher_lecturer_directory_module_default_rules_configuration() {
  $items = array();
  $items['rules_create_teacher_lecturer_directory_entry'] = entity_import('rules_config', '{ "rules_create_teacher_lecturer_directory_entry" : {
      "LABEL" : "Create Teacher Lecturer Directory Entry",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "webform_rules", "php" ],
      "ON" : [ "webform_rules_submit" ],
      "IF" : [
        { "webform_has_id" : {
            "form_id" : "[form-id:value]",
            "selected_webform" : { "value" : { "webform-client-form-506" : "webform-client-form-506" } }
          }
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "$node = new stdClass();\\r\\n  $node-\\u003Etype = \\u0027teacher_lecturer_directory\\u0027;\\r\\nnode_object_prepare($node);\\r\\n$node-\\u003Elanguage = LANGUAGE_NONE;\\r\\n$first_name = $data[\\u0027components\\u0027][\\u0027first_name\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_first_name[\\u0027und\\u0027][0][\\u0027value\\u0027] = $first_name;\\r\\n$last_name = $data[\\u0027components\\u0027][\\u0027last_name\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_last_name[\\u0027und\\u0027][0][\\u0027value\\u0027] = $last_name;\\r\\n$website_url = $data[\\u0027components\\u0027][\\u0027website_url\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_website_url[\\u0027und\\u0027][0][\\u0027value\\u0027] = $website_url;\\r\\n$email_address = $data[\\u0027components\\u0027][\\u0027email_address\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_email_address[\\u0027und\\u0027][0][\\u0027email\\u0027] = $email_address;\\r\\n$phone_number = $data[\\u0027components\\u0027][\\u0027phone_number\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_directory_phone_number[\\u0027und\\u0027][0][\\u0027value\\u0027] = $phone_number;\\r\\n$country = $data[\\u0027components\\u0027][\\u0027country\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_address[\\u0027und\\u0027][0][\\u0027country\\u0027] = $country;\\r\\n$address_1 = $data[\\u0027components\\u0027][\\u0027address_1\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_address[\\u0027und\\u0027][0][\\u0027thoroughfare\\u0027] = $address_1;\\r\\n$address_2 = $data[\\u0027components\\u0027][\\u0027address_2\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_address[\\u0027und\\u0027][0][\\u0027premise\\u0027] = $address_2;\\r\\n$postal_code = $data[\\u0027components\\u0027][\\u0027postal_code\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_address[\\u0027und\\u0027][0][\\u0027postal_code\\u0027] = $postal_code;\\r\\n$city = $data[\\u0027components\\u0027][\\u0027city\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_address[\\u0027und\\u0027][0][\\u0027locality\\u0027] = $city;\\r\\n$state = $data[\\u0027components\\u0027][\\u0027state\\u0027][\\u0027value\\u0027][0];\\r\\nif (isset($state)) {\\r\\n$node-\\u003Efield_address[\\u0027und\\u0027][0][\\u0027administrative_area\\u0027] = $state;\\r\\n} else {\\r\\n$state_region_province = $data[\\u0027components\\u0027][\\u0027state_region_province\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_address[\\u0027und\\u0027][0][\\u0027administrative_area\\u0027] = $state_region_province;\\r\\n}\\r\\n\\r\\n$membership = $data[\\u0027components\\u0027][\\u0027membership\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_tlregion[\\u0027und\\u0027][0][\\u0027value\\u0027] = $membership;\\r\\n\\r\\n$teach = $data[\\u0027components\\u0027][\\u0027teach\\u0027][\\u0027value\\u0027];\\r\\n$node-\\u003Efield_teach[$node-\\u003Elanguage][0][\\u0027value\\u0027] = $teach;\\r\\n  foreach($teach as $key=\\u003E$value) \\r\\n  {\\r\\n  $node-\\u003Efield_teach[$node-\\u003Elanguage][$key]=$value;\\r\\n  }\\r\\n\\r\\n$lecture = $data[\\u0027components\\u0027][\\u0027lecture\\u0027][\\u0027value\\u0027];\\r\\n$node-\\u003Efield_lecture[$node-\\u003Elanguage][0][\\u0027value\\u0027] = $lecture;\\r\\n  foreach($lecture as $key=\\u003E$value) \\r\\n  {\\r\\n  $node-\\u003Efield_lecture[$node-\\u003Elanguage][$key]=$value;\\r\\n  }\\r\\n\\r\\n$quilters_statement_2 = $data[\\u0027components\\u0027][\\u0027quilters_statement_2\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_quilter_s_statement[\\u0027und\\u0027][0][\\u0027value\\u0027] = $quilters_statement_2;\\r\\n\\r\\n$agree = $data[\\u0027components\\u0027][\\u0027agree\\u0027][\\u0027value\\u0027][0];\\r\\n$node-\\u003Efield_agree[\\u0027und\\u0027][0][\\u0027value\\u0027] = $agree;\\r\\n\\r\\n  $node-\\u003Etitle = $title;\\r\\n  node_save($node);" } }
      ]
    }
  }');
  return $items;
}
