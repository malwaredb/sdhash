#ifndef __SDHASH_DYLIB_H__
#define __SDHASH_DYLIB_H__

#include <string>
using namespace std;

string sdhash_file(string file_path);
string sdhash_buffer(string file_name, char* buffer, uint64_t length);
int sdhash_compare_hashes(string hash1, string hash2);
int sdhash_compare_files(string fpath1, string fpath2);
int sdhash_compare_buffers(char* buff1, uint64_t length1, char* buff2, uint64_t length2);

#endif