#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<limits.h>
void print2largest(int arr[], int arr_size) 
{ 
    int i, first, second; 
  
    /* There should be atleast two elements 
    if (arr_size < 2) 
    { 
        printf("-1"); 
        return; 
    } */
  
    first = second = INT_MIN; 
    for (i = 0; i < arr_size ; i ++) 
    { 
        /* If current element is smaller than first 
           then update both first and second */
        if (arr[i] > first) 
        { 
            second = first; 
            first = arr[i]; 
        } 
  
        /* If arr[i] is in between first and  
           second then update second  */
        else if (arr[i] > second && arr[i] != first) 
            second = arr[i]; 
    } 
    if (second == INT_MIN) 
        printf("-1"); 
    else
        printf("%d",second); 
} 
  
/* Driver program to test above function */
int main() 
{ 
    int arr[20],n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    print2largest(arr, n); 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}