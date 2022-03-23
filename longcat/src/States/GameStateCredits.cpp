#include "GameStateCredits.h"

#include "../Game.h"
#include "../Utils/CatChars.h"

void GameStateCredits::update(Game &game)
{
  auto &arduboy = game.getArduboy();
  if (arduboy.justPressed(A_BUTTON) or arduboy.justPressed(B_BUTTON))
  {
    game.setGameState(GameState::MainMenu);
  }
}

void GameStateCredits::render(Game &game)
{
  auto &arduboy = game.getArduboy();
  CatChars::print(0, 15, true, "credits:");	
  CatChars::print(0, 35, true, "< jaguile6 <");	
  CatChars::print(0, 45, true, "< Dreamer2345 <");	
}