#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[500],s1[150]="Hello, World!";
    scanf("%[^\n]% *c",s);
    printf("%s\n%s",s1,s);
    
    
    return 0;
}
