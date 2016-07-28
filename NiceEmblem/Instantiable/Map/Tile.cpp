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

Tile::Tile(TileTypeEnum type) {
    this->type = type;
}

TileTypeEnum Tile::getType() {
    return this->type;
}

Entity Tile::getOccupant() {
    return this->occupant;
}


Tile::~Tile() {
}

