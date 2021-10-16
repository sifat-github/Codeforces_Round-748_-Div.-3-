#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string n;
    cin>>n;
    int k=0;
    for(int i=0; i<n.size(); i++)
    {
        for(int j=i+1; j<n.size(); j++)
       {
            if(((n[i]-'0')*10+(n[j]-'0'))%25==0)
            {
                k = n.size()-i-2;
            }
        }
    }
    cout<<k<<endl;
    }
}
