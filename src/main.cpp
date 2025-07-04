#include "colors.h"
#include "game.h"
#include <iostream>
#include <raylib.h>

double lastUpdateTime = 0;

bool EventTriggered(double interval) {
  double currentTime = GetTime();
  if (currentTime - lastUpdateTime >= interval) {
    lastUpdateTime = currentTime;
    return true;
  }
  return false;
}

int main() {
  const int screenWidth = 500;
  const int screenHeight = 620;

  InitWindow(screenWidth, screenHeight, "Tetris");
  SetTargetFPS(60);

  Font font = LoadFontEx("resources/fonts/monogram.ttf", 64, 0, 0);

  Game game = Game();

  while (!WindowShouldClose()) {
    game.HandleInput();
    if (EventTriggered(0.2)) {
      game.MoveBlockDown();
    }
    BeginDrawing();
    ClearBackground(BLACK);
    DrawTextEx(font, "Score", {365, 15}, 38, 2, GREEN);
    DrawTextEx(font, "Next", {370, 175}, 38, 2, GREEN);
    if (game.gameOver) {
      DrawTextEx(font, "GAME OVER", {326, 450}, 25, 2, GREEN);
    }
    DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, dark_grey);

    char scoreText[10];
    sprintf(scoreText, "%d", game.score);
    Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);

    DrawTextEx(font, scoreText, {320 + (170 - textSize.x) / 2, 65}, 38, 2,
               GREEN);
    DrawRectangleRounded({320, 215, 170, 180}, 0.3, 6, dark_grey);
    game.Draw();
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
