#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/fs.h"

int main(int argc, char const *argv[])
{
    IOPoolptr Pool = CreateIOPool();
    AddFile(Pool, "text.bin", WBIN);
    Int32 ID = AddFile(Pool, "text2.bin", WBIN);
    printf("%d", ID);
    FreeIOPool(Pool);
    return 0;
}
