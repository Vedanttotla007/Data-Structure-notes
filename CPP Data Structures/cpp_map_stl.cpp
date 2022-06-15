#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string , int >mp;
    mp.insert({"Sakshi",21});
    mp.insert({"Darshana",23});
    mp.insert({"Prajwal",24});
    mp.insert({"Sachin",22});
    map<string , int >::iterator itr;
    for(itr = mp.begin(); itr != mp.end() ; ++itr){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}