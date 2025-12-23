#include <stdio.h>
void quicksort(int a[], int low, int high);
int partition(int a[], int low, int high);
//in exam you have to write this
int a[5] = {5, 34, 29, 18, 39};
int main()
{
    int i, n;
    printf("original array :\n");
    for (i = 0; i < 5; i++)
        printf("%d\n", a[i]);
    quicksort(a, 0, 4);
    printf("The second array is :\n");
    for (i = 0; i < 5; i++)
        printf("%d\n", a[i]);
}
void quicksort(int a[], int low, int high)
{
    int j;
    if (low < high)
    {
        j = partition(a, low, high);
        quicksort(a, low, j - 1);
        quicksort(a, j - 1, high);
    }
}
int partition(int a[], int low, int high)
{
    int i, j, temp, key;
    key = a[low];
    i = low + 1;
    j = high;
    while (1)
    {
        while (i <= high && a[i] <= key)
            i++;
        while (a[j] > key && j > low)
            j--;
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else
        {
            temp = a[low];
            a[low] = a[j];
            a[j] = temp;
            return j;
        }
    }
}