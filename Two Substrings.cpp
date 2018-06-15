#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int i,a=0,b=0,c=0,d=0,len=0;
    len=s.length();
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            ++a;
            if(s[i+2]=='A')
            {

                    --a;
                    --b;
                ++c;
            }
        }
        if(s[i]=='B' && s[i+1]=='A')
        {
            ++b;
            if(s[i+2]=='B')
            {
                    --a;
                    --b;

                ++d;
            }
        }

    }
  /// cout<<a<<" "<<b<<" "<<c<<" "<<d;
    if(s=="ABAB" || s=="BABA")
        cout<<"NO";
    else if(a<=0 && b<=0 && c==1 && d==1)
        cout<<"NO";
    else if(c>0 && d>0)
       cout<<"YES";
    else if(a>0 && b>0)
        cout<<"YES";
    else if(a>0 && c>0)
        cout<<"YES";
      else if(a>0 && d>0)
        cout<<"YES";
          else if(b>0 && c>0)
        cout<<"YES";
          else if(b>0 && d>0)
        cout<<"YES";
        else
            cout<<"NO";

}
