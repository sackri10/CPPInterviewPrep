#include <algorithm> 
#include <map>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> triplezeroSum(vector<int>& nums) {
        //map<int,int> st;
		//map<int,int>::iterator it;
        //int findex=-1,lindex=-1;
        vector<int> final;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                           
                        final.push_back(i);        
                        final.push_back(j);        
                        final.push_back(k); 
                        return final ;
                    }
                }

            }
        }
        //     cout<<nums[i];
        //     if(st.size()!=0 && st.find(target-nums[i]) !=st.end())
        //     {
        //          lindex=i;   
        //     }
        //     else
        //     {
        //             st[nums[i]]=i;
        //     }
            
        // }
		//   for (it=st.begin(); it!=st.end(); ++it)
    	// std::cout << it->first << " => " << it->second << '\n';
		// int x=target-nums[lindex];
        // if(st.find(x) !=st.end())
		// {
		// 	it=st.find(x);
		// }
		// findex=(it)->second;
      
    }
};
int main ()
{
	Solution s;
	 vector<int> arr;
	 arr.push_back(2);
	 arr.push_back(0);
	 arr.push_back(10);
	 arr.push_back(-1);
	s.triplezeroSum(arr);
}
