#include<iostream>
#define max 100
using namespace std;

void CountPair(int arr[],int n,int key);
int main()
{
    int tc,n,key;
    int arr[max];
    cout<<"ENTER THE TESTCASES:"<<endl;
    cin>>tc;

    for(int i = 0 ; i < tc ; i++)
    {
        cout<<"ENTER THE SIZE OF ARRAY:"<<endl;
        cin>>n;

        cout<<"ENTER THE ELEMENTS INTO ARRAY:"<<endl;
        for(int i = 0 ; i < n ; i++)
        {
            cin>>arr[i];

        }
        cout<<"ENTER THE KEY:"<<endl;
        cin>>key;
        CountPair(arr,n,key);

    }


}
void CountPair(int arr[],int n,int key)
{
      int c = 0,temp = 0;

        for(int i = 0 ; i < n - 1 ; i++)
        {
            for(int j = 0 ; j < n - i - 1; j++)
            {
                if(arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j+1] = temp;
                }
            }

        }

        for(int i = 0 ; i < n; i++)
        {
            for(int j = i + 1 ; j < n; j++)
            {
                if(arr[j] - arr[i] == key)
                {
                    c++;
                }
            }

        }
        cout<<"COUNT IS:"<<c<<endl;


}
