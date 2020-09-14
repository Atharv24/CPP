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

void Merge(int arr[], int start, int middle, int end)
{
   int p = start;
   int q = middle+1;
   int k=0;
   int temp[end - start + 1];

   while (p<=middle && q<=end)
   {
      if (arr[p]<=arr[q])
      {
         temp[k++] = arr[p++];
      }
      else
      {
         temp[k++] = arr[q++];
      }
   }

   while (p<=middle)
   {
      temp[k++] = arr[p++];
   }
   
   while (q<=end)
   {
      temp[k++] = arr[q++];
   }
   
   for (p = start; p <= end; p++)
   {
      arr[p] = temp[p - start]; 
   }
}

void MergeSort(int arr[], int start, int end)
{
   if (start < end)
   {
      int middle = (start + end)/2;
      MergeSort(arr, start, middle);
      MergeSort(arr, middle+1, end);
      Merge(arr, start, middle, end);
   }
}

int main()
{
   int a[12] = {2,5,6,2,4,6,3,4,6,7,1,0};
   MergeSort(a, 0, 11);
   PrintArray(a, 12);
} 