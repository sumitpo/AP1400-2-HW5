#ifndef INGREDIENT_H
#define INGREDIENT_H
#include <string>
class Ingredient {
public:
  virtual double get_price_unit() { return price_unit; }
  virtual size_t get_units() { return units; }
  virtual std::string get_name() = 0;

  virtual double price() { return units * price_unit; }
  virtual ~Ingredient() {};
  virtual Ingredient *copy() = 0;

protected:
  Ingredient(double price_unit, size_t units) {
    this->price_unit = price_unit;
    this->units = units;
  }

  double price_unit;
  size_t units;
  std::string name;
};

#endif // INGREDIENT_H
