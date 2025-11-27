#include <stdio.h>

int main(){
    int var=26;
switch(var)
{
    case 20:
    printf("not eligible");
    break;
    case 40:
    printf("eligible for vote");
    break;
    default:
    printf("default case is excuted");
    break;
}
return 0;
}
