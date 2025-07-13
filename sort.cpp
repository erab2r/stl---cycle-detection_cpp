#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l ={1100,2002,3004,49,49,60,60,49,78,78,67};
    
     l.remove(49);
   for(int val : l){
    cout <<val <<endl;
   }
}