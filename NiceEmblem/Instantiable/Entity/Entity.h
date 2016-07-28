/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Entity.h
 * Author: hendrix
 *
 * Created on July 27, 2016, 8:58 PM
 */

#ifndef ENTITY_H
#define ENTITY_H

class Entity : public Instantiable{
public:
    Entity(std::string id);
    virtual ~Entity();
private:

};

#endif /* ENTITY_H */

