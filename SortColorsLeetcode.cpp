#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void BruteForce(vector<int>& vec){
    sort(vec.begin(), vec.end());
}

void SlightOptimal(vector<int>& vec){
    int count0 = -1, count1 = -1, count2 = -1;
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == 0){
            count0++;
        }else if(vec[i] == 1){
            count1++;
        }else{
            count2++;
        }
    }
    for(int i=0; i<vec.size(); i++){
        if(count0 >= 0){
            vec[i] = 0;
            count0--;
        }else if(count1 >= 0){
            vec[i] = 1;
            count1--;
        }else{
            vec[i] = 2;
            count2--;
        }
    }
}

//Using DNF(Dutch National Flag) Algorithm
void dnf(vector<int>& vec){
    int low=0, mid=0, high=vec.size()-1;
    while(mid <= high){
        if(vec[mid] == 0){
            swap(vec[low], vec[mid]);
            mid++;
            low++;
        }
        else if(vec[mid] == 1){
            mid++;
        }else{
            swap(vec[mid], vec[high]);
            high--;
        }
    }
}

int main(){
    vector<int> vec = {2,0,2,1,1,0,0,0,1,2,1};

    //BruteForce(vec);
    //SlightOptimal(vec);
    dnf(vec);

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}