#include <stdio.h>
// UN COMENTARIO DESDE GIT HUB XDXD
int main()
{
    int ancho;
    int alto;
    float porcentaje_x;
    float porcentaje_y;
    float porcentaje_ancho;
    float porcentaje_alto;
    int coordenada_x1;
    int coordenada_y1;
    int coordenada_x2;
    int coordenada_y2;

    scanf_s("%i", &ancho);
    scanf_s("%i", &alto);
    scanf_s("%f", &porcentaje_x);
    scanf_s("%f", &porcentaje_y);
    scanf_s("%f", &porcentaje_ancho);
    scanf_s("%f", &porcentaje_alto);

    coordenada_x1 = ancho * porcentaje_x;
    coordenada_y1 = alto * porcentaje_y;
    coordenada_x2 = coordenada_x1 + ancho * porcentaje_ancho;
    coordenada_y2 = coordenada_y1 + alto * porcentaje_alto;

    printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, alto, porcentaje_x, porcentaje_y, porcentaje_ancho, porcentaje_alto, coordenada_x1, coordenada_y1, coordenada_x2, coordenada_y2
    );
    return 0;
} 

    
