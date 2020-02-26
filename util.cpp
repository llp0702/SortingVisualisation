//
// Created by llp0702 on 2/26/20.
//

#include <cstdlib>
#include <iostream>
#include "util.h"
using namespace std;
std::vector<int> util::fromIntToHsv(const int val,const int max){
    int h,s,v;
    h = (val * 360)/max;
    s = (val * 100)/max;
    v = 100;
    //cout<<val<<"val"<<endl;
    //cout << std::vector<int>({h,s,v})[0]<<" "<< std::vector<int>({h,s,v})[1]<<endl;
    return std::vector<int>({h,s,v});
}
std::vector<int> util::fromHsvToRgb(int h, const int s, const int v){
    h = h%360;

    auto c = static_cast<float>((s/100.)*(v/100.));
    float x = c * static_cast<float>(1 - abs((h/60)%2-1));
    float m = static_cast<float>(v/100.) - c;
    float rf,gf,bf;
    unsigned char r,g,b;
    if(h>=0 && h<60){
        rf=c;
        gf=x;
        bf=0.;
    }else if(h>=60 && h<120){
        rf=x;
        gf=c;
        bf=0.;
    }else if(h>=120 && h<180){
        rf=0.;
        gf=c;
        bf=x;
    }else if(h>=180 && h<240){
        rf=0.;
        gf=x;
        bf=c;
    }else if(h>=240 && h<300){
        rf=x;
        gf=0.;
        bf=c;
    }else if(h>=300 && h<360){
        rf=c;
        gf=0.;
        bf=x;
    }
    r= static_cast<unsigned char>((rf+m)*255);
    g= static_cast<unsigned char>((gf+m)*255);
    b= static_cast<unsigned char>((bf+m)*255);
    //cout<<"r"<<(int)r<<"g"<<(int)g<<"b"<<(int)b<<endl;
    //cout<<"rf"<<(float)rf<<"gf"<<(float)gf<<"bf"<<(float)bf<<"m"<<(float)m<<endl;
    //cout << "rgb"<<b+256*g+256*256*r<<endl;
    return std::vector<int>({r,g,b});
}
