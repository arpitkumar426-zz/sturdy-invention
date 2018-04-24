#include<iostream>

using namespace std;

int trouble_sort(long int a[],int n)
{
	bool done=false;
	long int k;
	int i;
	while(!done){
		done=true;
		for(i=0;i<n-2;i++){
			if(a[i]>a[i+2]){
				done=false;
				k=a[i];
				a[i]=a[i+2];
				a[i+2]=k;
				
			}
		}
	}

	i=0;

		
	while(a[i]<=a[i+1]&&i<n-1)i++;
	
	if(i==n-1)return -1;
	else return i;
}

int main()
{
	int t,n,ch,i=0,j;
	long int *a;
    cin>>t;
    while(t--)
    {   i++;
    	cin>>n;
    	a=new long int[n];
        for(j=0;j<n;j++)cin>>a[j];
    	ch=trouble_sort(a,n);
    	if(ch==-1)cout<<"Case #"<<i<<": OK\n";
    	else cout<<"Case #"<<i<<": "<<ch<<"\n";

    }


	return 0;
}
