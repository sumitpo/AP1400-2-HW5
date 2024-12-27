#ifndef SUB_INGREDIENTS_H
#define SUB_INGREDIENTS_H
#include "ingredient.h"

#define DEFCLASS(CLASSNAME, UNIT_NUM)                                          \
  class CLASSNAME : public Ingredient {                                        \
  public:                                                                      \
    CLASSNAME(size_t units) : Ingredient{UNIT_NUM, units} {                    \
      this->name = #CLASSNAME;                                                 \
      this->units = units;                                                     \
    }                                                                          \
    virtual Ingredient *copy() { return new CLASSNAME(units); }                \
    virtual std::string get_name() { return this->name; }                      \
  };

DEFCLASS(Cinnamon, 5);
DEFCLASS(Chocolate, 5);
DEFCLASS(Sugar, 1);
DEFCLASS(Cookie, 10);
DEFCLASS(Espresso, 15);
DEFCLASS(Milk, 10);
DEFCLASS(MilkFoam, 5);
DEFCLASS(Water, 1);

#endif // SUB_INGREDIENTS_H
