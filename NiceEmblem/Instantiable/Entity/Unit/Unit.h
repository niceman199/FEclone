/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Unit.h
 * Author: hendrix
 *
 * Created on July 27, 2016, 9:34 PM
 */

#ifndef UNIT_H
#define UNIT_H

#include "../../../Global/GlobalDefinitions.h"
#include "../../../Type/StatSheet.h"
#include "../Entity.h"


class Unit : public Entity {
public:
    Unit(IDType id);
    virtual ~Unit();
private:

    StatSheet statSheet;
    Value * stats;
    
};

#endif /* UNIT_H */

