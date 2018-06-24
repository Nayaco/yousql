#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/block.h"
#include "include/chain.h"

int main(int argc, char const *argv[])
{
    chainptr chain = CreateChain();
    printf("ERROR\n");
    
    char str[3] = "ha";
    int i;
    for(i = 0; i < 26; i++){
        printf("ERROR\n");
        str[0] = 'a' + i;
        blockptr block = CreateBlock((Gptr)str, strlen(str));
        AddChain(chain, block);
    }
    printf("ERROR\n");
    char *str2 = "haha";
    for(i = 0; i < 26; i++){
        char *str3;
        blockptr block = GetChain(chain, i);
        str3 = GetPtr(block);
        printf("%s\n", str3);
    }
    printf("ERROR\n");
    return 0;
}
