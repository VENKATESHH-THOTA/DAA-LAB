#include<iostream>
using namespace std;
#define max 100

void Selection_sort(int arr[],int n)
{
    int i,j = 0,min = 0,sh = 0 , co = 0,temp;
     for(i = 0 ; i < n - 1 ; i++)
    {
        min = i;
        for(j = i+1;j < n; j++)
        {

            if(arr[j] < arr[min])
            {
               min = j;

            }
            co++;
        }
        sh++;
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

   cout<<endl;
   cout<<"ELEMETS AFTER SORTING ARE:"<<endl;

   for(i = 0; i < n ; i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"COMPARISIONS:"<<co<<endl;
   cout<<"SWAPS:"<<sh<<endl;
   cout<<"\n";

}


int main()
{
   int arr[max];
   int n,tc;
   cout<<"ENTER THE TEST CASES"<<endl;
   cin>>tc;

for(int i = 0 ; i < tc ; i++)
{


   cout<<"ENTER THE SIZE OF N: "<<endl;
   cin>>n;

cout<<"ENTER THE ELEMENTS INTO ARRAY:"<<endl;

   for(int i = 0 ; i < n ; i++)
   {
     cin>>arr[i];
   }

   Selection_sort(arr,n);
}
 return 0;
}
