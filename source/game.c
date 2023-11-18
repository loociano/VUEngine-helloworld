#include <Game.h>
#include <HelloWorldScreenState.h>

int main(void)
{
	Game::start(Game::getInstance(), GameState::safeCast(HelloWorldScreenState::getInstance()));
	return true;
}
