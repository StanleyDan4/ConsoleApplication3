#include "zag.h"
#include <cmath> // ��� ������� fabs

// ���������� ������� ���������
bool srav(float x, float y, float t) {
    return (fabs(x - y) < t);
}