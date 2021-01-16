     // code here
          if(r>n)
        return 0;
        if(r>n-r)
        r=n-r;
      
        int ans=1;
        for(int i=0;i<r;i++)
        {
            ans=ans*(n-i);
            ans=ans/(i+1);
           
        }
        return ans;