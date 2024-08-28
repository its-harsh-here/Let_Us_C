#include <math.h>

#define PERI(x,y,z) (x+y+z)
#define S(x,y,z) ((x+y+z)/2.0)
#define AREA(x,y,z) (sqrt(S(x,y,z) * (S(x,y,z) - x) * (S(x,y,z) - y) * (S(x,y,z) - z)))

#define SQUARE(a) (a*a)

#define PI 3.14
#define CIRCLE(r) (PI * r * r)