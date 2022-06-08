#include<iostream>
using namespace std;
#define max 100

void insertion_sort(int arr[],int n)
{
    int i,j = 0,temp = 0,sh = 0 , co = 0;
    for (i = 1 ; i < n ; i++)
    {
        j = i - 1 ;
        temp = arr[i];
        while(j >= 0 && arr[j] > temp)
        {   co++;
            arr[j + 1] = arr[j];
            j--;
            sh++;
        }
        arr[j + 1] = temp;
        sh++;
    }

   cout<<endl;
   cout<<"ELEMETS AFTER SORTING ARE:"<<endl;

   for(i = 0; i < n ; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"COMPARISIONS:"<<co<<endl;
   cout<<"SHIFT:"<<sh<<endl;
   cout<<"\n";

}


int main()
{
   int arr[max];
   int n,tc;
   cout<<"ENTER THE TEST CASES: "<<endl;
   cin>>tc;
   for(int i = 0 ; i < tc; i++)
   {


   cout<<"ENTER THE SIZE OF N: "<<endl;
   cin>>n;

cout<<"ENTER THE ELEMENTS INTO ARRAY:"<<endl;

   for(int i = 0 ; i < n ; i++)
   {
     cin>>arr[i];
   }

   insertion_sort(arr,n);
   }
 return 0;
}
