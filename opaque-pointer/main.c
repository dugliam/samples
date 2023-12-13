#include "stdio.h"
#include "thing.h"

int main() {
  thing_t *thing = thing_init();

  printf("%d\n", thing->field1);

  thing_fini(thing);
  return 0;
}