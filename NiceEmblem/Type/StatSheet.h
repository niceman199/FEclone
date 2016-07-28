/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StatSheet.h
 * Author: hendrix
 *
 * Created on July 27, 2016, 9:10 PM
 */

#ifndef STATSHEET_H
#define STATSHEET_H

#include "../Global/GlobalDefinitions.h"

class StatSheet {
public:
    StatSheet(Value * stats);
    Value * getStats();
    
    virtual ~StatSheet();
private:
    
    Value HP = 0;
    Value Str = 0;
    Value Skill = 0;
    Value Spd = 0;
    Value Luck = 0;
    Value Def = 0;
    Value Res = 0;
    Value Con = 0;    
    
};

#endif /* STATSHEET_H */

