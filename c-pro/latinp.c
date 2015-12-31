#include <stdio.h>
//拉丁猪
int main()
{
    char one[20];
    int i = 0;
    
    scanf("%s", one);
    printf("%s-%c%cy", one, one[0], one[1]);  
    printf("\n");  
    
    return 0;
}