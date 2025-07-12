#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l ={1100,2002,3004,60,49,78,78,67};
    // l.erase(next(l.begin(),4));
     l.erase(next(l.begin(),2),next(l.begin(),6));
   for(int val : l){
    cout <<val <<endl;
   }
}