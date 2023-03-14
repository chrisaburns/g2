
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include "game.h"

void print_to_screen();

struct s_Game g1;

int main()
{
  system("CLS");
  std::cout << "Legooooooo" << std::endl;
  std::cout << "Press an arrow key to start" << std::endl;
  int key = 0;

  while(g1.b_game_running == true)
  {
    switch (key = getch())
    {
      case KEY_UP:
        g1.p.self.b_moving = true;
        g1.p.self.i_move = 1;
        g1.p.self.move();
        //std::cout << g1.p.self.i_x << std::endl;
        //std::cout << g1.p.self.i_y << std::endl;
        //std::cout << std::endl;
        g1.world.i_world[g1.p.self.i_x][g1.p.self.i_y] = 2;
        g1.world.i_world[g1.p.self.i_x][g1.p.self.i_y - 1] = 0;
        system("CLS");
        print_to_screen();
        break;
      case KEY_LEFT:
        g1.p.self.b_moving = true;
        g1.p.self.i_move = 2;
        g1.p.self.move();
        //std::cout << g1.p.self.i_x << std::endl;
        //std::cout << g1.p.self.i_y << std::endl;
        //std::cout << std::endl;
        g1.world.i_world[g1.p.self.i_x][g1.p.self.i_y] = 2;
        g1.world.i_world[g1.p.self.i_x + 1][g1.p.self.i_y] = 0;
        system("CLS");
        print_to_screen();
        break;
      case KEY_RIGHT:
        g1.p.self.b_moving = true;
        g1.p.self.i_move = 3;
        g1.p.self.move();
        //std::cout << g1.p.self.i_x << std::endl;
        //std::cout << g1.p.self.i_y << std::endl;
        //std::cout << std::endl;
        g1.world.i_world[g1.p.self.i_x][g1.p.self.i_y] = 2;
        g1.world.i_world[g1.p.self.i_x - 1][g1.p.self.i_y] = 0;
        system("CLS");
        print_to_screen();
        break;
      case KEY_DOWN:
        g1.p.self.b_moving = true;
        g1.p.self.i_move = 4;
        g1.p.self.move();
        g1.world.i_world[g1.p.self.i_x][g1.p.self.i_y] = 2;
        //std::cout << g1.p.self.i_x << std::endl;
        //std::cout << g1.p.self.i_y << std::endl;
        //std::cout << std::endl;
        g1.world.i_world[g1.p.self.i_x][g1.p.self.i_y] = 2;
        g1.world.i_world[g1.p.self.i_x][g1.p.self.i_y + 1] = 0;
        system("CLS");
        print_to_screen();
        break;
      case ESCAPE:
        g1.b_game_running = false;
        break;
    }
  }

  return 0;
}




void print_to_screen()
{
  for (int j = 9; j >= 0; j--)
  {
    for (int i = 0; i < g1.world.i_world_x; i++)
    {

      if (g1.world.i_world[i][j] == 1)
      {
        std::cout << "#";
      }
      else if (g1.world.i_world[i][j] == 0)
      {
        std::cout << " ";
      }
      else if (g1.world.i_world[i][j] == 2)
      {
        std::cout << "P";
      }

    }
    std::cout << std::endl;
  }
  std::cout << "Press escape when you're done" << std::endl;
  std::cout << std::endl;
}
