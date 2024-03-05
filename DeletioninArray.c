#include<stdio.h>

int main(){
    int arr[50], pos, i, n;

    printf("Enter the number of elements in an array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the position from where you want to delete an element: ");
    scanf("%d", &pos);

    if(pos >= n + 1)
        printf("Deletion is not possible\n");
    else {
        for(i = pos - 1; i < n - 1; i++)
            arr[i] = arr[i + 1];

        printf("Resultant array\n");
        for(i = 0; i < n - 1; i++)
            printf("%d\n", arr[i]);
    }
    return 0;
}
