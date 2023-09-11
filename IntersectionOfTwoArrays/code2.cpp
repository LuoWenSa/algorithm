#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    //顺序情况下
    vector<int> num1 = {1,2,3,9,10};
    vector<int> num2 = {1,2,3,4,4,13};
    vector<int>::iterator iter1 = num1.begin();
    vector<int>::iterator iter2 = num2.begin();

    cout<<"[";
    while(iter1 != num1.end() && iter2 != num2.end()){
        if(*iter1 > *iter2){
            iter2++;
        }else if(*iter1 < *iter2){
            iter1++;
        }else{
            cout<<*iter1<<",";
            iter1++;
            iter2++;
        }
    }
    cout<<'\b';
    cout<<"]";

    return 0;
}