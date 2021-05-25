#pragma once

typedef enum {
  UX_IDLE_FLOW_1_STEP_LINE1,
  UX_IDLE_FLOW_1_STEP_LINE2,
  UX_IDLE_FLOW_2_STEP_LINE1,
  UX_IDLE_FLOW_3_STEP_LINE1,
  UX_IDLE_FLOW_3_STEP_LINE2,
  UX_IDLE_FLOW_4_STEP_LINE1,
  UX_SIGN_FLOW_1_STEP_LINE1,
  UX_SIGN_FLOW_1_STEP_LINE2,
  UX_SIGN_FLOW_3_STEP_LINE1,
  UX_SIGN_FLOW_3_STEP_LINE2,
  UX_SIGN_FLOW_4_STEP_LINE1,
  UX_SIGN_FLOW_4_STEP_LINE2,
  UX_CONFIRM_FULL_FLOW_1_STEP_LINE1,
  UX_CONFIRM_FULL_FLOW_1_STEP_LINE2,
  UX_CONFIRM_FULL_FLOW_5_STEP_LINE1,
  UX_CONFIRM_FULL_FLOW_5_STEP_LINE2,
  UX_CONFIRM_FULL_FLOW_6_STEP_LINE1,
  UX_CONFIRM_SINGLE_FLOW_1_STEP_LINE1,
  UX_CONFIRM_SINGLE_FLOW_1_STEP_LINE2,
  UX_CONFIRM_SINGLE_FLOW_5_STEP_LINE1,
  UX_CONFIRM_SINGLE_FLOW_6_STEP_LINE1,
  UX_FINALIZE_FLOW_1_STEP_LINE1,
  UX_FINALIZE_FLOW_1_STEP_LINE2,
  UX_FINALIZE_FLOW_5_STEP_LINE1,
  UX_FINALIZE_FLOW_5_STEP_LINE2,
  UX_FINALIZE_FLOW_6_STEP_LINE1,
  UX_DISPLAY_PUBLIC_FLOW_1_STEP_LINE1,
  UX_DISPLAY_PUBLIC_FLOW_1_STEP_LINE2,
  UX_DISPLAY_PUBLIC_FLOW_3_STEP_LINE1,
  UX_DISPLAY_PUBLIC_FLOW_3_STEP_LINE2,
  UX_DISPLAY_PUBLIC_FLOW_4_STEP_LINE1,
  UX_DISPLAY_PUBLIC_FLOW_4_STEP_LINE2,
  UX_DISPLAY_PUBLIC_FLOW_6_STEP_LINE1,
  UX_DISPLAY_PUBLIC_FLOW_7_STEP_LINE1,
  UX_DISPLAY_TOKEN_FLOW_1_STEP_LINE1,
  UX_DISPLAY_TOKEN_FLOW_1_STEP_LINE2,
  UX_DISPLAY_TOKEN_FLOW_2_STEP_LINE1,
  UX_REQUEST_PUBKEY_APPROVAL_FLOW_1_STEP_LINE1,
  UX_REQUEST_PUBKEY_APPROVAL_FLOW_1_STEP_LINE2,
  UX_REQUEST_PUBKEY_APPROVAL_FLOW_2_STEP_LINE1,
  UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_1_STEP_LINE1,
  UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_1_STEP_LINE2,
  UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_3_STEP_LINE1,
  UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_3_STEP_LINE2,
  UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_4_STEP_LINE1,
  UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_1_STEP_LINE1,
  UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_1_STEP_LINE2,
  UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_3_STEP_LINE1,
  UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_3_STEP_LINE2,
  UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_1_STEP_LINE1,
  UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_2_STEP_LINE1,
  UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_2_STEP_LINE2,
  UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_3_STEP_LINE1,
  UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_3_STEP_LINE2,
  UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_4_STEP_LINE1,
  UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_5_STEP_LINE1,
  SETTINGS_PUBKEY_EXPORT_AUTO_APPROVAL,
  SETTINGS_PUBKEY_EXPORT_MANUAL_APPROVAL,
  SETTINGS_PUBKEY_EXPORT_BACK,
  SETTINGS_SUBMENU_PUBKEY,
  SETTINGS_SUBMENU_BACK,

  NB_APP_UX_LOC_STRINGS
} APP_UX_LOC_STRINGS;

// Used for strings dynamically built into specific buffers:
#define APP_UX_LOC_FULL_ADDRESS   "FULL.ADDR"
#define APP_UX_LOC_FULL_AMOUNT    "FULL.AMOUNT"
#define APP_UX_LOC_FEES_AMOUNT    "FEES.AMOUNT"
#define APP_UX_LOC_G_IO_APDU_BUF  "APDU.BUF"
