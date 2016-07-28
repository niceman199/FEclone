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
    StatSheet();
    StatSheet(Value * stats);
    Value * getStats();
    
    virtual ~StatSheet();
private:
    
    Value HP;
    Value Str;
    Value Skill;
    Value Spd;
    Value Luck;
    Value Def;
    Value Res;
    Value Con;    
};

#endif /* STATSHEET_H */

