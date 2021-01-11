/*
Задача 26: Merge sort
Պահանջվում է գրել ծրագիր, որը մուտքում ստանալով N բնական թիվ, 
ապա N ամբողջ տարրերից կազմված հաջորդականություն, 
կսորտավորի հաջորդականության տարրերը նվազման կարգով և կարտածի այն։ 
Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով։ 
Խնդիրը լուծելիս օգտագործել զանգված և merge sort ալգորիթմը։ (դաս 12)
*/

#include<iostream> 
using namespace std; 
  
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    // Create temp arrays  
    int L[n1], R[n2]; 
  
    // Copy data to temp arrays L[] and R[]  
    for(int i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for(int j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    // Merge the temp arrays back into arr[l..r] 
      
    // Առաջին կեսի ինդեքսը 
    int i = 0;  
      
    // Երկրորդ կեսի ինդեքսը
    int j = 0;  
      
    // Երկու միացված մասերի կազմած զանգվածի ինդեքսը 
    int k = l; 
      
    while (i < n1 && j < n2) 
    { 
        if (L[i] >= R[j])  
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else 
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    // Ձախ կողմի էլէմենտներն ենք ավելացնում, եթե կան
    while (i < n1)  
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    // Աջ կողմի էլէմենտներն ենք ավելացնում, եթե կան
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
// l is for left index and r is  
// right index of the sub-array 
// of arr to be sorted */ 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
          
        // Same as (l+r)/2, but avoids  
        // overflow for large l and h 
        int m = l + (r - l) / 2; 
  
        // Սորտավորում ենք աջ և ձախ մասերը
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
   
void printArray(int A[], int size) 
{ 
    for(int i = 0; i < size; i++) 
        cout << A[i] << " "; 
} 
  
///////////////////////////////////////
int main() 
{  int N;
    cin >> N;
    int * dinArr = new int[N];
    for(int i = 0; i < N; i++)
    {
      cin >> dinArr[i];
    }

    
    mergeSort(dinArr, 0, N - 1); 
    printArray(dinArr, N); 
    delete [] dinArr;
}