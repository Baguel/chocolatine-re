/*
** EPITECH PROJECT, 2022
** 101pong
** File description:
** show velocity,coordinates and of ball 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char  **argv)
{
    if (argc < 8) {
        return 84;
    }
    if (argc > 8) {
        return 84;
    }
    if (argc >= 'A' && argc <= 'Z') {
        return 84;
    }
    if (argc >= 'a' && argc <= 'z') {
        return 84;
    }
    if (atof(argv[7]) < 0) {
        return 84;
    }
    double x0;
    x0 = atof(argv[1]);
    double y0;
    y0 = atof(argv[2]);
    double z0;
    z0 = atof(argv[3]);
    double x1;
    x1 = atof(argv[4]);
    double y1;
    y1 = atof(argv[5]);
    double z1;
    z1 = atof(argv[6]);
    int n = atof(argv[7]);
    double tab[3];
    double x = (x1 - x0);
    double y = (y1 - y0);
    double z = (z1 - z0);
    tab[0] = x;
    tab[1] = y;
    tab[2] = z;
    printf("The velocity vector of the ball is:");
    printf("\n");
    printf("(%.2f, %.2f, %.2f)\n", tab[0], tab[1], tab[2]);
    double table[3];
    double x2 = (x * n) + x1;
    double y2 = (y * n) + y1;
    double z2 = (z * n) + z1;
    table[0] = x2;
    table[1] = y2;
    table[2] = z2;
    printf("At time t + %d, ball coordinates will be:\n", n);
    printf("(%.2f, %.2f, %.2f)", table[0], table[1], table[2]);
    printf("\n");
    double v = sqrt((x * x) + (y * y) + (z * z));
    double angle_rad = fabs(asin(z / v));
    double angle_deg = (180 * angle_rad) / 3.1415;
    if (z1 >= 0 && z < 0) {
        printf("The incidence angle is:\n "); 
        printf("%.2f %s\n", angle_deg, "degrees");
    } else {
        printf("The ball won't reach the paddle.\n");
    }
    if (angle_rad < 0 && angle_rad > 90) {
        return 84;
    }
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        printf("USAGE");
        printf("./101pong x0 y0 z0 x1 y1 z1 n");
        printf("DESCRIPTION");
        printf("x0 ball abscissa at time t - 1");
        printf("y0 ball ordinate at time t - 1");
        printf("z0 ball altitude at time t - 1");
        printf("x1 ball abscissa at time t");
        printf("y1 ball ordinate at time t");
        printf("z1 ball altitude at time t");
        printf("n time shift(greater than or equal to zero, integer)");
    }
}
