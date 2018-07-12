#ifndef HASH_H
#define HASH_H

#include <math.h>
#include "include/types.h"

#define TIME31      0x00 // time31 hash
#define TIME33      0x01 // time33 hash
#define TIME17      0x02 // time17 hash
#define TIME65      0x03 // tiem63 hash


/*
* use alternative hash method
* @params (Src:string, len:Int32, method:Int32)
* @return Hash:Uint32
*/
Uint32 Hash(const string Src, const Int32 len, Int32 method);

/*
* time17 hash, it should be use if you want (not recommanded)
* @params (Src:string, len:Int32)
* @return Hash:Uint32
*/
Uint32 TIME17H(const string Src, const Int32 len);

/*
* time31 hash, it should be use if you want (not recommanded)
* @params (Src:string, len:Int32)
* @return Hash:Uint32
*/
Uint32 TIME31H(const string Src, const Int32 len);

/*
* time33 hash, it should be use at lower case string (recommanded)
* @params (Src:string, len:Int32)
* @return Hash:Uint32
*/
Uint32 DJBX33A(const string Src, const Int32 len);

/*
* time65 hash, it should be use at the mix string
* @params (Src:string, len:Int32)
* @return Hash:Uint32
*/
Uint32 TIME65H(const string Src, const Int32 len);
#endif