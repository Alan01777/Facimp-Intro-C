#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor
 *seems not follow your orders.
 **/
int main()
{
  int lightX;    // the X position of the light of power
  int lightY;    // the Y position of the light of power
  int initialTX; // Thor's starting X position
  int initialTY; // Thor's starting Y position
  scanf("%d%d%d%d", &lightX, &lightY, &initialTX, &initialTY);

  int thorX = initialTX;
  int thorY = initialTY;

  // game loop
  while (1)
  {
    int remainingTurns;
    scanf("%d", &remainingTurns);

    char *tX = "", *tY = "";

    if (thorY > lightY){
      tY = "N";
      thorY++;
    }else if (thorY < lightY){
      tY = "S";
      thorY--;
    }

    if (thorX < lightX){
      tX = "E";
      thorX++;
    }else if (thorX > lightX){
      tX = "W";
      thorX--;
    }

    printf("%s%s\n", tY, tX);
  }

  return 0;
}
