//
// Created by llp0702 on 2/26/20.
//

#ifndef CPPSFML_UTIL_H
#define CPPSFML_UTIL_H


#include <vector>

class util {
public:
    static std::vector<int> fromIntToHsv(int val, int max);
    static std::vector<int> fromHsvToRgb( int h,  int s,  int v);
    static std::vector<int> fromIntToRgb(const int val, const int max){
        std::vector<int> hsv=fromIntToHsv(val, max);
        return fromHsvToRgb(hsv[0], hsv[1], hsv[2]);
    }
};


#endif //CPPSFML_UTIL_H
