#include<iostream>
using namespace std;

void Binary_Search(int arr[],int lwr_lim,int upr_lim,int k,int *ctr)
{
    if(lwr_lim <= upr_lim)
    {
        int m=(lwr_lim+upr_lim)/2;
        if(arr[m] == k)
            (*ctr)++;
        Binary_Search(arr,m+1,upr_lim,k,ctr);
        Binary_Search(arr,lwr_lim,m-1,k,ctr);
    }
    else
    return;

}

int main()
{
    int tc;
    cout<<"ENTER THE TEST CASES:"<<endl;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        int n,key,ctr=0;
        cout<<"ENTER THE SIZE OF ARRAY:"<<endl;
        cin>>n;
        int a[n];
        cout<<"ENTER THE ELEMENTS INTO ARRAY:"<<endl;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cout<<"ENTER THE KEY TO FOUND:"<<endl;
        cin>>key;

        Binary_Search(a,0,n,key,&ctr);
        cout<<"Ctr = "<<ctr<<endl;
        cout<<"\n";    
    }
    
    return 0;
}
