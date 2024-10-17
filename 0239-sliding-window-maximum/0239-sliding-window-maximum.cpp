class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;
        //first window ko process kro
        for(int i =0 ;i<k ;i++){
            int ele = nums[i];
            //jitne bhi que k andr chote elemnts h , unhe remove kro
            while(!dq.empty() && ele > nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        //remaing window process
            //removal
            //addition

            for(int i = k ; i<nums.size();i++){
                //ans store
                ans.push_back(nums[dq.front()]);

                //removak out of range
                if(!dq.empty() && i - dq.front() >= k){
                    dq.pop_front();
                }

                int ele = nums[i];
                //jitne bhi que k andr chote elemnts h , unhe remove kro
                while(!dq.empty() && ele > nums[dq.back()]){
                   dq.pop_back();
                }
                dq.push_back(i);
            }
           ans.push_back(nums[dq.front()]);
            return ans;
    }
};