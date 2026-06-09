//another example of vector 
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    for(int x=1;x<=10;x++){
        v.push_back(x);
    }
    cout<<"Vector size is :"<<v.size()<<endl;
    cout<<"Capacity of vector is: "<<v.capacity()<<endl;
    cout<<"Maximum size of vector: "<<v.max_size()<<endl;
    v.resize(5);
    cout<<"Vector size after resizing : "<<v.size()<<endl;
    if(v.empty()==false){
        cout<<"Vector is not empty."<<endl;
    }
    else{
        cout<<"Vector is not empty"<<endl;
    }
    return 0;
}