/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StatSheet.cpp
 * Author: hendrix
 * 
 * Created on July 27, 2016, 9:10 PM
 */

#include "StatSheet.h"

StatSheet::StatSheet(){
    this->HP = 0;
    this->Str = 0;
    this->Skill = 0;
    this->Spd = 0;
    this->Luck = 0;
    this->Def = 0;
    this->Res = 0;
    this->Con = 0;

}

StatSheet::StatSheet(Value * stats) {

    this->HP = stats[__HP];
    this->Str = stats[__Str];
    this->Skill = stats[__Skill];
    this->Spd = stats[__Spd];
    this->Luck = stats[__Luck];
    this->Def = stats[__Def];
    this->Res = stats[__Res];
    this->Con = stats[__Con];

}

Value * StatSheet::getStats() {
    
    Value * stats = new Value[__StatCount];
    
    stats[__HP] = this->HP;
    stats[__Str] = this->Str;
    stats[__Skill] = this->Skill;
    stats[__Spd] = this->Spd;
    stats[__Luck] = this->Luck;
    stats[__Def] = this->Def;
    stats[__Res] = this->Res;
    stats[__Con] = this->Con;
    
    return stats;
}


StatSheet::~StatSheet() {
}

