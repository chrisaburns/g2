
#include <windows.h>
#include <iostream>

#define SCREEN_WIDTH 213
#define SCREEN_HEIGHT 50
#define SCREEN_SIZE SCREEN_WIDTH*SCREEN_HEIGHT

int main()
{

  // screen info
  DWORD chars_to_write = 0;
  char screen[SCREEN_SIZE];

  // console info
  HANDLE console;
  COORD coord;





  // open console window maximized
  HWND hWnd = GetConsoleWindow();
  ShowWindow(hWnd, SW_SHOWMAXIMIZED);

  // set up console screen buffer
  console = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,
                                      0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
  coord.X = 0;
  coord.Y = 0;
  SetConsoleActiveScreenBuffer(console);

  // determine screen buffer PAGE_SIZE
  int columns, rows;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
  rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;






  /*
  // Draw top of border
  for (int i = 0; i < SCREEN_WIDTH; i++)
  {
    screen[i] = '#';
  }
  // Draw empty space
  for (int i = SCREEN_WIDTH; i < (SCREEN_HEIGHT - 2)*SCREEN_WIDTH; i++)
  {
    screen[i] = ' ';
  }
  // Draw side borders
  for (int i = 1; i < SCREEN_HEIGHT - 1; i++)
  {
    screen[i*SCREEN_WIDTH] = '#';
    screen[(i*SCREEN_WIDTH) + SCREEN_WIDTH - 1] = '#';
  }
  // Draw bottom of border
  for (int i = SCREEN_SIZE - SCREEN_WIDTH; i < SCREEN_SIZE; i++)
  {
    screen[i] = '#';
  }
*/
  // Draw borders
  WriteConsoleOutputCharacter(console, screen, SCREEN_WIDTH * SCREEN_HEIGHT,
                              coord, &chars_to_write);









  while(1);
  return 0;
}
