#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "point.h"

 struct point {
    float x;
    float y;
        
};

Point* create_p(float x, float y) {
    Point *p = (Point *) malloc(sizeof(Point));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
};

void access_p(Point *p) {
    printf("X:%.2f, Y:%.2f\n",p->x,p->y);
};

void change_p(Point *p, float x, float y) {
    p->x = x;
    p->y = y;
}

void free_p(Point *p) {
    free(p);
    p = NULL;   
};

float dist_btw_2_p(Point *p1, Point *p2){
    float x_squared = pow((p1->x+p2->x),2.0);
    float y_squared = pow((p1->y+p2->y),2.0);
    float d = sqrt(x_squared+y_squared);
    return d;
};
