#ifndef __KEYVAL_H__
#define __KEYVAL_H__

typedef struct _keyval {
    char *key;
    void *value;
} keyval;

keyval *keyval_new(char *key, void *value);
keyval *keyval_copy(keyval const *in);
void keyval_free(keyval *in);
int keyval_matches(keyval const *in, char const *key);

#endif
