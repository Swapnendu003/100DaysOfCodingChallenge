#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int pointInTriangle(double x, double y, double x1, double y1, double x2, double y2, double x3, double y3)
{
    double areaABC = triangleArea(x1, y1, x2, y2, x3, y3);
    double areaPBC = triangleArea(x, y, x2, y2, x3, y3);
    double areaPCA = triangleArea(x1, y1, x, y, x3, y3);
    double areaPAB = triangleArea(x1, y1, x2, y2, x, y);
    double totalArea = areaPBC + areaPCA + areaPAB;
    return (fabs(totalArea - areaABC) < 0.000001);
}

int main()
{
    double x1 = 0, y1 = 0, x2 = 3, y2 = 0, x3 = 0, y3 = 4;
    double x = 1, y = 1;
    int inside = pointInTriangle(x, y, x1, y1, x2, y2, x3, y3);
    printf("(%lf, %lf) is%s inside the triangle (%lf, %lf), (%lf, %lf), (%lf, %lf)\n", x, y, inside ? "" : " not", x1, y1, x2, y2, x3, y3);
    return 0;
}
