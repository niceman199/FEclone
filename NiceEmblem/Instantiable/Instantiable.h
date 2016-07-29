/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Instantiable.h
 * Author: hendrix
 *
 * Created on July 27, 2016, 7:56 PM
 */

#ifndef INSTANTIABLE_H
#define INSTANTIABLE_H

#include "../Global/GlobalDefinitions.h"
#include <string>

class Instantiable{
public:
    Instantiable(IDType id);
    virtual ~Instantiable();
    IDType getId();
private:    
    IDType id;
};

#endif /* INSTANTIABLE_H */