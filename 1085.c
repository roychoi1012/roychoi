#include <stdio.h>

int main()
{
    int x, y, w, h;
    while (1)
    {
        scanf("%d %d %d %d", &x, &y, &w, &h);
        if (w >= 1 && w <= 1000 && h >= 1 && h <= 1000)
        {
            if (x >= 1 && x <= w - 1 && y >= 1 && y <= h - 1)
            {
                int x1, x2, y1, y2;
                x1 = x;
                x2 = w - x;
                y1 = y;
                y2 = h - y;

                int min = x1;

                if (x2 < min)
                {
                    min = x2;
                }

                if (y1 < min)
                {
                    min = y1;
                }

                if (y2 < min)
                {
                    min = y2;
                }

                printf("%d\n", min);
                return 0;
            }
            else
            {
                printf("Invalid input for x and y.\n");
            }
        }
        else
        {
            printf("Invalid input for w and h.\n");
        }
    }

    return 0;
}
