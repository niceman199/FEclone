/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tile.cpp
 * Author: hendrix
 * 
 * Created on July 27, 2016, 8:06 PM
 */

#include "Tile.h"

Tile::Tile(){
    this->type = TileTypeEnum::None;
    this->occupant = 0;
}

Tile::Tile(TileTypeEnum type) {
    this->type = type;
    this->occupant = 0;
}

TileTypeEnum Tile::getType() {
    return this->type;
}

Entity Tile::getOccupant() {
    return *this->occupant;
}


Tile::~Tile() {
}

std::ostream& operator<<(std::ostream &strm, const Tile &tile) {
  //return strm << "Tile:" << tile.getType();
    return strm << "This is a tile";
    
}