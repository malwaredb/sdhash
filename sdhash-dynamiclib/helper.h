#ifndef __SDHASH_HELPER_DYLIB_H__
#define __SDHASH_HELPER_DYLIB_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

char* sdhash_from_buffer(char* fname, char* buffer, uint64_t buffLen);
char* sdhash_from_path(char* fname);
int sdhash_compare_hashes_helper(char* hash1, char* hash2);
int sdhash_compare_buffers_helper(char* buff1, uint64_t length1, char* buff2, uint64_t length2);

#ifdef __cplusplus
}
#endif

#endif