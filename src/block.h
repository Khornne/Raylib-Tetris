#pragma once
#include "colors.h"
#include "position.h"
#include <map>
#include <vector>

class Block {
public:
  Block();
  void Draw(int offsetX, int offsetY);
  void Move(int rows, int columns);
  std::vector<Position> GetCellPositions();
  void Rotate();
  void UndoRotation();
  int id;
  std::map<int, std::vector<Position>> cells;

private:
  int cellSize;
  int rotationState;
  std::vector<Color> colors;
  int rowOffset;
  int colOffset;
};
