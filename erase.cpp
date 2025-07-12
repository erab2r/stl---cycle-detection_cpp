#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l ={1100,2002,3004,60,49,78,78,67};
    l.erase(next(l.begin(),4));
   for(int val : l){
    cout <<val <<endl;
   }
}