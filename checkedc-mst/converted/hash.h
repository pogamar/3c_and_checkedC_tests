/* For copyright information, see olden_v1.0/COPYRIGHT */

#include "stdio.h"

typedef struct hash_entry {
  unsigned int key;
  void *entry;
  struct hash_entry *next;
} *HashEntry;

typedef struct hash {
  HashEntry *array;
  _Ptr<int (unsigned int)> mapfunc;
  int size;
} *Hash;

Hash MakeHash(int size, _Ptr<int (unsigned int)> map);
void *HashLookup(unsigned int key, Hash hash);
void HashInsert(void *entry,unsigned int key, Hash hash);
void HashDelete(unsigned int key, Hash hash);
