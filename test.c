#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/hashStorage.h"
#include "include/hash.h"
#include "include/stack.h"
int main(int argc, char const *argv[])
{
    hashtptr hashtable = CreateHashTable();
    int i;
    char ch[3] = "ha";
    for(i = 0; i < 26; i++){
        ch[1] = 'a' + i;
        Uint32 hash = Hash(ch, 2, TIME33);
        AddHash(hashtable, hash, i);
    }
    printf("ERROR\n");
    for(i = 0; i < 26; i++){
        ch[1] = 'a' + i;
        stackptr stack = SearchHash(hashtable, Hash(ch, 2, TIME33));
        printf("%d : %d\n", i,Pop(stack));
        FreeStack(stack); 
    }
    for(i = 0; i < 15; i++){
        ch[1] = 'a' + i;
        Uint32 hash = Hash(ch, 2, TIME33);
        DelHash(hashtable, hash, i);
    }
    printf("%d | %d\n", hashtable->size, hashtable->blocknum);
    FreeHashTable(hashtable);
    return 0;
}
