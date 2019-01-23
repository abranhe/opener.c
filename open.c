//
// open.c
// Open URLS in C
//
// MIT licensed.
// Copyright (c) Abraham Hernandez <abraham@abranhe.com>
//

#include <string.h>
#include <stdlib.h>

#include "os.h"

char * 
create_cmd(const char * cmd, const char * link) {
    char * url = malloc(strlen(cmd) + strlen(link) + 1);
    strcpy(url, cmd);
    strcat(url, " ");
    strcat(url, link);
    return url;
}

int
open(const char *url) {
    
    const char *platform = operating_system();
    const char *cmd = NULL;

    // Hanlde macOS
    if (!strcmp(platform, "macOS")) {
      cmd = "open";

    // Handle Windows
    } else if (!strcmp(platform, "win32") || !strcmp(platform, "win64")) {
      cmd = "start";

    // Handle Linux, Unix, etc
    } else if (!strcmp(platform, "unix")
      || !strcmp(platform, "linux") 
      || !strcmp(platform, "freeBSD") 
      || !strcmp(platform, "other")) {
      cmd = "xdg-open";
    }

    char *script = create_cmd(cmd, url);

    system(script);
    free(script);
    return 0;
}