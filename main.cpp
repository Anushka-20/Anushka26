#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin>>t;
    while(t--)
    { int total_t1=0,total_t2=0;
        for(int i=0;i<3;i++)
      {  int x;
         cin>>x;
          total_t1+=x;
      }
     for(int i=0;i<3;i++)
      { int x;
          cin>>x;
          total_t2+=x;
      }
    if(total_t1 > total_t2)
    {cout<<1<<"\n";}
    else
    {cout<<2<<"\n";}
    }
    return 0;
}
