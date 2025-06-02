#ifndef PRNG_E_8_H
#define PRNG_E_8_H

#include <stdint.h>

struct prng_e_8_s {
  uint8_t blocks[1024];
  uint8_t a;
  uint8_t b;
};

uint8_t prng_e_8(struct prng_e_8_s *s);

#endif
