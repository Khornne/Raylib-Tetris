#include "colors.h"

const Color dark_grey{80, 80, 80, 255};
const Color green{0, 228, 48, 255};
const Color red{230, 41, 55, 255};
const Color orange{55, 161, 0, 255};
const Color yellow{253, 249, 0, 255};
const Color pruple{200, 122, 255, 255};
const Color light_blue{102, 191, 255, 255};
const Color blue{0, 121, 241, 255};

std::vector<Color> GetCellColors() {

  return {dark_grey, green, red, orange, yellow, pruple, light_blue, blue};
}
