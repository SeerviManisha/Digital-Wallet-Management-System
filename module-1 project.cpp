#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool Balance(const pair<int,int>& b1,const pair<int,int>&b2) //comparing based on balances;
{
    return b1.second<b2.second;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,k;
    int n;
    cin>>n;
    int a[n],money[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>money[i];
    }
    int m;
    cin>>m;
    int c[m],d[m],transfer[m];
      for(i=0;i<m;i++)
      {
          cin>>c[i]>>d[i]>>transfer[i];
      }
    // int balance=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
    if(c[i]==a[j])
    {
        if(money[j]>=transfer[i])
        {
            cout<<"Success"<<endl;
            money[j]-=transfer[i];
            for(k=0;k<n;k++) 
            {
              if (a[k]==d[i]) 
               { 
                  money[k]+=transfer[i];
               }
            }
        }
        else
        {
            cout<<"Failure"<<endl;
        }
    }
    }
    }
    cout<<endl;
    vector<pair<int,int>> v;
    for(i=0;i<n;i++)
    {
        v.push_back({a[i],money[i]});
    }
    sort(v.begin(),v.end(),Balance);
    for(auto const&b:v)
    {
        cout<<b.first<<" "<<b.second<<endl;
    }
    return 0;
}