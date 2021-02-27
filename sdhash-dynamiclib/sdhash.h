#ifndef __SDHASH_DYLIB_H__
#define __SDHASH_DYLIB_H__

#include <string>
using namespace std;

string sdhash_file(string file_path);
string sdhash_buffer(string file_name, char* buffer, uint64_t length);

#endif