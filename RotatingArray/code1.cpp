#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>::iterator it;
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    reverse(arr.begin(),arr.end());
    for(it = arr.begin(); it != arr.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}