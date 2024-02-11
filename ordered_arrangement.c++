 #include<bits/stdc++.h>
 
 #define int long long int
 #define F first
 #define S second
 #define pb push_back
 #define que_max priority_queue<int>
 #define que_min priority_queue<int,vector<int>,greater<int>>;
  #define endl "\n"
  using namespace std;
  int memo[100010];

  //time complexity:- O(n*n)
  //

int countWaysOrdered(int n){

    if(n==0){
      return 1;
    }

     if(memo[n]!=-1)
     {
      return memo[n];
     }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
       ans+=countWaysOrdered(n-i); 
    }
    return memo[n]=ans;
 }


  
  int32_t main()
  {
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  
  memset(memo,-1,sizeof(memo));
   int n;
   cin>>n;
   //top down approach
   cout<<countWaysOrdered(n)<<endl;

   //to improve time complexity we can do this by maintaining a variable call sum
   

   //bottom up approach
  int dp[n+1];
   int sum=0;
   for(int i=1;i<=n;i++)
   {
     dp[i]=sum+1;
     sum+=dp[i];

   }


   cout<<dp[n]<<endl;


   //third approach

   //ans is 2^(n-1)

   cout<<((1<<(n-1)))<<endl;


 
 
      return 0;
  }
