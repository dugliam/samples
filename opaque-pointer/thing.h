#ifndef THING_H
#define THING_H

typedef struct thing thing_t;

thing_t *thing_init();
void thing_fini(thing_t *);

#endif // THING_H