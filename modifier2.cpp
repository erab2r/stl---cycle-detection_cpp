#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l ={1100,2002,3004};
    l.insert(next(l.begin(),2),200);
   for(int val : l){
    cout <<val <<endl;
   }
}