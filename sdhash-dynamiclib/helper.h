#ifndef __SDHASH_HELPER_DYLIB_H__
#define __SDHASH_HELPER_DYLIB_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
    void shash_from_buffer(char* fname, char* buffer, uint64_t buffLen, char* sdhash_dest, uint64_t* sdhash_len);
}
#endif

#endif