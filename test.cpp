#include <iostream>

static uint32_t _SEED_RANDOM = 1;

static int Random() {
  _SEED_RANDOM = 214013 * _SEED_RANDOM + 2531011;
  return static_cast<unsigned int>(_SEED_RANDOM / 65536) % 32768;
}

int main() {
  for (int i = 0; i < 50; ++i) {
    std::cout << Random() % 20 << ' ';
  }
}