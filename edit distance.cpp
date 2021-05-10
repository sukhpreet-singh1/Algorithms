int Edit(string s,string t,int n,int m)
  {
      if(n==0)
        return m;
      if(m==0)
        return n;
      if(DP[n][m]!=-1)
        return DP[n][m];
      if(s[n-1]==t[m-1])
        return DP[n][m]=Edit(s,t,n-1,m-1);
     else
        return DP[n][m]=(1+min(min(Edit(s,t,n,m-1),Edit(s,t,n-1,m)),Edit(s,t,n-1,m-1)));
  }
