#ifndef HASHSTR_H
#define HASHSTR_H

#include "include/hash.h"
#include "include/stack.h"
#include <math.h>

struct HashChain{
    boolean              isEnd;
    struct HashChain    *prev;
    struct HashChain    *next;
    Uint32               hash;
    Int32               *data;
    Int32               _size;
};
typedef struct HashChain *hashcptr;

/*
* create a hashchain
* @param hash:Int32
* @return hashcptr
*/
hashcptr CreateHashChain(Uint32 hash);

/*
* free a hash chain
* @params hashchain:hashcptr
* @return void
*/
void FreeHashChain(hashcptr hashchain);

/*
* add data to a hashchian
* @params (hashchain:hashcptr, data:Int32)
* @return void
*/
void AddHashdata(hashcptr hashchain, Int32 data);

/*
* delete data
* @params (hashchain:hashcptr, data:Int32)
* @return void
*/
boolean DelHashdata(hashcptr hashchain, Int32 data);

/*
* copy element
* @params hashchain:hashcptr
* @return stack:stackptr
*/
stackptr CopyEle(hashcptr hashchain);

struct HashTable{
    hashcptr    head_hashchain;
    hashcptr    tail_hashchain;
    hashcptr    *index;
    Int32       blocknum;
    Int32       size;
    hashcptr    mid;
};
typedef struct HashTable *hashtptr;

/*
* 
* @params chain:chainptr
* @return hashtable:hashtptr
*/
hashtptr CreateHashTable();

/*
* 
* @params hashtable:hashtptr
* @return void
*/
void FreeHashTable(hashtptr hashtable);

/*
* search elements
* @params (hashtable:hashtptr, hash:Int32, _cmp:boolean callback(blockptr, blockptr), element:blockptr)
* @return stack:stackptr
*/
stackptr SearchHash(hashtptr hashtable, Uint32 hash);

/*
* add element
* @params (hashtable:hashtptr, hash:Int32, data:Int32)
* @return void
*/
void AddHash(hashtptr hashtable, Uint32 hash, Int32 data);

/*
* delete element
* @params (hashtable:hashtptr, hash:Int32, data:Int32)
* @return succ(0)/fail(>=1):boolean
*/
boolean DelHash(hashtptr hashtable, Uint32 hash, Int32 data);

#endif