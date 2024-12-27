#include "espresso_based.h"

EspressoBased::~EspressoBased() {
  for (auto &i : ingredients)
    delete i;
  ingredients.clear();
}

EspressoBased::EspressoBased() {}

std::vector<Ingredient *> &EspressoBased::get_ingredients() {
  return ingredients;
}
