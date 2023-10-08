#include<iostream>
#include<cstdlib>
#include<vector>
#include<array>
using namespace std;
int main(){
    vector<int>vt={0};
    vt.push_back(85);
    vt.emplace_back(90);
    // added some new lines this is to ensure updates are being pushed successfully !
    for(auto it:vt){
        cout<<" "<<it;
    }
    cout<<" \n";
    int arr[2]={1,2};
   cout<<"check for -1 index gbg val :"; cout<<arr[-1];
    return 0;
}