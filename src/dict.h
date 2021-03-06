#ifndef __DICT_H__
#define __DICT_H__
#include "keyval.h"

extern void *dictionary_not_found;

typedef struct _dictionary {
    keyval **pairs;
    int length;
} dictionary;

dictionary *dictionary_new(void);
dictionary *dictionary_copy(dictionary *in);
void dictionary_free(dictionary *in);
void dictionary_add(dictionary *in, char *key, void *value);
void *dictionary_find(dictionary const *in, char const *key);

#endif
