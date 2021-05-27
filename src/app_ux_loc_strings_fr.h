#pragma once

// WARNING: if you change the order of **ANY** string here, don't forget to
// update the corresponding entry in app_ux_loc_strings.h

// static const char * to be sure the array will be stored in text segment.
static const char *app_ux_loc_strings_fr[NB_APP_UX_LOC_STRINGS]={
  // Strings having 1 line of text : pb, pn):
  // Strings having 2 lines of text : bb, nn, bn, pbb, pnn, pbn):
  "L'application",                  // UX_IDLE_FLOW_1_STEP_LINE1
  "est prete",                      // UX_IDLE_FLOW_1_STEP_LINE2
  "Parametres",                     // UX_IDLE_FLOW_2_STEP_LINE1
  "Version",                        // UX_IDLE_FLOW_3_STEP_LINE1
  APPVERSION,                       // UX_IDLE_FLOW_3_STEP_LINE2
  "Quitter",                        // UX_IDLE_FLOW_4_STEP_LINE1
  "Signer",                         // UX_SIGN_FLOW_1_STEP_LINE1
  "message",                        // UX_SIGN_FLOW_1_STEP_LINE2
  "Signer",                         // UX_SIGN_FLOW_3_STEP_LINE1
  "message",                        // UX_SIGN_FLOW_3_STEP_LINE2
  "Annuler",                        // UX_SIGN_FLOW_4_STEP_LINE1
  "signature",                      // UX_SIGN_FLOW_4_STEP_LINE2
  "Verifier",                       // UX_CONFIRM_FULL_FLOW_1_STEP_LINE1
  "transaction",                    // UX_CONFIRM_FULL_FLOW_1_STEP_LINE2
  "Accepter",                       // UX_CONFIRM_FULL_FLOW_5_STEP_LINE1
  "et envoyer",                     // UX_CONFIRM_FULL_FLOW_5_STEP_LINE2
  "Rejeter",                        // UX_CONFIRM_FULL_FLOW_6_STEP_LINE1
  "Verifier",                       // UX_CONFIRM_SINGLE_FLOW_1_STEP_LINE1
  APP_UX_LOC_FEES_AMOUNT,           // UX_CONFIRM_SINGLE_FLOW_1_STEP_LINE2
  "Accepter",                       // UX_CONFIRM_SINGLE_FLOW_5_STEP_LINE1
  "Rejeter",                        // UX_CONFIRM_SINGLE_FLOW_6_STEP_LINE1
  "Confirmer",                      // UX_FINALIZE_FLOW_1_STEP_LINE1
  "transaction",                    // UX_FINALIZE_FLOW_1_STEP_LINE2
  "Accepter",                       // UX_FINALIZE_FLOW_5_STEP_LINE1
  "et envoyer",                     // UX_FINALIZE_FLOW_5_STEP_LINE2
  "Rejeter",                        // UX_FINALIZE_FLOW_6_STEP_LINE1
  "La derivation",                  // UX_DISPLAY_PUBLIC_FLOW_1_STEP_LINE1
  "est inhabituelle!",              // UX_DISPLAY_PUBLIC_FLOW_1_STEP_LINE2
  "Rejeter si vous",                // UX_DISPLAY_PUBLIC_FLOW_3_STEP_LINE1
  "n'etes pas sure",                // UX_DISPLAY_PUBLIC_FLOW_3_STEP_LINE2
  "Approuver la",                   // UX_DISPLAY_PUBLIC_FLOW_4_STEP_LINE1
  "derivation",                     // UX_DISPLAY_PUBLIC_FLOW_4_STEP_LINE2
  "Approuver",                      // UX_DISPLAY_PUBLIC_FLOW_6_STEP_LINE1
  "Rejeter",                        // UX_DISPLAY_PUBLIC_FLOW_7_STEP_LINE1
  "Confirmer jeton",                // UX_DISPLAY_TOKEN_FLOW_1_STEP_LINE1
  APP_UX_LOC_G_IO_APDU_BUF,         // UX_DISPLAY_TOKEN_FLOW_1_STEP_LINE2
  "Rejeter",                        // UX_DISPLAY_TOKEN_FLOW_2_STEP_LINE1
  "Exporter",                       // UX_REQUEST_PUBKEY_APPROVAL_FLOW_1_STEP_LINE1
  "cle publique?",                  // UX_REQUEST_PUBKEY_APPROVAL_FLOW_1_STEP_LINE2
  "Rejeter",                        // UX_REQUEST_PUBKEY_APPROVAL_FLOW_2_STEP_LINE1
  "Le change",                      // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_1_STEP_LINE1
  "est inhabituel",                 // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_1_STEP_LINE2
  "Rejeter si vous",                // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_3_STEP_LINE1
  "n'etes pas sur",                 // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_3_STEP_LINE2
  "Approuver",                      // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_4_STEP_LINE1
  "La signature",                   // UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_1_STEP_LINE1
  "est inhabituelle",               // UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_1_STEP_LINE2
  "Rejeter si vous",                // UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_3_STEP_LINE1
  "n'etes pas sur",                 // UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_3_STEP_LINE2
  "Approuver",                      // UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_4_STEP_LINE1
  "Donnes non verifiees",           // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_1_STEP_LINE1
  "Mettre a jour",                  // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_2_STEP_LINE1
  " Ledger Live",                   // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_2_STEP_LINE2
  "ou logiciel tiers",              // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_3_STEP_LINE1
  "de portefeuille",                // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_3_STEP_LINE2
  "Annuler",                        // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_4_STEP_LINE1
  "Continuer",                      // UX_REQUEST_SEGWIT_INPUT_APPROVAL_FLOW_5_STEP_LINE1
  "Validation Auto",                // SETTINGS_PUBKEY_EXPORT_AUTO_APPROVAL
  "Validation Manuelle",            // SETTINGS_PUBKEY_EXPORT_MANUAL_APPROVAL
  "Retour",                         // SETTINGS_PUBKEY_EXPORT_BACK
  "Cle publique",                   // SETTINGS_SUBMENU_PUBKEY
  "Retour",                         // SETTINGS_SUBMENU_BACK
  "Montant",                        // UX_CONFIRM_FULL_FLOW_2_STEP_LINE1
  "Addresse"                        // UX_CONFIRM_FULL_FLOW_3_STEP_LINE1
  "Frais",                          // UX_CONFIRM_FULL_FLOW_4_STEP_LINE1
  "Montant",                        // UX_CONFIRM_SINGLE_FLOW_2_STEP_LINE1
  "Addresse",                       // UX_CONFIRM_SINGLE_FLOW_3_STEP_LINE1
  "Frais",                          // UX_FINALIZE_FLOW_4_STEP_LINE1
  "Chemin Derivation",              // UX_DISPLAY_PUBLIC_FLOW_2_STEP_LINE1
  "Addresse"                        // UX_DISPLAY_PUBLIC_FLOW_5_STEP_LINE1
  "Changer chemin",                 // UX_REQUEST_CHANGE_PATH_APPROVAL_FLOW_2_STEP_LINE1
  "Signer chemin",                  // UX_REQUEST_SIGN_PATH_APPROVAL_FLOW_2_STEP_LINE1
  "Hash de message",                // UX_SIGN_FLOW_2_STEP_LINE1

};
