#include "cappuccino.h"
Cappuccino::Cappuccino() {
  name = "Cappuccino";
  Ingredient *esp = new Espresso(2);
  Ingredient *milk = new Milk(2);
  Ingredient *milkFoam = new MilkFoam(1);
  ingredients.emplace_back(esp);
  ingredients.emplace_back(milk);
  ingredients.emplace_back(milkFoam);
}
Cappuccino::Cappuccino(const Cappuccino &cap) {
  name = cap.name;
  ingredients = cap.ingredients;
  side_items = cap.side_items;
}
Cappuccino::~Cappuccino() {
  for (auto i : side_items)
    delete i;
  side_items.clear();
}
void Cappuccino::operator=(const Cappuccino &cap) {
  name = cap.name;
  for (const auto &i : cap.ingredients)
    ingredients.emplace_back(i->copy());
  for (const auto &i : cap.side_items)
    side_items.emplace_back(i->copy());
}

double Cappuccino::price() {
  double total_price = 0;
  for (const auto &i : ingredients)
    total_price += i->price();
  for (int i = 0; i < side_items.size(); i++) {
    total_price += side_items[i]->price();
  }
  return total_price;
}
