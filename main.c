#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};

    int sorted = 1;

    for(int i = 0; i < 4; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            sorted = 0;
        }
    }

    if(sorted == 1)
    {
        printf("Sorted\n");
    }
    else
    {
        printf("Not Sorted\n");
    }

    return 0;
}
