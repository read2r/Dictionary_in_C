#include <stdlib.h>
#include <string.h>
#include "keyval.h"

keyval *keyval_new(char *key, void *value) {
    keyval *out = malloc(sizeof(keyval));
    *out = (keyval) { .key=key, .value=value };
    return out;
}

keyval *keyval_copy(keyval const *in) {
    keyval *out = malloc(sizeof(keyval));
    *out = *in;
    return out;
}

void keyval_free(keyval *in) {
    free(in);
}

int keyval_matches(keyval const *in, char const *key) {
    return !strcmp(in->key, key);
}
