#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<libsdhash/helper.h>

int main(int argc, char* argv[]) {
	FILE *f;
	f = fopen(argv[0], "rb");
	fseek(f, 0L, SEEK_END);
	long sz = ftell(f);
	rewind(f);

	unsigned char* buffer = (unsigned char*) malloc(sizeof(unsigned char) * sz);
	fread(buffer, sizeof(unsigned char), sz, f);

	char* sdhashBuff = sdhash_from_buffer(argv[0], buffer, sz);
	printf("Buffer:\n%s\n", sdhashBuff);
    free(buffer);
    buffer = NULL;
    fclose(f);

    sdhashBuff = sdhash_from_path(argv[0]);
    printf("Path:\n%s\n", sdhashBuff);

	return 0;
}
