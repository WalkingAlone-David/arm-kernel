#ifndef __ASM_H__
#define __ASM_H__

#include <stdint.h>

// Unsigned integer modulo
uint32_t _umod(uint32_t, uint32_t);

// Count trailing zeros
// Returns the # of continuous zeroes from the least significant bit
uint32_t _ctz(uint32_t);

// Count leading zeros
// Returns the # of continuous zeros from the most significant bit
uint32_t _clz(uint32_t);

// Reverse bits
// Reverses the bit order on the 32-bit integer
uint32_t _rbit(uint32_t);

#endif // __ASM_H__

