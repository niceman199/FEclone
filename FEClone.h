// Class file

#include <iostream>
using namespace std;

enum tileTerrain(none, forest, mountain, water, road);

class characterStats
{
public:
    void setHP(int hp);
    void setStr(int str);
    void setAccuracy(int accuracy);
    void setMovementSpeed(int movementSpeed);

private:
    int HP;
    int Str;
    int Accuracy;
    int MovementSpeed;
};

class Map
{
public:
    void createMapA();

private:
    Tile m;
};

class Tile
{
public:
    void setType(tileTerrain terrain);
private:
    tileTerrain Terrain;
};
