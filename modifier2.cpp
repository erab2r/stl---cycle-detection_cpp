#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l ={1100,2002,3004};
    list<int>l2 ={3300,44002,7004};

    // l.insert(next(l.begin(),2),200);
    l.insert(next(l.begin(),2),l2.begin(),l2.end());
   for(int val : l){
    cout <<val <<endl;
   }
}