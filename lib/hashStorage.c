#include "include/hashStorage.h"

hashcptr CreateHashChain(Uint32 hash)
{
    hashcptr hashchain = calloc(1, sizeof(struct HashChain));
    hashchain->_size = 0;
    hashchain->data = calloc(1, 1);
    hashchain->hash = hash;
}

void FreeHashChain(hashcptr hashchain)
{
    free(hashchain->data);
    free(hashchain);
}

void AddHashdata(hashcptr hashchain, Int32 data)
{
    Int32 i = 0;
    for(i = 0; i < hashchain->_size; i++)
        if(data == (hashchain->data)[i])return;
    hashchain->_size++;
    hashchain->data = realloc(hashchain->data, hashchain->_size * sizeof(Int32));
    (hashchain->data)[hashchain->_size - 1] = data;
    return;
}

boolean DelHashdata(hashcptr hashchain, Int32 data)
{
    Int32 i = 0, j = 0;
    for(i = 0; i < hashchain->_size; i++)
        if(data == (hashchain->data)[i]){
            for(j = i; j < hashchain->_size - 1; j++)(hashchain->data)[j] = (hashchain->data)[j + 1];
            break;
        }
    if(i == hashchain->_size)return 1;
    hashchain->_size--;
    hashchain->data = realloc(hashchain->data, hashchain->_size * sizeof(Int32));
    return 0;
}

stackptr CopyEle(hashcptr hashchain)
{
    stackptr stack = CreateStack();
    Int32 i = 0;
    for(; i < hashchain->_size; i++)Push(stack, (hashchain->data)[i]);
    return stack;
}
//---------------------------------------------------------------------------------
hashtptr CreateHashTable()
{
    hashtptr hashtable = calloc(1, sizeof(struct HashTable));
    hashtable->head_hashchain = nullptr;
    hashtable->tail_hashchain = nullptr;
    hashtable->index = nullptr;
    hashtable->size = 0;
    hashtable->blocknum = 0;
    hashtable->mid = nullptr;
    return hashtable;
}

void FreeHashTable(hashtptr hashtable)
{
    hashcptr temp1, temp2;
    for(temp1 = hashtable->head_hashchain; temp1->isEnd != true;){
        temp2 = temp1;
        temp1 = temp1->next;
        FreeHashChain(temp2);
    }
    free(hashtable);
}

stackptr SearchHash(hashtptr hashtable, Uint32 hash)
{
    Int32 i = 0;
    for(i = 0; i < hashtable->blocknum; i++){
        if(hash == (hashtable->index)[i]->hash){
           return CopyEle((hashtable->index)[i]);
        }else if(hash > (hashtable->index)[i]->hash && hash < (hashtable->index)[i+1]->hash){
            hashcptr temp = (hashtable->index)[i];
            for(;temp->hash != (hashtable->index)[i+1]->hash; temp = temp->next){
                if(hash == temp->hash)return CopyEle(temp);
            }
            break;
        }
    }
    return nullptr;
}

void AddHash(hashtptr hashtable, Int32 hash, Int32 data)
{
    hashtptr 
}

boolean DelHash(hashtptr hashtable, Int32 hash, Int32 data)
{

}
