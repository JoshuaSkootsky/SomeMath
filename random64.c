// Joshua Skootsky, 2015
// returns: a random double based on 64-bit integer-based random number generator
#include <stdint.h>

// Choices must conform with Hull-Dobell Theorem
// Specifically:
// rand_new = (mult * rand_old + add) mod m
// 1.  "add" cannot be zero
// 2.  "add" and "mult" must be relatively prime
// 3.  "add" - 1 must be divisible by all prime factors of "mult"
// 4.  "add"  must be a multiple of 4, if "mult" is a multiple of 4

static uint64_t rand64 = 2395040858963409; // seed for my RNG routine
static uint64_t add  = 1442695040888963407; // Knuth MMIX
static uint64_t mult =  6364136223846793005; // Knuth MMIX
static uint64_t MAXINT_U64 = 18446744073709551615U; // U tells the compiler not to worry

double random64() {
    // implictly  m = 64 bits by using uint64_t
    rand64 = mult * rand64 + add;
    return (double) rand64/ MAXINT_U64;
    // result should be between 0 and 1
}
