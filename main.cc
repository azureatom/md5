#include <cstdio>
#include <cstring>
#include "md5.hh"

int main(int argc, char*argv[]) {
    if(argc != 2) {
        puts("Usage: md5 <string>");
        return 1;
    }
    printf("md5sum : %s\n", md5sum( argv[1], strlen(argv[1])).c_str());
    printf("md5sum6: %s\n", md5sum6(argv[1], strlen(argv[1])).c_str());
    return 0;
}
