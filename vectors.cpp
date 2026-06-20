#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void explanation(){
    // the array cannot modifeid in size 

    // vector container only which store element 

    vector<int> v;    // empty container

    v.push_back(1);    // it give 1
    v.emplace_back(2) ;  // it give {1,2}
//    these both are using to insert the element in the vector


    // emplace back automatic assume it as pairs 


    vector<pair<int,int>> va;
    va.push_back({1,5});
    va.emplace_back(9,6);



    // how does orignally vector look like

    vector<int>vec1 (5,10);     // 5 is indicatinng the no. of time the 10 is

    vector<int>vc(5);    // this will indicating the size of vector only


    // assining one vector to other 

    vector<int> vec2(vec1);


    // increasing the size of vector
    
    vc.push_back(1);    // it increase the size of vc 


    // learning about how to acess the element of vector

    // 1. similarly to array     v[1]  // v.at(0)
    // 2.  iterators    --> points to the memory where element lies

    // v.end point in iterators is just one point right to the last position
    //                   to access this last position we have to do it--


    // v.rend()  reverse order then access

    // v.back --->> the element which is at 30  in vector 10,20,30,



}

void accesingelment_vector(){
    // learning about how to acess the element of vector

    // 1. similarly to array     v[1]  // v.at(0)
    // 2.  iterators    --> points to the memory where element lies

    // v.end point in iterators is just one point right to the last position
    //                   to access this last position we have to do it--


    // v.rend()  reverse order then access

    // v.back --->> the element which is at 30  in vector 10,20,30,

    vector <int> v={5,10,15,20,25,30,35,40};

    vector <int> :: iterator it = v.begin();
    cout<< *(it)<<" ";
    it++; 
    cout<<*(it)<<" "<<endl;


    // we cannot acces all the elment one by one so apply loop in vector

    for (vector<int> :: iterator itr = v.begin(); itr != v.end(); itr++){
        cout<<*(itr)<<" ";
    }

    // short cut for this is auto 

    for (auto itra = v.begin(); itra != v.end(); itra++)
    {
        cout<<*(itra);
    }
    

    // using for each loop
    for(auto it:v){
        cout<<it<<" ";
    }

}


void deletion_vector(){
    vector <int> v={5,10,15,20,25,30,35,40};
    // erase function  ---- v.begin determine the add

    // after deletion the vector get shrink

    v.erase(v.begin());
    for (vector<int> :: iterator it=v.begin() ; it != v.end(); it++)
    {
        cout<<*(it)<<"  ";
    }

    // deletioon for couple of elemrnt

    // .erase(start,end)

    v.erase(v.begin()+2,v.begin()+4) ;  //  15 , 20 will be dleted only as it work for range


    
}


void insert(){
    
}
int main()
{
    // accesingelment_vector();
    deletion_vector();
return 0;
}