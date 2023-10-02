#include <math.h>
#include "Ponto2D.h"

float distancia(Ponto2D p1, Ponto2D p2) {
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    return sqrt (dx * dx + dy * dy);
}

