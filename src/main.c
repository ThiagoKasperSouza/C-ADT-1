#include <stdio.h>
#include <stdlib.h>
#include "point.h"

int main() {
    Point *p1 = create_p(5.0,6.0);
    Point *p2 = create_p(-5.0,3.0);

    access_p(p1);
    access_p(p2);

    printf("D BTW 2 PNTS: %.2f\n",dist_btw_2_p(p1,p2));

    free_p(p1);
    free_p(p2);
    system("pause");
    return 0;
}
