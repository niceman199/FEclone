/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Character.h
 * Author: hendrix
 *
 * Created on July 27, 2016, 9:46 PM
 */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "../Unit.h"

class Character : public Unit{
public:
    Character(IDType id);
    virtual ~Character();
private:

};

#endif /* CHARACTER_H */

