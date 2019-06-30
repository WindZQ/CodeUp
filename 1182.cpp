#include <cstdio>
int main()
{
    double f, p, w, s;
    scanf("%lf  %lf  %lf", &p, &w, &s);
    if(s < 250)
        f = p * w * s;
    else if(s >= 250 && s < 500)
        f = p * w * s * 0.98;
    else if(s >= 500 && s < 1000)
        f = p * w * s * 0.95;
    else if(s >= 1000 && s < 2000)
        f = p * w * s * 0.92;
    else if(s >= 2000 && s < 3000)
        f = p * w * s * 0.90;
    else if(s >= 3000)
        f = p * w * s * 0.85;
    printf("%.4f\n", f);
    return 0;
}
