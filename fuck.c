#include <stdio.h>
int main()
{
    int n,i,k,t=0;
    scanf_s("%d", &n);
    int arr[10]={0};
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    for(int j=0;j<n-1;j++)
        for (k = 0; k < (n - 1 - j); k++)
        {
            if (arr[k] > arr[k + 1])
            {
                t = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = t;
            }
        }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
