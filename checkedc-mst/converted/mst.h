/* For copyright information, see olden_v1.0/COPYRIGHT */

#include <stdlib.h>
#include "hash.h"
#define MAXPROC 1

#define chatting printf
extern int NumNodes;

typedef struct vert_st {
  int mindist;
  struct vert_st *next;
  Hash edgehash;
} *Vertex;

typedef struct graph_st {
  Vertex vlist _Checked[MAXPROC];
} *Graph;

Graph MakeGraph(int numvert, int numproc);
int dealwithargs(int argc, _Array_ptr<char *> argv : count(argc));

int atoi(const char *);
