#include <iostream>

using namespace std;

void PrintArray(int array[], int size)
{ 
    int j;
    for (j = 0; j < size; j++)
    {
        cout <<" "<< array[j];  
    }
    cout << endl;
}

void Swap(int* a, int* b)
{
   int t = *a;
   *a = *b;
   *b = t;
}

int PivotIndex(int arr[], int start, int end)
{
   int pivot = arr[end];
   int i = 0;
   for (int j=0; j<=end-1; j++)
   {
      if(arr[j]<=pivot)
      {
         Swap(&arr[i++], &arr[j]);
      }
   }
   Swap(&arr[i], &arr[end]);
   return i;
}

void QuickSort(int arr[], int start, int end)
{
   if(start<end)
   {
      int pivot = PivotIndex(arr, start, end);
      QuickSort(arr, start, pivot - 1);
      QuickSort(arr, pivot + 1, end);
   }
}

int main()
{
   int a[12] = {2,5,6,2,4,6,3,4,6,7,1,0};
   QuickSort(a, 0, 11);
   PrintArray(a, 12);
} 