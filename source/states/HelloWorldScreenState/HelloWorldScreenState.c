#include <string.h>

#include <Game.h>
#include <Printing.h>
#include <HelloWorldScreenState.h>

extern StageROMSpec HelloWorldStage;

void HelloWorldScreenState::constructor()
{
	Base::constructor();
}

void HelloWorldScreenState::destructor()
{
	Base::destructor();
}

void HelloWorldScreenState::enter(void* owner __attribute__ ((unused)))
{
	Base::enter(this, owner);
	GameState::loadStage(GameState::safeCast(this), (StageSpec*)&HelloWorldStage, NULL, true, false);
	HelloWorldScreenState::print(this);
	Game::enableKeypad(Game::getInstance());
}

void HelloWorldScreenState::suspend(void* owner)
{
	Base::suspend(this, owner);
}

void HelloWorldScreenState::resume(void* owner)
{
	Base::resume(this, owner);
	HelloWorldScreenState::print(this);
}

void HelloWorldScreenState::print()
{
	const char* strHelloWorld = "Hello World";
	FontSize textSize = Printing::getTextSize(
		Printing::getInstance(), 
		strHelloWorld, 
		"Default"  // Font.
	);
	Printing::text(
		Printing::getInstance(),
		strHelloWorld,
		(__SCREEN_WIDTH >> 4) - (textSize.x >> 1),  // x.
		12,  // y.
		"Default"  // Font.
	);
}