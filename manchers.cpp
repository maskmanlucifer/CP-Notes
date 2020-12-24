                    >> Manchers Algo.
                    
        >>> Resources: 
        
            Tutorial no.1: https://cp-algorithms.com/string/manacher.html#:~:text=We%20describe%20the%20algorithm%20to,minor%20modification%20for%20this%20one.
        
        >>> Implementation:
        
            vector<ll> dp,dp1;
            void mancher(string s)
            {
                ll n=s.length();
                dp.resize(n);
                dp1.resize(n);
                ll l=0,r=-1;
                for(ll i=0;i<n;i++)
                {
                    ll k=(i>r) ? 1 : min(dp[l+r-i],r-i+1);
                    while(i-k>=0 and i+k<n and s[i+k]==s[i-k])
                    {
                        k++;
                    }
                    dp[i]=k--;
                    if(i+k>r)
                    {
                        l=i-k;
                        r=i+k;
                    }
                }
                
                l=0,r=-1;
                for(ll i=0;i<n;i++)
                {
                    ll k=(i>r) ? 0 : min(dp1[l+r-i],r-i);
                    while(i-k-1>=0 and i+k<n and s[i+k]==s[i-k-1])
                    {
                        k++;
                    }
                    dp1[i]=k--;
                    if(i+k>r)
                    {
                        l=i-k;
                        r=i+k;
                    }
                }
            }
            
            
        >>> Problems:
        
            Problem-1: https://www.spoj.com/problems/LPS/
            Solution : https://gist.github.com/maskmanlucifer/54a97cfbfbc25589d1ac8ecd05da164d
           
            Problem-2 : https://www.spoj.com/problems/NUMOFPAL/
            Solution: https://gist.github.com/maskmanlucifer/c12f54f4eb8de97ba11bb0e2d8ba64c6
           
            Problem-3: https://www.spoj.com/problems/MSUBSTR/
            Solution: https://gist.github.com/maskmanlucifer/593618ecd12c5f259209c2f0d6dbc200
           
            Problem-4: https://www.spoj.com/problems/EPALIN/
            Solution: https://gist.github.com/maskmanlucifer/1efac5d07825fda626c2c4fdb2ce4c16
