#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <cstdlib>
#include "SortArray.h"
#include "Display.h"
#include <thread>

const int sizeArray = 100;
const int width = 800;
const int height = 600;

using namespace std;
void threadInitAndShow(Display *d,SortArray *sa)
{

    (*d).initAndShow(*sa);
}
void threadSort(SortArray *sa)
{
    (*sa).doOne();
}
int main()
{
    srand((unsigned)time(NULL));
    SortArray sa(sizeArray);
    sa.initValues(height);
    cout << "Array well initialized" <<endl;
    sa.print();

    Display display(width, height);
    thread t(threadInitAndShow, &display, &sa);
    thread t2(threadSort, &sa);
    t.join();
    t2.join();
}