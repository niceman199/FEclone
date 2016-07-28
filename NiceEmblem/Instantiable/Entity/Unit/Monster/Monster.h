/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Monster.h
 * Author: hendrix
 *
 * Created on July 27, 2016, 9:44 PM
 */

#ifndef MONSTER_H
#define MONSTER_H

#include "../Unit.h"

class Monster : public Unit{
public:
    Monster(char * id);
    virtual ~Monster();
private:

};

#endif /* MONSTER_H */

