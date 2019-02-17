#include <iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t-->0){
    int n,sum=0,flag=0,i,j,k;
    cin >> n;
    int arr[n],den[3]={0,0,0};
    for(i =0;i<n;i++)
        cin >>arr[i];
    for(j=0;j<n;j++)
    {
        if(arr[j]==50)
        {
            den[0]++;
            flag =1;
        }
        else if(arr[j] == 100)
        {
            if(den[0]>0)
            {
                den[1]++;
                den[0]--;
                flag =1;
            }
            else 
            {
                flag =0;
                break;
            }
        }
        else if(arr[j]==200)
        {
            den[2]++;
            if(den[1]>0 && den[0]>0)
            {
                den[1]--;
                den[0]--;
                flag = 1;
            }
            else if(den[1]==0 && den[0]>2)
            {
                den[0]-=3;
                flag = 1;
            }
            else
            {
              flag =0;
              break;
            }
            
        }
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
	return 0;
}
