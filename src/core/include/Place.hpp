//
// Created by black on 27.05.18.
//

#pragma once


#include <IDrawable.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <memory>

namespace Engine
{
	/**
	 * @brief
	 * 		Base class for any structure in the project.
	 * @details
	 *		You should inherit every structure in the project, from this class.
	 *		It will allow you to make first layer of drawing.
	 */
	class Place : public mo::IDrawable
	{
	protected:
		std::string name;
		std::shared_ptr<sf::RectangleShape> drawable_;
	public:
		/**
		 * @brief Initialise new place with known size and map position.
		 * @param size
		 * @param position
		 */
		Place(sf::Vector2f const& size, sf::Vector2f const& position);

		sf::Drawable* getDrawable() final;
		virtual std::string const& getName();
	};
}

namespace eng = Engine;