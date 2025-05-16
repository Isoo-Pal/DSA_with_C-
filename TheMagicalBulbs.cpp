#include<iostream>
#include<vector>
using namespace std;

pair<vector<int>, int> MagicalBulbs(vector<pair<int, int>> commands, int n, int k){
    vector<int> bulbs(n, 0);
    int count = 0;
    for(int i=0; i<k; i++){
        int L, R;
        L = commands[i].first;
        R = commands[i].second;
        for(int j=L; j<=R; j++){
            bulbs[j] = 1-bulbs[j];
        }
    }
    for(int i=0; i<n; i++){
        if(bulbs[i] == 1){
            count++;
        }
    }
    return{bulbs, count};
}

int main(){
    int n;
    cout<<"Enter the number of bulbs : ";
    cin>>n;
    int k;
    cout<<endl<<"Enter the number of commands : ";
    cin>>k;
    vector<pair<int, int>> commands;
    cout<<"Enter each command (L, R): ";
    for(int i=0; i<k; i++){
        int L, R;
        cin>>L >> R;
        commands.push_back({L, R});
    }

    pair<vector<int>, int> ans = MagicalBulbs(commands, n, k);

    for(int val:ans.first){
        cout<<val;
    }
    cout<<endl<<ans.second;
    
}