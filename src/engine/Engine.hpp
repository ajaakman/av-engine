#include "../audio/Audio.hpp"
#include "../graphics/Graphics.hpp"

class Engine
{
public:
	Engine();

	void init();

private:
	Audio m_audio;
	Graphics m_graphics;
};