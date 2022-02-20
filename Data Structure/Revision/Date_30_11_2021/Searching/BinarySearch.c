#include <stdio.h>
#include <conio.h>

void Binary_search(int arr[], int key, int n)
{
    int start = 0;
    int end = n - 1;
    int middle = (start + end) / 2;
    int flag = 0;

    while (start <= end)
    {
        if (key == arr[middle])
        {
            flag = 1;
            break;
        }
        else if (key > arr[middle])
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
        middle = (start + end) / 2;
    }

    if (flag == 1)
    {
        printf("Key Found At position := %d", middle + 1);
    }
    else{
        printf("Key Not Found.......");
    }
}

int main()
{
    int arr[5], key;

    printf("Enter 5 Element in Array := ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Enter Key To be Search := ");
    scanf("%d", &key);

    Binary_search(arr, key, 5);
}