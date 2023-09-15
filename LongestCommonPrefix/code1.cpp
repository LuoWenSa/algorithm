#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> sv = {"flower","flow","flight"};
    string shorts = sv[0];
    string longs;
    int pos;
    vector<string>::iterator iter;
    for(iter = sv.begin()+1; iter != sv.end(); iter++){
        longs = (*iter);
        if(shorts.length() > longs.length()){
            string temp = shorts;
            shorts = longs;
            longs = temp;
        }
        //计算当前状态下的最长公共前缀
        while(shorts.length() != 0 && longs.find(shorts) != 0){ //此时shorts不是longs的最长公共前缀
            //shorts每次将最后一个字符减掉，试图确定shorts的子串是否为longs的最长公共前缀
            shorts = shorts.substr(0,shorts.length() - 1);
        }
        //shorts.length() = 0时及时跳出循环可以节约资源
        if(shorts.length() == 0){
            break;
        }
    }
    cout<<"shorts:"<<shorts;
    // shorts = shorts.substr(0,shorts.length() - 1);
    // cout<<shorts.length();

    return 0;
}