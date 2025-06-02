#include "prng_e_8.h"

uint8_t prng_e_8(struct prng_e_8_s *s) {
  uint8_t block = s->blocks[s->b & 1023] + s->a;

  s->a = ((s->a << 3) | (s->a >> 5)) ^ s->b;
  s->b += 111;
  s->blocks[s->b & 1023] += (block << 6) | (block >> 2);
  return block;
}
