/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Map.cpp
 * Author: hendrix
 * 
 * Created on July 27, 2016, 8:06 PM
 */

#include "Map.h"

Map::Map(IDType id) : Instantiable(id){
    unsigned int x = 0;
    this->tiles = new Matrix<Tile>(0,0);
}

Map::~Map() {
}

