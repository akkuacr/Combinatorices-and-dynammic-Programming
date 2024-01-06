// int this variation we can use '1*2' ,'2*1',and l shaped
//baki notes m explained h states

 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
 
 
  int n;
   
  cin>>n;
  int f[n+1] ,g[n+1];

  f[0]=g[0]=0;
  f[1]=g[1]=1;
  f[2]=g[2]=2;

  for(int i=3;i<=n;i++)
  {
    f[i]=f[i-1]+f[i-2]+2*g[i-2];
    g[i]=g[i-1]+f[i-1];
  }

  cout<<f[n]<<endl;




      return 0;
  }
