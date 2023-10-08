#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main(){
    vector<int>vt={0};
    vt.push_back(85);
    for(auto it:vt){
        cout<<" "<<it;
    }
    return 0;
}