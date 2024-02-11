 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;

  //time complexity:-O(n*n*n)

  int countUnordered(int min,int n)
  {
     if(n==0)return 1;
    int ans=0;
    for(int i=min;i<=n;i++)
    { 
       ans+=countUnordered(i,n-i);

    }


    return ans;
  }
  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
 
 int n;
 cin>>n;
 // for(int i=1;i<=20;i++){
 cout<<countUnordered(1,n)<<endl;
// }




   //O(n*n) solution
   //bottom approach

   int dp[n+1];
   memset(dp,0,sizeof(dp));
   dp[0]=1;
   for(int i=1;i<=n;i++)
   {
      for(int j=i;j<=n;j++)
      {
        dp[j]+=dp[j-i];
      }
   }

   cout<<dp[n]<<endl;


      return 0;
  }
