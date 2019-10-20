#include "Example.hpp"

Example::Example() : m_engine()
{
}

void Example::init()
{
	m_engine.init();
}

#ifdef EMSCRIPTEN
#include <emscripten/bind.h>

EMSCRIPTEN_BINDINGS(my_module) {
	emscripten::class_<Example>("Example")
		.constructor<>()
		.function("init", &Example::init);
}
#endif