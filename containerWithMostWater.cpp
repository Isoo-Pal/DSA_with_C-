#include<iostream>
#include<vector>
using namespace std;


//Brute force method
int BruteForce(vector<int> height){
    int maxWater = 0, currWater = 0;
    
    for(int i=0; i<height.size(); i++){
        for(int j=i+1; j<height.size(); j++){
            int ht = min(height[i], height[j]);
            int w = j-i;
            currWater = ht*w;
            maxWater = max(currWater, maxWater);
        }
    }
    return maxWater;
}

//Two pointer approach
int TwoPointer(vector<int> height){
    int lp=0, currWater = 0, maxWater = 0;
    int rp = height.size()-1;
    while(lp<rp){
        int ht = min(height[lp], height[rp]);
        int w = rp-lp;
        currWater = ht*w;
        maxWater = max(currWater,maxWater);
        height[lp]<height[rp] ? lp++ : rp--;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    //int maxWater = BruteForce(height);
    int maxWater = TwoPointer(height);
    cout<<maxWater;
}