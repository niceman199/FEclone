/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Map.h
 * Author: hendrix
 *
 * Created on July 27, 2016, 8:06 PM
 */

#ifndef MAP_H
#define MAP_H

#include "Tile.h"
#include "../../Type/Matrix.hpp"

class Map : public Instantiable{
public:
    Map(IDType id);
    virtual ~Map();
private:
    
    Matrix<Tile> * tiles;
};

#endif /* MAP_H */

