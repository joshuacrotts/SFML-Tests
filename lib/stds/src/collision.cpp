#include "../include/collision.hpp"


bool
check_intersection(float x1, float y1, int32_t w1, int32_t h1, float x2, float y2, int32_t w2, int32_t h2) {
  return (MAX(x1, x2) < MIN(x1 + w1, x2 + w2)) && (MAX(y1, y2) < MIN(y1 + h1, y2 + h2));
}
