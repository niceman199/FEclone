/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Instantiable.cpp
 * Author: hendrix
 * 
 * Created on July 27, 2016, 7:56 PM
 */

#include "Instantiable.h"

Instantiable::Instantiable(IDType id) {
    this->id = id;
}

IDType Instantiable::getId() {
    return this->id;
}

Instantiable::~Instantiable(){
    
}
