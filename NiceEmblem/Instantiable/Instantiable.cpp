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

Instantiable::Instantiable(char * id) {
    this->id = id;
}

Instantiable::~Instantiable() {
}

char * Instantiable::getId() {
    return this->id;
}
