/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.h
 * Author: hendrix
 *
 * Created on July 27, 2016, 8:14 PM
 */

#ifndef MATRIX_H
#define MATRIX_H

template <class T> class Matrix {
public:
    
    Matrix<T>(unsigned int rows, unsigned int columns, T* data);
    virtual ~Matrix();
    
    unsigned int getRows();
    unsigned int getColumns();
    T** getMatrix(); 
    
private:
    
    unsigned int rows;
    unsigned int columns;
    T** matrix; 
};

#endif /* MATRIX_H */

