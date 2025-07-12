#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l ={1100,2002,3004};
    l.push_back(4009);
    l.push_front(5006);
    l.pop_back();
    l.pop_front();
    for(int val:l){
        cout << val <<endl;
    }
}