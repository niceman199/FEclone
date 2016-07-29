/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Main.cpp
 * Author: hendrix
 *
 * Created on July 27, 2016, 11:06 PM
 */

#include <cstdlib>
#include <iostream>

#include "../Type/Matrix.hpp"

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "Starting\n";
    
    char * b = new char[4];
    b[0] = 1; 
    b[1] = 2;
    b[2] = 3;
    b[3] = 4;
    Matrix<char> * a = new Matrix<char>(1,1,b);
    delete a;
    cout << "Beautiful friend the end\n";
    return 0;
}

