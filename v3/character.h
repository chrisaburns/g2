
// CHARACTER.H

#ifndef CHARACTER_H
#define CHARACTER_H

#define KEY_UP    72
#define KEY_LEFT  75
#define KEY_RIGHT 77
#define KEY_DOWN  80
#define ESCAPE		27

typedef struct Character
{
  int i_health;
  int i_x;
  int i_y;
  int i_move;
  bool b_isMoving = false;
  bool b_isJumping = false;
  bool b_isAttacking = false;
  bool b_isSpeaking = false;
  bool b_isAlive = true;
  move() {
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
  }

} Character_t;

#endif
