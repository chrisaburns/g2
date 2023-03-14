
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include "game.h"

void setup_game();

int main()
{
  // clear console
  system("CLS");

  // create game object
  struct s_Game g1;

  // setup game object
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
  }

  /*
  std::string str = "7";
  std::vector<int> v1 = {1, 2, 3, 4};
  v1[1] = std::stoi(str, nullptr, 10);
  for (int i = 0; i < 5; i++)
  {
    std::cout << v1[i] << std::endl;
  }
  */
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
    std::cout << "Game Running: " << g1.b_gameIsRunning << std::endl;


  }

  return 0;

}
