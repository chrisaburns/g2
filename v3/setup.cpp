
// SETUP.CPP

#include <iostream>
#include <fstream>
#include "setup.h"

void setup_game_object(Game_t &game_object)
{
  // parse excel files to determine:
  game_object.i_numAreas = 4;
  game_object.i_numCharacters = 3;
  game_object.i_numItems = 8;
}

void setup_game_areas(Game_t &game_object)
{

  game_object.areas[0].i_area_x = 1;



  /*
  std::fstream strm;
  strm.open("overworld.csv");

  char arr[6000];
  char c;
  int i = 0;

  while(!strm.eof())
  {
    strm.get(c);
    if(c != ',')
    {
      arr[i] = c;
      i++;
      //std::cout << c << std::endl;
    }
  }
  strm.close();
  for(i = 0; i < 2500; i++)
  {
    std::cout << arr[i];
  }*/
}
