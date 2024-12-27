#ifndef MOCHA_H
#define MOCHA_H

#include "espresso_based.h"
#include "ingredient.h"
#include "sub_ingredients.h"
#include <vector>
class Mocha : public EspressoBased {
public:
  Mocha();
  Mocha(const Mocha &cap);
  ~Mocha();
  void operator=(const Mocha &cap);

  virtual std::string get_name() { return name; }
  virtual double price();

  void add_side_item(Ingredient *side) { side_items.emplace_back(side); }
  std::vector<Ingredient *> &get_side_items() { return side_items; }

private:
  std::vector<Ingredient *> side_items;
};

#endif // CAPPUCCINO
