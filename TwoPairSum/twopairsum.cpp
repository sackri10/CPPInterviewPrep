#include <algorithm> 
#include <map>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> st;
		map<int,int>::iterator it;
        int findex=-1,lindex=-1;
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i];
            if(st.size()!=0 && st.find(target-nums[i]) !=st.end())
            {
                 lindex=i;   
            }
            else
            {
                    st[nums[i]]=i;
            }
            
        }
		  for (it=st.begin(); it!=st.end(); ++it)
    	std::cout << it->first << " => " << it->second << '\n';
		int x=target-nums[lindex];
        if(st.find(x) !=st.end())
		{
			it=st.find(x);
		}
		findex=(it)->second;
         vector<int> final;
        final.push_back(findex);        
        final.push_back(lindex);

       return final ;
    }
};
int main ()
{
	Solution s;
	 vector<int> arr;
	 arr.push_back(2);
	 arr.push_back(7);
	 arr.push_back(11);
	 arr.push_back(15);
	s.twoSum(arr,9);
}
