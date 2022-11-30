#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,sum=0,t;
    scanf("%d", &n);
    
while(n>0)   // or  for(i=0;i<5;i++)
{
    t=n;
    sum+=(t%10);
    n/=10;
}   

printf("%d",sum);
    return 0;
}
