#include <iostream>
using namespace std;
#define MAX 100
int main()
{
int flag = 0,testc,n,c,i = 0,j;
int arr[MAX];

cout<<"enter the no.of test cases:"<<endl;
cin>>testc;

while(i < testc)
{
    cout<<"enter the size of array: ";
    cin>>n;
    flag = 0;
    for(j = 0 ; j < n ; j++)
    {
         cin>>arr[j];
    }

    for(int a = 0 ; a < n ; a++)
    {

       for(int b = a + 1; b < n ; b++)
        {
            flag = 0;
          for(int k = b + 1 ; k < n ; k++)
          {
              //flag = 0;
                       if(arr[a] + arr[b] == arr[k])
                       {
                          cout <<" "<<a+1<<" "<<b+1<<" "<<k+1<<endl;
                       }
                       else
                       {
                           flag  = 1;
                            break;

                       }
          }


         }


}

 i++;
}

 if(flag == 1)
    {
            cout<<"SEQUENCE NOT FOUND"<<endl;

    }


}

