//Implemented by Rok!-AGR
#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(n) n.begin(),n.end() 
#define vec vector<int>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vp(it,arr)  for(auto it:arr){cout<<it<<;}
#define LOOP(i,a,b) for(int i=a;i<b;i++)
using namespace std;
vector<vector<int>> generate2(int numRows) {
        vector<vector<int>>arr(numRows);
        arr[0].push_back(1);
        cout<<"hello"<<endl;
        for(int a=1;a<numRows;a++){
            arr[a].push_back(1);
            for(int b=0;b<a-1;b++){
                arr[a].push_back(arr[a-1][b]+arr[a-1][b+1]);
            }
            arr[a].push_back(1);
        }
        
        
        
    

   return arr;
}


int main(){
int n;
cin>>n;
vector<vector<int>>arr=generate2(n);

for(int a=0;a<arr.size();a++){
    for(int b=0;b<arr[a].size();b++){
        cout<<arr[a][b]<<" ";
    }
    cout<<endl;
}



return 0;
}