#include<bits/stdc++.h>
typedef long long ll;
#define pb push_back
using namespace std;
int main()
{
    freopen("adc.txt","w",stdout);
    ll a1,b1,c1,a2,b2,c2,a3,b3,c3, minn=INT_MAX,c,k,i,j,n;
    string s[6],st;
    ll v[6];
    while(cin>>a1>>b1>>c1>>a2>>b2>>c2>>a3>>b3>>c3)
    {
        minn=INT_MAX;
        v[0]=b1+c1+a2+a3+b2+c3;
        s[0]="BCG";
        v[1]=b1+c1+a2+a3+c2+b3;
        s[1]="BGC";//bgc
        v[2]=a1+b1+c2+c3+b2+a3;
        s[2]="CBG";//cgb
        v[3]=a1+b1+c2+c3+a2+b3;
        s[3]="CGB";//cbg
        v[4]=a1+b2+c1+c2+a3+b3;
        s[4]="GBC"; //gbc
        v[5]=a1+c3+b2+b3+a2+c1;
        s[5]="GBC"; //gcb
        for(i=0; i<6; i++)
        {
            //cout<<v[i]<<" ";
            if(minn>v[i])
            {
                minn=v[i];
                st=s[i];
            }
        }
        cout<<st<<" "<<minn<<endl;

    }

}
