
//MAIN

#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>

#include "game.h"
#include "setup.h"
//#include "area.h"
//#inclue "character.h"

int main()
{
  // clear console
  //system("CLS");

  // create and setup game object
  Game_t g1;
  setup_game_object(g1);
  setup_game_areas(g1);


  std::cout << "Length of Area 1: " << std::endl;
  std::cout << g1.areas[0].i_area_x << std::endl;

  /*
  for (int i = 1; i < g1.i_numAreas + 1; i++)
  {
    std::cout << "Area " << i << ": ";
    std::cout << areas[i].i_area_x << " ";
    std::cout << areas[i].i_area_y << std::endl;
  }

  std::cout << "Number of Characters: " << g1.i_numCharacters << std::endl;
  for (int i = 1; i < g1.i_numCharacters + 1; i++)
  {
    std::cout << "Character " << i << ": ";
    std::cout << characters[i].i_health << std::endl;
  }
*/
  // create items







/*

  std::string str = "7";
  std::vector<int> v1 = {1, 2, 3, 4};
  v1[1] = std::stoi(str, nullptr, 10);
  for (int i = 0; i < 5; i++)
  {
    std::cout << v1[i] << std::endl;
  }


  // game loop
  int key = 0;
  while(g1.b_gameIsRunning == true)
  {
    // user interaction
    switch (key = getch())
    {
      case KEY_UP:
        g1.p.self.b_moving = true;
        g1.p.self.i_move = 1;
        g1.p.self.move();
        std::cout << g1.p.self.i_x << std::endl;
        std::cout << g1.p.self.i_y << std::endl;
        std::cout << std::endl;
        break;
      case KEY_LEFT:
        g1.p.self.b_moving = true;
        g1.p.self.i_move = 2;
        g1.p.self.move();
        std::cout << g1.p.self.i_x << std::endl;
        std::cout << g1.p.self.i_y << std::endl;
        std::cout << std::endl;
        break;
      case KEY_RIGHT:
        g1.p.self.b_moving = true;
        g1.p.self.i_move = 3;
        g1.p.self.move();
        std::cout << g1.p.self.i_x << std::endl;
        std::cout << g1.p.self.i_y << std::endl;
        std::cout << std::endl;
        break;
      case KEY_DOWN:
        g1.p.self.b_moving = true;
        g1.p.self.i_move = 4;
        g1.p.self.move();
        std::cout << g1.p.self.i_x << std::endl;
        std::cout << g1.p.self.i_y << std::endl;
        std::cout << std::endl;
        break;
      case ESCAPE:
        g1.b_gameIsRunning = false;
        break;
    }

    // show game state
    std::cout << "Game Running: " << g1.b_gameIsRunning << std::endl;

  }*/

  return 0;

}
