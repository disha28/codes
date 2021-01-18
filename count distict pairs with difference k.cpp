int TotalPairs(vector<int>nums, int k){
	    // Code here
	    sort(nums.begin(),nums.end());
	    int cnt=0;
	    int n=nums.size();
	    unordered_set<int>s;
	 for(int i=0;i<n;i++)
	 {
	   if(s.find(nums[i]-k)!=s.end())
	 {  cnt++;
	   s.erase(nums[i]-k);
	 }
	 if(i==0||nums[i]!=nums[i-1])
	 s.insert(nums[i]);

	}
	return cnt;