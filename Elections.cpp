#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b,c,mx,suma=0,sumb=0,sumc=0;
        cin>>a>>b>>c;
        mx = max(max(a,b),c);
        if(a==mx && b==mx || a==mx && c==mx || b==mx && c==mx)
        {
            if(a<=mx){suma = (mx+1)-a;}
            if(b<=mx){sumb = (mx+1)-b;}
            if(c<=mx){sumc = (mx+1)-c;}
            cout<<suma<<" "<<sumb<<" "<<sumc<<endl;
        }else
        {
            if(a<mx){suma = (mx+1)-a;}
            if(b<mx){sumb = (mx+1)-b;}
            if(c<mx){sumc = (mx+1)-c;}
            cout<<suma<<" "<<sumb<<" "<<sumc<<endl;
        }
    }
}
