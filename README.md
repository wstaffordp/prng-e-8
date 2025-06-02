# PRNG E 8

It's a fast, statistically-strong PRNG with 8-bit integers and a minimum period of 2¹²⁸ to 2⁸¹⁹².

`prng_e_8()` is the randomization function that generates a 8-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It's in the same class as 8-bit SIMD-enhanced Mersenne Twister.

It has an adjustable minimum period of 2¹²⁸ to 2⁸¹⁹² without broken cycles.

The period is adjustable to doubled or halved amounts by adjusting the 1024 8-bit state `blocks`, meaning the possible state sizes are 1024, 512, 256, 128, 64, 32 and a minimum of 16.

Whenever the count of `blocks` is adjusted, the default `& 1023` masks must be adjusted accordingly.

The minimum period increases linearly based on the count of `blocks` as the following table demonstrates.

```
Blocks   Minimum     & Mask
Count    2ⁿ Period

16       128         15
32       256         31
64       512         63
128      1024        127
256      2048        255
512      4096        511
1024     8192        1023
```

1024 isn't a hard maximum and varying state sizes may result in varying statistical quality.

Incrementing `b` outside of `prng_e_8()` behaves as an interdimensional jump function that starts a different cycle.

Zeroland escapes quickly after generating 3 subsequent numbers.

It's the fastest 8-bit PRNG that generates numbers individually, has a period of at least 2¹²⁸ and passes statistical tests in `stdin8` PractRand with KBs to MBs of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
