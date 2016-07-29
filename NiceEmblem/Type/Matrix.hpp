/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.hpp
 * Author: hendrix
 *
 * Created on July 28, 2016, 11:06 PM
 */

#ifndef MATRIX_HPP
#define MATRIX_HPP

template <class T> class Matrix{
public:
    
    /**** Constructors ****/
    Matrix(unsigned int rows, unsigned int columns){
        T** matrix = new T*[rows];
        
        //Each rows must be created individually
        for(unsigned int i = 0; i < rows; ++i){
            matrix[i] = new T[columns];
        }
        this->rows = rows;
        this->columns = columns;
        this->matrix = matrix;
    }
    
    Matrix(unsigned int rows, unsigned int columns, T* data) : Matrix(rows,columns){
        fill(data);
    }
    
    /**
     * Copies the data given into the matrix, in order,
     * until all spaces in the matrix are occupied. Will
     * access as many slots as necessary
     * @param data: An array with all the data that will be
     * used.
     */
    void fill(T * data){
        unsigned int i = 0, j = 0, k = 0;
        while(i < this->rows){
            while(j < this->columns){
                this->matrix[i][j] = data[k];
                ++k;
                ++j;
            }
            j = 0;
            ++i;
        }
    }
    
    /**
     * Puts the object in the desired spot
     * TODO: Throw an out of bounds exception
     * @param x: the desired row
     * @param y: the desired column
     * @param object: The object to be saved
     */
    void put(unsigned int x, unsigned int y, T object){
        this->matrix[x][y] = object;
    }
    
    /**** Getters ****/
    T get(unsigned int x, unsigned int y){
        return this->matrix[x][y];
    }
    
    unsigned int getRowCount(){
        return this->rows;
    }
    
    unsigned int getColumnCount(){
        return this->columns;
    }
    
    T** getMatrix(){
        return this->matrix;
    }
    
    /**** Destructor ****/
    virtual ~Matrix(){
        for(int i = 0; i < rows; ++i) {
            delete [] matrix[i];
        }
        delete [] matrix;
    };
    
private:
    
    unsigned int rows;
    unsigned int columns;

    T** matrix;
};


#endif /* MATRIX_HPP */

