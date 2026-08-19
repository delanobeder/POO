#include <math.h>
#include "Ponto2D.h"

double distancia(Ponto2D p1, Ponto2D p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt (dx * dx + dy * dy);
}

