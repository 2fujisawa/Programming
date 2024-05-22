#pragma once //Allows the compilation to recognize that the header file is only included once during the process
            //for example we use the #include "preDSAmessage.h" so it is usable again here  
            //which is going to be also called in the main preDSA.cpp file, by stating pragma once it makes sure that it is only called once during compilation

#include "preDSAmessage.h" //Including a header file

using namespace std; 

int add(int a, int b)
{
    return a + b;
}