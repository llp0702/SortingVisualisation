//
// Created by llp0702 on 2/25/20.
//

#ifndef CPPSFML_SORTARRAY_H
#define CPPSFML_SORTARRAY_H
#include <vector>

class SortArray {
public :
    void shuffle();
    void insertionSort();
    SortArray(int size = 300, int dtMs = 1);
    void print() const;
    void initValues(const int modulo);
    void doOne();
    std::vector<int> getV() const {return v;}
private :
    int dtMs;
    std::vector<int> v;
};


#endif //CPPSFML_SORTARRAY_H
