#include "include/inno.h"

chainptr CreateChain(){
    chainptr newchain = calloc(1, sizeof(struct chain));
    newchain->ChainSize = 0;
}
