//
// opener.c
// Open URLS in C
//
// MIT licensed.
// Copyright (c) Abraham Hernandez <abraham@abranhe.com>
//

#include <string.h>
#include <stdlib.h>

char * 
create_cmd(const char * cmd, const char * link) {
    char * url = malloc(strlen(cmd) + strlen(link) + 1);
    strcpy(url, cmd);
    strcat(url, " ");
    strcat(url, link);
    return url;
}

int
opener(const char *url) {

#ifdef _WIN32
#define cmd "open"
#elif _WIN64
#define cmd "open"
#elif __APPLE__ || __MACH__
#define cmd "open"
#else
#define cmd "xdg-open"
#endif    

    char *script = create_cmd(cmd, url);

    system(script);
    free(script);
    return 0;
}
