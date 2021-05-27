#ifdef HAVE_UX_LOC_STRINGS
#include <stdio.h>
#include <string.h>
#include "ux.h"
#include "btchip_display_variables.h"
#include "os_io.h"
#include "os_pic.h"
#include "app_ux_loc_strings.h"

// Include the files containing localised strings:
#include "app_ux_loc_strings_en.h"
#include "app_ux_loc_strings_fr.h"

// Selected language (English by default):
static UX_LOC_LANGUAGES ux_loc_language = UX_LOC_ENGLISH;

void select_language(UX_LOC_LANGUAGES language) {
  if (language < NB_UX_LOC_LANGUAGES)
    ux_loc_language = language;
}

char *get_ux_loc_string(UX_LOC_STRINGS_INDEX index)
{
  char *string=NULL;
  // Get the string:
  if (index < NB_APP_UX_LOC_STRINGS) {
    //PRINTF("get_ux_loc_string, index=%d", index);
    //PRINTF("app_ux_loc_strings_en[index]=%s", PIC(app_ux_loc_strings_en[index]));
#if 0
    switch(ux_loc_language) {
      case UX_LOC_FRENCH:
        string = (char *)PIC(app_ux_loc_strings_fr[index]);
        break;

      default:
        string = (char *)PIC(app_ux_loc_strings_en[index]);
        break;
    }
    //PRINTF("get_ux_loc_string, string=%s", string);
    // Handle special cases of strings dynamically built into specific buffers:
    // This 'trick' is needed to be able to only store 1st index of strings
    // instead of having an array with indexes of line1, line2, line3 etc
    if (!strcmp(string, APP_UX_LOC_FULL_ADDRESS)) {
      string = (char *)PIC(vars.tmp.fullAddress);
    }
    else if (!strcmp(string, APP_UX_LOC_FULL_AMOUNT)) {
      string = (char *)PIC(vars.tmp.fullAmount);
    }
    else if (!strcmp(string, APP_UX_LOC_FEES_AMOUNT)) {
      string = (char *)PIC(vars.tmp.feesAmount);
    }
    else if (!strcmp(string, APP_UX_LOC_G_IO_APDU_BUF)) {
      string = (char *)PIC(G_io_apdu_buffer+200);
    }
#else //0
    switch(index) {
      // Put here all indexes using vars.tmp.feesAmount:
      case UX_CONFIRM_SINGLE_FLOW_1_STEP_LINE2:
        string = (char *)PIC(vars.tmp.feesAmount);
        break;

        // Put here all indexes using G_io_apdu_buffer:
      case UX_DISPLAY_TOKEN_FLOW_1_STEP_LINE2:
        string = (char *)PIC(G_io_apdu_buffer+200);
        break;
/*
// Put here all indexes using vars.tmp.fullAmount:
case :
string = (char *)PIC(vars.tmp.fullAmount);
break;
*/
      default:
        switch(ux_loc_language) {
          case UX_LOC_FRENCH:
            string = (char *)PIC(app_ux_loc_strings_fr[index]);
            break;

          default:
            string = (char *)PIC(app_ux_loc_strings_en[index]);
            break;
        }
        break;
    }
#endif //0
  }
  //PRINTF("get_app_ux_loc_string, string=%s", string);
  return string;
}
#endif //HAVE_UX_LOC_STRINGS
