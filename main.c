#include <stdio.h>
#include <math.h>

struct point {
float x;
float y;
char name;
};
// Declare typedef for point structure
typedef struct point Point;

void Put(Point a){
    printf("point %c (%.1f, %.1f)\n", a.name, a.x, a.y);
}

float R(Point a, Point b){
    return sqrt(pow(b.x-a.x, 2)+pow(b.y-a.y, 2));
}

Point M(Point a, Point b){
    Point m;
    m.name = 'M'; m.x = (a.x+b.x)/2; m.y = (a.y+b.y)/2;
    return m;
}

Point T(Point a, Point b){
    Point O;
    O.name = 'O'; O.x=0; O.y=0;
    if (R(O,a)>R(O,b)){
        return a;
    }else{
        return b;
    }
}


int main() {
    Point b, a, c;
    c = (Point) { -2.f, -3.f, 'C'};
    a.name = 'A'; a.x = 2; a.y = 1;
    b.name = 'B'; b.x = -1.5; b.y = 1.5;
    //R(a,b);
    //printf("M(%f,%f)\n",M(a,b).x,M(a,b).y);
    printf("Точка %c ближе к 0\n",T(a,b).name);
}
