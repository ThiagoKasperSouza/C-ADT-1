typedef struct point Point;

Point* create_p(float x, float y);
void access_p(Point *p);
void change_p(Point *p, float x, float y);
void free_p(Point *p);
float dist_btw_2_p(Point *p1, Point *p2);
