#include "InputManager.h"
using namespace sf;

namespace BreakOut
{
	bool InputManager::IsSpriteClicked(Sprite object, Mouse::Button button, RenderWindow& window)
	{
		if (Mouse::isButtonPressed(button))
		{
			IntRect tempRect(object.getPosition().x, object.getPosition().y, object.getGlobalBounds().width, object.getGlobalBounds().height);

			if (tempRect.contains(Mouse::getPosition(window)))
			{
				return true;
			}
		}
		else
			return false;

	}

	Vector2i InputManager::GetMousePosition(RenderWindow& window)
	{
		return Mouse::getPosition(window);
	}
}
