#include "helper.h"
#include "sdhash.h"
#include <stdio.h>
#include <string.h>

extern "C" {
    void shash_from_buffer(char* fname, char* buffer, uint64_t buffLen, char* sdhash_dest, uint64_t* sdhash_len) {
        string filename(fname);
        string sdhash_result = sdhash_buffer(filename, buffer, buffLen);
        strcpy(sdhash_dest, sdhash_result.c_str());
        *sdhash_len = (uint64_t) strlen(sdhash_result.c_str());
    }
}