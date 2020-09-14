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

void Merge(int arr[], int i, int m, int j)
{
   int p = i;
   int q = m+1;
   int k=0;
   int temp[j - i + 1];

   while (p<=m && q<=j)
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

   while (p<=m)
   {
      temp[k++] = arr[p++];
   }
   
   while (q<=j)
   {
      temp[k++] = arr[q++];
   }
   
   for (p = i; p <= j; p++)
   {
      arr[p] = temp[p - i]; 
   }
}

void MergeSort(int arr[], int i, int j)
{
   if (i < j)
   {
      int m = (i + j)/2;
      MergeSort(arr, i, m);
      MergeSort(arr, m+1, j);
      Merge(arr, i, m, j);
   }
}

int main()
{
   int a[12] = {2,5,6,2,4,6,3,4,6,7,1,0};
   MergeSort(a, 0, 11);
   PrintArray(a, 12);
} 