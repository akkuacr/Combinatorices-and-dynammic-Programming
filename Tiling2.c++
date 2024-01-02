 //problem is: given a '2*n ' board and tiles of the shape '2*1',count the numbers of way of tile the given boar using 
//thes tiles tiles can be placed horizontally and vertically and you can place '2*2' tile

//approach : dekh isme tu column ko pkd k chal thik h agr hum vertically rkhenge toh 'n-1' space bchan and agr horizontally toh dono ek sath rkhni pdengi
//coz after placing 2*1 'n-1' columns are left
//after placing 1*2 'n-2' columns are left
//same for '2*2'  'n-2' coulumns are left
//idea:f(n)=f(n-1)+2*f(n-2);
//f(0)=0;
//f(1)=1;
//f(2)=3



#include<bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back
#define que_max priority_queue<int>
#define que_min priority_queue<int,vector<int>,greater<int>>;
 #define endl "\n"
 using namespace std;

  

  int dp(int n)
  {
    if(n==0 || n==1 )
    {return n;
    }

    if(n==2)
    {
      return 3;
    }
    if(n<0)
    {
      return 0;
    }

      return (dp(n-1)+2*dp(n-2));


  }


 
 int32_t main()
 {
 #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
 #endif
 

int n;
cin>>n;

  cout<<dp(n)<<endl;


     return 0;
 }
