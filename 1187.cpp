#include <cstdio>
int main()
{
    int money;
    double y;
    scanf("%d", &money);
    if(money <= 100000)
        y = money * 0.10;
    else if(money > 100000 && money <= 200000)
        y = (money - 100000) * 0.075 + 100000 * 0.10;
    else if(money > 200000 && money <= 400000)
        y = (money - 200000) * 0.05 + 100000 * 0.10 + 100000 * 0.075;
    else if(money > 400000 && money <= 600000)
        y = (money - 400000) * 0.03 + 200000 * 0.05 + 100000 * 0.10 + 100000 * 0.075;
    else if(money > 600000 && money <= 1000000)
        y = (money - 600000) * 0.015 + 20000 * 0.03 + 200000 * 0.05 + 100000 * 0.10 + 100000 * 0.075;
    else
        y = (money - 1000000) * 0.01 + 200000 * 0.015 + 20000 * 0.03 + 200000 * 0.05 + 100000 * 0.10 + 100000 * 0.075;
    printf("%.2f", y);
    return 0;
}
