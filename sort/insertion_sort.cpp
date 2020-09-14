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

void InsertionSort(int arr[], int length)
{
   int i, j, key;
   for(i=1; i<length; i++)
   {
      key = arr[i];
      j = i-1;
      while(j>=0 && arr[j]>key)
      {
         arr[j+1] = arr[j];
         j--;
      }
      arr[j+1] = key;
   }
   printArray(arr, length);
}

int main()
{
   int a[12] = {2,5,6,2,4,6,3,4,6,7,1,0};
   InsertionSort(a, 12);
} 