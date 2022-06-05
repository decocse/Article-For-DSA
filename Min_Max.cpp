#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int minMaxGame(vector<int>& nums) {
        //int i=0;
        vector<int>arr;
        bool f=0;
        while(nums.size()>1)
        {
			//cout<<nums.size()<<endl;
            if(nums.size()>1){
            for(int i=0;i<nums.size();i+=2){
            if(f==0)
            {
                int k=min(nums[2*i],nums[2*i+1]);
                    arr.push_back(k);
					cout<<k<<endl;
                f=1;
            }
            else if(f==1)
            {
                int k=max(nums[2*i],nums[2*i+1]);
                    arr.push_back(k);
					cout<<k<<endl;
                f=0;
            }
			cout<<i<<endl;
        }
            }
             nums=arr;
            arr.clear();
            f=0;
        }
        return nums[0];
    }


int main(){
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ans=minMaxGame(arr);
	cout<<ans<<endl;
}
