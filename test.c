#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/fs.h"


int main(int argc, char const *argv[])
{
    IOPoolptr Pool = CreateIOPool();
    if(Pool == NULL)exit(1);
    const string filename = "io.txt";
    Int32 ID = AddFile(Pool, filename, WFILE);
    printf("ERROR");
    char *str = "hello";
    printf("%d\n", ID);
    WriteFile(Pool, (Gptr)str, ID, strlen(str), 0, 0);
    printf("ERROR");
    CloseFile(Pool, ID);
    printf("ERROR");
    FreeIOPool(Pool);
    printf("OKAY");
    return 0;
}
