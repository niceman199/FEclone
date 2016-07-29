/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tile.h
 * Author: hendrix
 *
 * Created on July 27, 2016, 8:06 PM
 */

#ifndef TILE_H
#define TILE_H

#include <iostream>

#include "../../Enums/TileTypeEnum.hpp"
#include "../Entity/Entity.h"

class Tile {
public:
    Tile();
    Tile(TileTypeEnum type);
    
    TileTypeEnum getType();
    Entity getOccupant();
    
    virtual ~Tile();
private:

    friend std::ostream& operator<<(std::ostream&, const Tile&);
    TileTypeEnum type;
    Entity * occupant;
};

#endif /* TILE_H */

