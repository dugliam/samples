#include "stdlib.h"
#include "thing.h"

struct thing {
  int field1;
  float field2;
  char field3[64];
};

struct thing *thing_init() {
  struct thing *t = (struct thing *)malloc(sizeof(struct thing));
}

void thing_fini(struct thing *t) {
  free(t);
  return;
}