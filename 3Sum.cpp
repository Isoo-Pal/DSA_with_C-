#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;


//Brute Force method 
//TC = O(n^3 + log(unique triplets)) because find and insert are sets fuction which takes log(n) complexity
//SC = O(unique triplets)
vector<vector<int>> TripletSum(vector<int>& nums, int n){
    set<vector<int>> s;
    vector<vector<int>> ans;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(nums[i]+nums[j]+nums[k] == 0){
                    vector<int> trip = {nums[i], nums[j], nums[k]};
                    sort(trip.begin(), trip.end());
                    if(s.find(trip) == s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                    
                }
            }
        }
    }
    return ans;
    
}


//Better approach
//TC = O(n^2 + log(unique triplets))
//SC = O(unique triplets+n)
vector<vector<int>> optimalSum(vector<int>& nums, int n){
    
    set<vector<int>> uniqueTriplets;

    for(int i=0; i<n; i++){
        int tar = -nums[i];
        set<int> s;
        for(int j=i+1; j<n; j++){
            int third = tar - nums[j];
            if(s.find(third) != s.end()){
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                uniqueTriplets.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
    return ans;
}

//Optimized - Two Pointer
//TC = O(n^2 _nlogn(for sort function))
//SC = O(1)
vector<vector<int>> optimized(vector<int>& nums, int n){
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(i>0 && nums[i] == nums[i-1]){continue;};
        int j = i+1;
        int k = n-1;
        while(j<k){
            
            int sum= nums[i]+nums[j]+nums[k];
            if(sum<0){j++;}
            else if(sum>0){k--;}
            else{
                ans.push_back({nums[i], nums[j], nums[k]});
                j++, k--;
                while(j<k && nums[j] == nums[j-1]){j++;}
            }
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    int n = nums.size();

    // vector<vector<int>> ans = TripletSum(nums, n);
    // vector<vector<int>> ans = optimalSum(nums, n);
    vector<vector<int>> ans = optimized(nums, n);
    

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}