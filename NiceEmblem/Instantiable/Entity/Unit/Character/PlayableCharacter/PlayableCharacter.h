/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PlayableCharacter.h
 * Author: hendrix
 *
 * Created on July 27, 2016, 9:47 PM
 */

#ifndef PLAYABLECHARACTER_H
#define PLAYABLECHARACTER_H

#include "../Character.h"

class PlayableCharacter : public Character {
public:
    PlayableCharacter(IDType id);
    virtual ~PlayableCharacter();
private:
    
};

#endif /* PLAYABLECHARACTER_H */

