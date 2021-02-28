#include <string>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include "../sdbf/sdbf_class.h"
#include "../sdbf/sdbf_defines.h"
#include "../sdbf/sdbf_set.h"
#include "../sdbf/blooms.pb.h"
#include "../sdbf/bloom_vector.h"
#include "../sdbf/bloom_filter.h"
#include "sdhash.h"
using namespace std;

#define KB 1024

string sdhash_file(string file_path) {
    ifstream is(file_path, ios::binary | ios::ate);
    uint64_t fsize = is.tellg();
    is.seekg(0);
    index_info *info=(index_info*)malloc(sizeof(index_info));
    info->index=NULL;
    info->indexlist=NULL;
    info->setlist=NULL;
    info->search_deep=false;
    info->search_first=false;
    info->basename=false;
    class sdbf sdbfm(file_path.c_str(), &is, 0, fsize, info);
    free(info);
    return sdbfm.to_string();
}

string sdhash_buffer(string file_name, char* buffer, uint64_t length) {
    index_info *info=(index_info*)malloc(sizeof(index_info));
    info->index=NULL;
    info->indexlist=NULL;
    info->setlist=NULL;
    info->search_deep=false;
    info->search_first=false;
    info->basename=false;
    class sdbf sdbfm(file_name.c_str(), buffer, 0, length, info);
    free(info);
    return sdbfm.to_string();
}