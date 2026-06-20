//    algorithum ,container, function, iterators 

// these are the stl 


#include<iostream>
using namespace std;

// utility library in c++ considered pair function in it


void explainpairs(){
    pair<int,int> p ={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> pa ={1,{2,3}};
    cout<<pa.first<<" "<<pa.second.second<<" "<<pa.second.first<<endl;


    pair<int,int> arr[]={{1,3},{2,3},{5,7}};
    cout<<arr[1].first;
}

int main()
{
    explainpairs();
return 0;
}