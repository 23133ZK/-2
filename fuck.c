#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=0, c=0;
    char ch = 0;
    
    for (;ch!='#';)
    {
        scanf_s("%c", &ch);
        if (ch >= 'A' && ch <= 'Z')
            a++;
        else if (ch >= 'a' && ch <= 'z')
            b++;
        else if (ch >= '0' && ch <= '9')
            c++;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}