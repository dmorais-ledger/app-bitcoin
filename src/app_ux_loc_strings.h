#pragma once

typedef enum {
  // Strings having 1 line of text : pb, pn):
  // Strings having 2 lines of text : bb, nn, bn, pbb, pnn, pbn):
  UX_IDLE_FLOW_1_STEP_LINE1,
  UX_IDLE_FLOW_1_STEP_LINE2,
  // Strings having 3 lines of text : bnn, nnn):
  // Strings having 4 lines of text : bnnn, nnnn):
  // Strings having 5 lines of text : nnbnn):

  // Strings used as menulist:

  NB_APP_UX_LOC_STRINGS
} APP_UX_LOC_STRINGS;

// Used for strings dynamically built into specific buffers:
#define APP_UX_LOC_WORDS_BUFFER  "G.UX.WB"
#define APP_UX_LOC_STRING_BUFFER "G.UX.SB"

void select_language(UX_LOC_LANGUAGES language);
char *get_ux_loc_string(UX_LOC_STRINGS_INDEX index);
