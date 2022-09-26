# Capstone_Snake_Game

## Additional Feature 1
The food is now separated from the game.cpp, I add a new class Food. Now the food has a new aspect: foodState, which is declared in a enum class. Also the food is changed from SDL_Point to a unique pointer, this allows us access the state of the food more efficiently. For now there're three states: 
 - a regular food (displayed in yellow) that increase your score by 1 point.
 - a bonus food (displayed in red) that can give you 2 points instead of 1.
 - a poison (displayed in green) that will decrease your score by 1.

The state of food is randomly generated, the probability of each state to appear is: 10% for bonus food, 10% for poisonous food, and 80% for regular food. After the food is determined, the Game::PlaceFood() method and Game::Update() method both are modified to incorporate the foodState. 
