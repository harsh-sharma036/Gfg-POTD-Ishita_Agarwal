int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        unordered_map<char,int> mp;
        int count = 0;
        for(auto i : tasks)
        {
            mp[i]++;
            count = max(count,mp[i]);
        }
        int ans = (count-1)*(K+1);
        for(auto i : mp)
        {
            if(i.second == count)
                ans++;
        }
        return max(ans,(int)tasks.size());
    }
