/**
 * VUEngine helloworld
 *
 * © Jorge Eremiev <jorgech3@gmail.com> and Christian Radke <c.radke@posteo.de>
 *
 * For the full copyright and license information, please view the LICENSE file
 * that was distributed with this source code.
 */
#include <Game.h>
#include <HelloWorldScreenState.h>

int main(void)
{
	Game::start(Game::getInstance(), GameState::safeCast(HelloWorldScreenState::getInstance()));
	return true;
}
