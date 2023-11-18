#ifndef HELLO_WORLD_STATE_H_
#define HELLO_WORLD_STATE_H_

#include <GameState.h>

dynamic_singleton class HelloWorldScreenState : GameState
{
	static HelloWorldScreenState getInstance();
	override void enter(void* owner);
	override void suspend(void* owner);
	override void resume(void* owner);
}

#endif
