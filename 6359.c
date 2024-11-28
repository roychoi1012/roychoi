#include <stdio.h>

int quotient(int n)
{
    int quo_num[n][n];

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            if (j % i == 0)
            {
                quo_num[i-1][j-1] = 1;
            }
            else 
            {
                quo_num[i-1][j-1] = 0;
            }
        }
    }
    return quo_num;
}

void sumdata(int *arr)
{
    //다차원 배열을 받아서 같은 열끼리의 합이 짝수이면 카운트(0도 짝수로 포함), 홀수이면 카운트 x
    //카운트 값 출력해주기!
}



int main()
{
    int T, n;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) 
    {
        while (1)
        {
            scanf("%d", n);
            if (5 <= n && n <= 100)
            {
                break;
            }
            else
            {
                printf("Out of range!");
            }
        }
        int quo_num = quotient(n);
        sumdata(quo_num);
    }
    
}
