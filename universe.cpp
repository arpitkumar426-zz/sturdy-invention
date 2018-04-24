#include<iostream>

#include<string>
using namespace std;
int cal_d(string);
int main()
{
    
    string str ;
    int D,T,result,flag,out;
    cin>>T;
    for(int j=1;j<T+1;j++)
    {
	out=0;
	flag=0;
        cin>>D;
	cin>>str;
        result=cal_d(str);
        if (result>D)
	{
		for(int m=str.length()-1;m>=0;m--)
			{
				if(str[m]=='S')
				{
					if(str[m-1]=='C')
				{
										
					str[m-1]='S';
					str[m]='C';
					out+=1;
					m=str.length();
					if(cal_d(str)<=D)
					{
						cout<<"Case #"<<j<<": "<<out<<"\n";
						flag=1;
						break;
					}
				}
				}
			}
			if(flag!=1)
			{
				cout<<"Case #"<<j<<": IMPOSSIBLE\n";
			}	
	}
	else
	{cout<<"Case #"<<j<<": 0\n";}
    }

    return 0;
}
int cal_d(string x)
{
int tot_d=0;
int temp=1;	
int i=0;
for(i=0;i<x.length();i++)
{	
	if(x[i]=='S')tot_d+=temp;
	else
	    if(x[i]=='C')
		temp=temp*2;
	else
	cout<<".......";
}

return tot_d;
}

