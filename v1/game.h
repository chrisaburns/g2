
#ifndef GAME_H
#define GAME_H

#define KEY_UP    72
#define KEY_LEFT  75
#define KEY_RIGHT 77
#define KEY_DOWN  80
#define ESCAPE		27

struct s_Game
{
	bool b_game_running = true;

	struct s_Character
	{
		struct s_Self
		{
			int i_health = 100;
			int i_stamina = 100;
			int i_trait3 = 100;
			int i_x = 5;
			int i_y = 5;
			int i_move = 0b00;
			bool b_moving = false;
			bool b_jump = false;
			bool b_attack = false;
			bool b_speak = false;
			bool b_alive = true;
			void move()
			{
				switch (i_move)
				{
					case 1:
						if (i_y < 8)
						{
							i_y += 1;
						}
						break;
					case 2:
						if (i_x > 1)
						{
							i_x -= 1;
						}
						break;
					case 3:
						if (i_x < 8)
						{
							i_x += 1;
						}
						break;
					case 4:
						if (i_y > 1)
						{
							i_y -= 1;
						}
						break;
				}
			};
		};
		struct s_Self self;

		struct s_Inventory
		{
			int i_gold = 0;
			bool b_item1 = false;
			bool b_item2 = false;
			bool b_item3 = false;
		};
		struct s_Inventory inv;

	};
	struct s_Character p;

	struct s_World
	{
		int i_world_x = 10;
		int i_world_y = 10;
		int i_world[10][10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	                 				 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
	                 				 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
	                 				 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
	                 				 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
	                 				 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
	                 				 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
	                 				 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
	                 				 1, 0, 0, 0, 0, 0, 0, 0, 0, 1,
	                 				 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

	};
	s_World world;

};

#endif
