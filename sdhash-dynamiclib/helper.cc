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

    int sdhash_compare_hashes_helper(char* hash1, char* hash2) {
        return sdhash_compare_hashes(hash1, hash2);
    }

    int sdhash_compare_buffers_helper(char* buff1, uint64_t length1, char* buff2, uint64_t length2) {
        return sdhash_compare_buffers(buff1, length1, buff2, length2);
    }
}