#include <stdio.h>
#include "Ponto2D.h"

int main() {
    
    Ponto2D p1, p2;
    
    p1.x = 4;
    p1.y = 4;
    
    p2.x = 7;
    p2.y = 8;
    
    printf("(%5.2f, %5.2f)\n", p1.x, p1.y);
    printf("(%5.2f, %5.2f)\n", p2.x, p2.y);
    printf("dist(P1, P2) = %5.2f\n", distancia(p1, p2));
    printf("dist(P2, P1) = %5.2f\n\n", distancia(p2, p1));
    
    p1.x += 10;
    p2.x += 10;
    
    printf("(%5.2f, %5.2f)\n", p1.x, p1.y);
    printf("(%5.2f, %5.2f)\n", p2.x, p2.y);
    printf("dist(P1, P2) = %5.2f\n", distancia(p1, p2));
    printf("dist(P2, P1) = %5.2f\n\n", distancia(p2, p1));
    
    p1.y += 5;
    p2.y += 5;
    
    printf("(%5.2f, %5.2f)\n", p1.x, p1.y);
    printf("(%5.2f, %5.2f)\n", p2.x, p2.y);
    printf("dist(P1, P2) = %5.2f\n", distancia(p1, p2));
    printf("dist(P2, P1) = %5.2f\n\n", distancia(p2, p1));
    
    return 0;
}
