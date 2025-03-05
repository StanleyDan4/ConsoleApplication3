#include "zag.h"
#include <cmath> // для функции fabs

// Реализация функции сравнения
bool srav(float x, float y, float t) {
    return (fabs(x - y) < t);
}