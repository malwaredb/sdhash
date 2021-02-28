#include "helper.h"
#include "sdhash.h"
#include <stdio.h>
#include <string.h>
#include <string>

extern "C" {
    char* sdhash_from_buffer(char* fname, char* buffer, uint64_t buffLen) {
        string filename(fname);
        string sdhash_result = sdhash_buffer(filename, buffer, buffLen);
        char* temp = (char*) malloc(sizeof(char*) * sdhash_result.length());
        strcpy(temp, sdhash_result.c_str());
        return temp;
    }

    char* sdhash_from_path(char* fname) {
        string sdhash_result = sdhash_file(fname);
        char* temp;
        temp = strdup(sdhash_result.c_str());
        return temp;
    }
}