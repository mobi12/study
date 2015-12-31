#include <stdio.h>
//逆转字符
int main()
{
    int i = 0;
    char name[20];
    
    scanf("%s", name);
   
    int count = 0;
    for (i = 0; i < 20; i++)
    {
        if (name[i] != '\0')
            count++;
    }

    for (i = count - 2; i >= 0; i--)
        printf("%c", name[i]);
    printf("\n");
    
    return 0;    
}