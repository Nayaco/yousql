#include "include/hash.h"

Uint32 TIME17H(const string Src, const Int32 len)
{
    Uint32 hash = 5381;
    string str = Src;
    Int32 _len = len;
    for(; _len >= 8; _len -= 8){
        hash = ((hash << 4) + hash) + (*str++);
        hash = ((hash << 4) + hash) + (*str++);
        hash = ((hash << 4) + hash) + (*str++);
        hash = ((hash << 4) + hash) + (*str++);
        hash = ((hash << 4) + hash) + (*str++);
        hash = ((hash << 4) + hash) + (*str++);
        hash = ((hash << 4) + hash) + (*str++);
        hash = ((hash << 4) + hash) + (*str++);
    }
    switch(_len){
        case 7: hash = ((hash << 4) + hash) + (*str++); /*fall*/
        case 6: hash = ((hash << 4) + hash) + (*str++); /*fall*/
        case 5: hash = ((hash << 4) + hash) + (*str++); /*fall*/
        case 4: hash = ((hash << 4) + hash) + (*str++); /*fall*/
        case 3: hash = ((hash << 4) + hash) + (*str++); /*fall*/
        case 2: hash = ((hash << 4) + hash) + (*str++); /*fall*/
        case 1: hash = ((hash << 4) + hash) + (*str++);break;
        case 0: break;
    }
    return hash;
}

Uint32 TIME31H(const string Src, const Int32 len)
{
    Uint32 hash = 5381;
    string str = Src;
    Int32 _len = len;
    for(; _len >= 8; _len -= 8){
        hash = ((hash << 5) - hash) + (*str++);
        hash = ((hash << 5) - hash) + (*str++);
        hash = ((hash << 5) - hash) + (*str++);
        hash = ((hash << 5) - hash) + (*str++);
        hash = ((hash << 5) - hash) + (*str++);
        hash = ((hash << 5) - hash) + (*str++);
        hash = ((hash << 5) - hash) + (*str++);
        hash = ((hash << 5) - hash) + (*str++);
    }
    switch(_len){
        case 7: hash = ((hash << 5) - hash) + (*str++); /*fall*/
        case 6: hash = ((hash << 5) - hash) + (*str++); /*fall*/
        case 5: hash = ((hash << 5) - hash) + (*str++); /*fall*/
        case 4: hash = ((hash << 5) - hash) + (*str++); /*fall*/
        case 3: hash = ((hash << 5) - hash) + (*str++); /*fall*/
        case 2: hash = ((hash << 5) - hash) + (*str++); /*fall*/
        case 1: hash = ((hash << 5) - hash) + (*str++);break;
        case 0: break;
    }
    return hash;
}

Uint32 DJBX33A(const string Src, const Int32 len)
{
    Uint32 hash = 5381;
    string str = Src;
    Int32 _len = len;
    for(; _len >= 8; _len -= 8){
        hash = ((hash << 5) + hash) + (*str++);
        hash = ((hash << 5) + hash) + (*str++);
        hash = ((hash << 5) + hash) + (*str++);
        hash = ((hash << 5) + hash) + (*str++);
        hash = ((hash << 5) + hash) + (*str++);
        hash = ((hash << 5) + hash) + (*str++);
        hash = ((hash << 5) + hash) + (*str++);
        hash = ((hash << 5) + hash) + (*str++);
    }
    switch(_len){
        case 7: hash = ((hash << 5) + hash) + (*str++); /*fall*/
        case 6: hash = ((hash << 5) + hash) + (*str++); /*fall*/
        case 5: hash = ((hash << 5) + hash) + (*str++); /*fall*/
        case 4: hash = ((hash << 5) + hash) + (*str++); /*fall*/
        case 3: hash = ((hash << 5) + hash) + (*str++); /*fall*/
        case 2: hash = ((hash << 5) + hash) + (*str++); /*fall*/
        case 1: hash = ((hash << 5) + hash) + (*str++);break;
        case 0: break;
    }
    return hash;
}

Uint32 TIME65H(const string Src, const Int32 len)
{
    Uint32 hash = 5381;
    string str = Src;
    Int32 _len = len;
    for(; _len >= 8; _len -= 8){
        hash = ((hash << 6) + hash) + (*str++);
        hash = ((hash << 6) + hash) + (*str++);
        hash = ((hash << 6) + hash) + (*str++);
        hash = ((hash << 6) + hash) + (*str++);
        hash = ((hash << 6) + hash) + (*str++);
        hash = ((hash << 6) + hash) + (*str++);
        hash = ((hash << 6) + hash) + (*str++);
        hash = ((hash << 6) + hash) + (*str++);
    }
    switch(_len){
        case 7: hash = ((hash << 6) + hash) + (*str++); /*fall*/
        case 6: hash = ((hash << 6) + hash) + (*str++); /*fall*/
        case 5: hash = ((hash << 6) + hash) + (*str++); /*fall*/
        case 4: hash = ((hash << 6) + hash) + (*str++); /*fall*/
        case 3: hash = ((hash << 6) + hash) + (*str++); /*fall*/
        case 2: hash = ((hash << 6) + hash) + (*str++); /*fall*/
        case 1: hash = ((hash << 6) + hash) + (*str++);break;
        case 0: break;
    }
    return hash;
}

// The router
Uint32 Hash(const string Src, const Int32 len, Int32 method)
{
    Uint32 hash = 0;
    switch(method){
        case TIME31:{
            hash = TIME31H(Src, len);
            break;
        } 
        case TIME33:{
            hash = DJBX33A(Src, len);
            break;
        }
        case TIME17:{
            hash = TIME17H(Src, len);
            break;
        }
        case TIME65:{
            hash =  TIME65H(Src, len);
            break;
        }
    }
    return hash;
}

