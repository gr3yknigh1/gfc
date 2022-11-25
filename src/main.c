#include <raylib.h>

#include "stdio.h"

int main() {
  InitWindow(1200, 900, "Game on Funcking C");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}
