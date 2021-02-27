#include <bits/stdc++.h>
#include "bits_counter.h"
uint64_t countSetBits(uint64_t n) {
    uint64_t count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}