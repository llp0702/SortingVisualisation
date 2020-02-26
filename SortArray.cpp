//
// Created by llp0702 on 2/25/20.
//

#include <algorithm>
#include <iostream>
#include <random>
#include <zconf.h>
#include "SortArray.h"
void SortArray::shuffle(){
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(v), std::end(v), rng);
}
void SortArray::insertionSort(){
    int n = v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]>v[j])
            {
                //std::cout<<"swap"<<std::endl;
                std::swap(v[i],v[j]);
            }
            usleep(1000);
        }
    }
    print();
}
void SortArray::print() const{
    for(auto element=v.begin(); element!=v.end(); element++){
        std::cout << *element << " ";
    }
    std::cout <<std::endl;
}
SortArray::SortArray(int size, int dtMs) : v(std::vector<int>(size)), dtMs(dtMs){
}

void SortArray::initValues(const int modulo){
    for(int i=0; i<v.size(); i++){
        v[i] = rand()%modulo;
    }
}
void SortArray::doOne() {
    shuffle();
    //print();
    insertionSort();
    //print();
}
