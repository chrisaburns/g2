
#ifndef GAME_H
#define GAME_H

#define KEY_UP    72
#define KEY_LEFT  75
#define KEY_RIGHT 77
#define KEY_DOWN  80
#define ESCAPE		27

struct s_Game
{
	bool b_gameIsRunning;

	struct s_World
	{
		int i_world_x;
		int i_world_y;
	};
	s_World world;

	struct s_Character
	{
		struct s_Self
		{
			int i_health;
			int i_stamina;
			int i_trait3;
			int i_x;
			int i_y;
			int i_move;
			bool b_moving;
			bool b_jump;
			bool b_attack;
			bool b_speak;
			bool b_alive;
			move()
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

};

#endif
