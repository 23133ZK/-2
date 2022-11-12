#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p=0, q=0, c, a1,a2,a3, k=0, j, i, n1 = 0, n2 = 0, n3 = 0;

    scanf_s("%d ", &n1);
    c = n1;
    for (; n1 != 0; n1--)
    {

        if (n1 != 0)
        {
            scanf_s("%d", &j);
            k += j;
        }
        else break;
    }
    a1 = k / c;
    
    scanf_s("%d ", &n2);
    c = n2;
    for (; n2 != 0; n2--)
    {
       
        if (n2 != 0)
        {
            scanf_s("%d", &j);
            q += j;
        }
        else break;
    }
    a2 = q / c;
    
    scanf_s("%d ", &n3);
    c = n3;
    for (; n3 != 0; n3--)
    {
        if (n3 != 0)
        {
            scanf_s("%d", &j);
            p += j;
        }
        else break;
    }
    a3 = p / c;

    printf("Class 1: %d\n", a1);
    printf("Class 2: %d\n", a2);
    printf("Class 3: %d\n", a3);

    return 0;
}