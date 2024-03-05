#include<stdio.h>
int main(){


    //pos means position or index at which we wanted to insert an element
    //Note that any position that we enter the element is inserted before that index
    //i for iterattion
    //n number of elements 
    //value = inseted elemenst value


    int arr[50], pos, i, n, value;
    printf("Enter the number of elements in an arry\n");
    scanf("%d",&n);

    printf("Element %d element\n",n);

    for(i=0; i<n; i++)
    scanf("%d",&arr[i]);

    printf("Enter the location whwre you wanted to insert the element\n");
    scanf("%d",&pos);

    printf("Enter the value that you want to inserted\n");
    scanf("%d",&value);
    for(i=n-1; i >= pos-1; i--)

    arr[i+1]=arr[i];
    arr[pos-1]=value;

    printf("Resultanted array is\n");
    for(i=0; i<n+1; i++)
    printf("%d\n",arr[i]);

    return 0;

}