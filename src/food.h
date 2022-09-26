#ifndef FOOD_H
#define FOOD_H

enum class foodState { regular, bonus, poison };
class Food {
   public:
    int x;
    int y;
    foodState state;
    Food() : x(0), y(0), state(foodState::regular) {}
    Food(int x, int y, foodState type) : x(x), y(y), state(type) {}
    ~Food() {}

   private:
};

#endif