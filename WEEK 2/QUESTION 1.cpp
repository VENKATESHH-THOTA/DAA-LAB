#include <iostream>
using namespace std;
#define MAX 100
int main()
{
int key,testc,n,c,i = 0,j;
int arr[MAX];

cout<<"enter the no.of test cases:"<<endl;
cin>>testc;

while(i < testc)
{
    cout<<"enter the size of array: ";
    cin>>n;
    c = 0;
    for(j = 0 ; j < n ; j++)
    {
         cin>>arr[j];
    }

    cout<<"enter the key to found"<<endl;
    cin>>key;

    for(int k = 0 ; k < n ; k++)
    {
        if(arr[k] == key)
        {
            c++;
        }
    }
    cout << key <<"=" << c<<endl;

   i++;
}
}
