/*Write a function to compute the distance between two points and use it to develop another
function that will compute the area of the triangle whose vertices are A(x1, y1), B(x2, y2),
and C(x3, y3). Use these functions to develop a function which returns a value 1 if the point
(x, y) lines inside the triangle ABC, otherwise a value 0.*/
#include <stdio.h>
#include <math.h>
float dist (float a1, float b1, float a2, float b2)
{
   float d1;
   d1 = sqrt (pow(a1-a2, 2)+ pow(b1-b2,2));
 return d1;
}

float area (float a1, float b1, float a2, float b2, float a3, float b3)
{
  float d1,d2,d3;
  d1= dist (a1, b1, a2, b2);
  d2= dist (a2, b2, a3, b3);
  d3= dist (a1, b1, a3, b3);
  float side= (d1+d2+d3)/2;
  float area= sqrt (side * (side-d1)* (side-d2)*(side-d3));
  return area;
}


int point (float a1, float b1, float a2, float b2, float a3, float b3, float a, float b)
{
    float t= area (a1, b1, a2,b2,a3,b3);
    float st1= area (a,b,a1,b1,a2,b2);
    float st2= area (a,b,a2,b2,a3,b3);
    float st3= area (a,b,a1,b1,a3,b3);
    if (t== (st1+st2+st3))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main ()
{float a1, b1,a2,b2,a3,b3,a,b;
    printf ("Enter the vertices");
    scanf("%f %f %f %f %f %f", &a1, &b1, &a2, &b2, &a3, &b3);
    printf ("ENter those two points");
    scanf ("%f %f", &a, &b);
int result = point(a1, b1, a2, b2, a3, b3,a, b);
if (result ==1)
{
    printf ("The point exists inside the triangle");

}
else 
{
    printf ("The point does not exists inside the triangle");
}
return 0;
}