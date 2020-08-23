#include <iostream>
using namespace std;


int main()
{
    int n,m;
    int i,j,y;
    cin>>n >>m;
    int *arr=new int[n+m]();
    for(int i=0;i<n+m;i++)
         cin>>arr[i];

    for( i=0;i<m+n;i++)
    {  
         int max=arr[0];
        if(arr[i]==-1)
        {
            for( j=0;j<i;j++)
            {
                if(max<arr[j])
                {   
                    max=arr[j];
                    y=j;   
                } 
            }
            arr[y]=0;
             cout<<max<<endl;
        }

    }
    
}