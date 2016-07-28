/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.cpp
 * Author: hendrix
 * 
 * Created on July 27, 2016, 8:14 PM
 */

#include "Matrix.h"

Matrix::Matrix<T>(unsigned int rows, unsigned int columns, T* data) {
    
    T[][] matrix = new T[rows][columns];
    
    int i = 0, j = 0, k = 0;
    while(i < rows){
        while(j < columns){
          matrix[i][j] = data[k];
          ++k;
        }
        j = 0;
        ++i;
    }
    this->matrix = matrix;
}

unsigned int Matrix::getColumns(){
    return this->columns;
}

unsigned int Matrix::getRows(){
    return this->rows;
}

T** Matrix::getMatrix(){
    return this->matrix;
}

Matrix::~Matrix() {
    delete this->matrix;
}

