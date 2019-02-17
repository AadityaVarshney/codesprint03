#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,k,m,j;
    scanf("%d",&m);
    int arr[m];
    for(i=0;i<m;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<m;i++)
    {
        k=arr[i];
        for(j=2;j<=100;j++)
        {
        if(k<pow(2,j))
        {
        printf("%d\n",(int)pow(2,j-1));
        break;
        }
        }
    }
    return 0;
}

