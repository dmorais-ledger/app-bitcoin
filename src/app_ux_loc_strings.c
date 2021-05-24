#ifdef HAVE_UX_LOC_STRINGS
#include <stdio.h>
#include "ux.h"
#include "app_ux_loc_strings.h"

// Include the files containing localised strings:
#include "app_ux_loc_strings_en.h"
#include "app_ux_loc_strings_fr.h"

// Selected language (English by default):
static UX_LOC_LANGUAGES app_ux_loc_language = UX_LOC_ENGLISH;

void select_language(UX_LOC_LANGUAGES language) {
  if (language < NB_UX_LOC_LANGUAGES)
    app_ux_loc_language = language;
}

char *get_ux_loc_string(UX_LOC_STRINGS_INDEX index)
{
  char *string=NULL;

  //PRINTF("get_app_ux_loc_string, index=%d", index);
  //PRINTF("app_ux_loc_strings_en[index]=%s", app_ux_loc_strings_en[index]);
  // Get the string:
  if (index < NB_APP_UX_LOC_STRINGS) {
    switch(app_ux_loc_language)
    {
      case UX_LOC_FRENCH:
        string = (char *)app_ux_loc_strings_fr[index];
        break;

      default:
        string = (char *)app_ux_loc_strings_en[index];
        break;
    }
    //PRINTF("get_app_ux_loc_string, string=%s", string);
  }
  return string;
}
#endif //HAVE_UX_LOC_STRINGS
