#pragma once

// WARNING: if you change the order of **ANY** string here, don't forget to
// update the corresponding entry in app_ux_loc_strings.h

// static const char * to be sure the array will be stored in text segment.
static const char *app_ux_loc_strings_en[NB_APP_UX_LOC_STRINGS]={
  "Application",                    // UX_IDLE_FLOW_1_STEP_LINE1
  "is ready",                       // UX_IDLE_FLOW_1_STEP_LINE2
  "Settings",                       // UX_IDLE_FLOW_2_STEP_LINE1
  "Version",                        // UX_IDLE_FLOW_3_STEP_LINE1
  APPVERSION,                       // UX_IDLE_FLOW_3_STEP_LINE2
  "Quit",                           // UX_IDLE_FLOW_4_STEP_LINE1
  "Sign",                           // UX_SIGN_FLOW_1_STEP_LINE1
  "message",                        // UX_SIGN_FLOW_1_STEP_LINE2
  "Sign",                           // UX_SIGN_FLOW_3_STEP_LINE1
  "message",                        // UX_SIGN_FLOW_3_STEP_LINE2
  "Cancel",                         // UX_SIGN_FLOW_4_STEP_LINE1
  "signature",                      // UX_SIGN_FLOW_4_STEP_LINE2
  "Review",                         // UX_CONFIRM_FULL_FLOW_1_STEP_LINE1
  "transaction",                    // UX_CONFIRM_FULL_FLOW_1_STEP_LINE2
  "Accept",                         // UX_CONFIRM_FULL_FLOW_5_STEP_LINE1
  "and send",                       // UX_CONFIRM_FULL_FLOW_5_STEP_LINE2
  "Reject",                         // UX_CONFIRM_FULL_FLOW_6_STEP_LINE1
  "Review",                         // UX_CONFIRM_SINGLE_FLOW_1_STEP_LINE1
  APP_UX_LOC_FEES_AMOUNT,           // UX_CONFIRM_SINGLE_FLOW_1_STEP_LINE2
  "Accept",                         // UX_CONFIRM_SINGLE_FLOW_5_STEP_LINE1
  "Reject",                         // UX_CONFIRM_SINGLE_FLOW_6_STEP_LINE1
  "Confirm",                        // UX_FINALIZE_FLOW_1_STEP_LINE1
  "transaction",                    // UX_FINALIZE_FLOW_1_STEP_LINE2
  "Accept",                         // UX_FINALIZE_FLOW_5_STEP_LINE1
  "and send",                       // UX_FINALIZE_FLOW_5_STEP_LINE2
  "Reject",                         // UX_FINALIZE_FLOW_6_STEP_LINE1
  "The derivation",                 // UX_DISPLAY_PUBLIC_FLOW_1_STEP_LINE1
  "path is unusual!",               // UX_DISPLAY_PUBLIC_FLOW_1_STEP_LINE2
  "Reject if you're",               // UX_DISPLAY_PUBLIC_FLOW_3_STEP_LINE1
  "not sure",                       // UX_DISPLAY_PUBLIC_FLOW_3_STEP_LINE2
  "Approve derivation",             // UX_DISPLAY_PUBLIC_FLOW_4_STEP_LINE1
  "path",                           // UX_DISPLAY_PUBLIC_FLOW_4_STEP_LINE2
  "Approve",                        // UX_DISPLAY_PUBLIC_FLOW_6_STEP_LINE1
  "Reject",                         // UX_DISPLAY_PUBLIC_FLOW_7_STEP_LINE1
  "Confirm token",                  // UX_DISPLAY_TOKEN_FLOW_1_STEP_LINE1
  APP_UX_LOC_G_IO_APDU_BUF,         // UX_DISPLAY_TOKEN_FLOW_1_STEP_LINE2
  "Reject",                         // UX_DISPLAY_TOKEN_FLOW_2_STEP_LINE1
  "Export",                         // UX_REQUEST_PUBKEY_APPROVAL_FLOW_1_STEP_LINE1
  "public key?",                    // UX_REQUEST_PUBKEY_APPROVAL_FLOW_1_STEP_LINE2
  "Reject",                         // UX_REQUEST_PUBKEY_APPROVAL_FLOW_2_STEP_LINE1
  "The change path",                // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_1_STEP_LINE1
  "is unusual",                     // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_1_STEP_LINE2
  "Reject if you're",               // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_3_STEP_LINE1
  "not sure",                       // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_3_STEP_LINE2
  "Approve",                        // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_4_STEP_LINE1
  "The sign path",                  // UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_1_STEP_LINE1
  "is unusual",                     // UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_1_STEP_LINE2
  "Reject if you're",               // UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_3_STEP_LINE1
  "not sure",                       // UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_3_STEP_LINE2
  "Unverified inputs",              // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_1_STEP_LINE1
  "Update",                         // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_2_STEP_LINE1
  " Ledger Live",                   // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_2_STEP_LINE2
  "or third party",                 // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_3_STEP_LINE1
  "wallet software",                // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_3_STEP_LINE2
  "Cancel",                         // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_4_STEP_LINE1
  "Continue",                       // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_5_STEP_LINE1
  "Auto Approval",                  // SETTINGS_PUBKEY_EXPORT_AUTO_APPROVAL
  "Manual Approval",                // SETTINGS_PUBKEY_EXPORT_MANUAL_APPROVAL
  "Back",                           // SETTINGS_PUBKEY_EXPORT_BACK
  "Public keys export",             // SETTINGS_SUBMENU_PUBKEY
  "Back",                           // SETTINGS_SUBMENU_BACK

};
