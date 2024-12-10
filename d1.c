#include <stdio.h>
int main(void){
    printf ("хочу число");
    int i;
    scanf("%d", &i);
    (i >= 0) ? printf ("pasitive") : printf ("negative");
    return 0;
}