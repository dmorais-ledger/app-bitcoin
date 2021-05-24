#pragma once

// WARNING: if you change the order of **ANY** string here, don't forget to
// update the corresponding entry in app_ux_loc_strings.h

// static const char * to be sure the array will be stored in text segment.
static const char *app_ux_loc_strings_fr[NB_APP_UX_LOC_STRINGS]={
  // Strings having 1 line of text : pb, pn):
  // Strings having 2 lines of text : bb, nn, bn, pbb, pnn, pbn):
  "L'application",                  // UX_IDLE_FLOW_1_STEP_LINE1
  "est prete",                      // UX_IDLE_FLOW_1_STEP_LINE2

  // Strings having 3 lines of text : bnn, nnn):
  // Strings having 4 lines of text : bnnn, nnnn):
  // Strings having 5 lines of text : nnbnn):

  // Strings used as menulist:

};
