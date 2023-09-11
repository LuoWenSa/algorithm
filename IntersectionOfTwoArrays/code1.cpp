#include <iostream>
#include <map>
using namespace std;
int main(){
    //乱序情况下
    int nums1[] = {9,4,9,8,4};
    int nums2[] = {4,9,5};
    map<int, int> hashmap;
    map<int, int>::iterator iter;

    for (int x : nums1){
        iter = hashmap.find(x);
        if(iter == hashmap.end()){
            hashmap[x] = 1;
        }else{
            hashmap[x] = (iter->second) + 1;
        }
    }
    cout<<"[";
    for(int x : nums2){
        iter = hashmap.find(x);
        if(iter != hashmap.end() && (iter->second) > 0){
            cout<<iter->first<<",";
            hashmap[x] = (iter->second) - 1;
        }
    }
    cout<<'\b';
    cout<<"]";
    // for(iter = hashmap.begin(); iter != hashmap.end(); iter++){
    //     cout<<"key:"<<iter->first<<" value:"<<iter->second<<endl;
    // }
    

    return 0;
}