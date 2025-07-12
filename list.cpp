#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l = {10,20,30,40};
    list<int>l2(l);
    for(int val : l2){
        cout << val <<endl;
    }
 
}