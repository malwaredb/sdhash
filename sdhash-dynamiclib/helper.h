#ifndef __SDHASH_HELPER_DYLIB_H__
#define __SDHASH_HELPER_DYLIB_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

char* sdhash_from_buffer_simple(char* fname, char* buffer, uint64_t buffLen);

#ifdef __cplusplus
}
#endif

#endif