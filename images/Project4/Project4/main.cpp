#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1440, 960), "Example");
	
	sf::Texture texture;
	if (!texture.loadFromFile("../../Go.png")) {
		return 0;
	}
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setScale(0.416f, 0.37f);
	sprite.setPosition(sf::Vector2f(1135.f, 835.f));

	sf::Texture texture2;
	if (!texture2.loadFromFile("../../jail.png")) {
		return 0;
	}
	sf::Sprite sprite2;
	sprite2.setTexture(texture2);
	sprite2.setScale(0.178f, 0.17f);
	sprite2.setPosition(sf::Vector2f(180.f, 835.f));

	sf::Texture texture3;
	if (!texture3.loadFromFile("../../Free parking.png")) {
		return 0;
	}
	sf::Sprite sprite3;
	sprite3.setTexture(texture3);
	sprite3.setScale(0.195f, 0.132f);
	sprite3.setPosition(sf::Vector2f(295.f, 125.f));
	sprite3.setRotation(180.f);

	sf::Texture texture4;
	if (!texture4.loadFromFile("../../GO to jail.png")) {
		return 0;
	}
	sf::Sprite sprite4;
	sprite4.setTexture(texture4);
	sprite4.setScale(0.55f, 0.47f);
	sprite4.setPosition(sf::Vector2f(1260.f, 125.f));
	sprite4.setRotation(180.f);


	sf::Font font;
	if (!font.loadFromFile("../../TrajanPro-Regular.ttf"))
	{
		return 0;
	}

	sf::Font font2;
	if (!font2.loadFromFile("../../futur.ttf"))
	{
		return 0;
	}

	sf::Font font3;
	if (!font3.loadFromFile("../../Champagne & Limousines.ttf"))
	{
		return 0;
	}

	/*sf::Text text2;
	text2.setFont(font2);
	text2.setString("HYD");
	text2.setPosition(420.0f, 550.f);
	text2.setRotation(90.0f);
	text2.setCharacterSize(12);
	text2.setFillColor(sf::Color::Black);

	sf::Text text3;
	text3.setFont(font2);
	text3.setString("VJY");
	text3.setPosition(420.0f, 490.f);
	text3.setRotation(90.0f);
	text3.setCharacterSize(12);
	text3.setFillColor(sf::Color::Black);

	sf::Text text4;
	text4.setFont(font2);
	text4.setString("CHE");
	text4.setPosition(420.0f, 350.f);
	text4.setRotation(90.0f);
	text4.setCharacterSize(12);
	text4.setFillColor(sf::Color::Black);*/

	sf::RectangleShape rectangle1(sf::Vector2f(1080.f, 920.f));
	rectangle1.setPosition(180.0f, 20.f);
	rectangle1.setOutlineThickness(10.f);
	rectangle1.setOutlineColor(sf::Color::Cyan);
	rectangle1.setFillColor(sf::Color::Black);

	sf::RectangleShape rectangle2(sf::Vector2f(920.f, 10.f));
	rectangle2.setPosition(305.0f, 20.f);
	rectangle2.setFillColor(sf::Color::Cyan);
	rectangle2.setRotation(90.f);
	//170 thickness from edge for a line.

	sf::RectangleShape rectangle3(sf::Vector2f(920.f, 10.f));
	rectangle3.setPosition(1135.0f, 20.f);
	rectangle3.setFillColor(sf::Color::Cyan);
	rectangle3.setRotation(90.f);

	sf::RectangleShape rectangle4(sf::Vector2f(1080.f, 10.f));
	rectangle4.setPosition(180.0f, 125.f);
	rectangle4.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle5(sf::Vector2f(1080.f, 10.f));
	rectangle5.setPosition(180.0f, 825.f);
	rectangle5.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle6_1(sf::Vector2f(125.f, 10.f));
	rectangle6_1.setPosition(180.0f, 747.216f);
	rectangle6_1.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle6_2(sf::Vector2f(125.f, 10.f));
	rectangle6_2.setPosition(180.0f, 669.439f);
	rectangle6_2.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle6_3(sf::Vector2f(125.f, 10.f));
	rectangle6_3.setPosition(180.0f, 591.662f);
	rectangle6_3.setFillColor(sf::Color::Cyan);
	
	sf::RectangleShape rectangle6_4(sf::Vector2f(125.f, 10.f));
	rectangle6_4.setPosition(180.0f, 513.885f);
	rectangle6_4.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle6_5(sf::Vector2f(125.f, 10.f));
	rectangle6_5.setPosition(180.0f, 436.108f);
	rectangle6_5.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle6_6(sf::Vector2f(125.f, 10.f));
	rectangle6_6.setPosition(180.0f, 358.331f);
	rectangle6_6.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle6_7(sf::Vector2f(125.f, 10.f));
	rectangle6_7.setPosition(180.0f, 280.554f);
	rectangle6_7.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle6_8(sf::Vector2f(125.f, 10.f));
	rectangle6_8.setPosition(180.0f, 202.777f);
	rectangle6_8.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle6_9(sf::Vector2f(125.f, 10.f));
	rectangle6_9.setPosition(180.0f, 125.0f);
	rectangle6_9.setFillColor(sf::Color::Cyan);

	//76.6667 left for each one.

	// right side ones
	sf::RectangleShape rectangle7_1(sf::Vector2f(125.f, 10.f));
	rectangle7_1.setPosition(1135.0f, 747.216f);
	rectangle7_1.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle7_2(sf::Vector2f(125.f, 10.f));
	rectangle7_2.setPosition(1135.0f, 669.439f);
	rectangle7_2.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle7_3(sf::Vector2f(125.f, 10.f));
	rectangle7_3.setPosition(1135.0f, 591.662f);
	rectangle7_3.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle7_4(sf::Vector2f(125.f, 10.f));
	rectangle7_4.setPosition(1135.0f, 513.885f);
	rectangle7_4.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle7_5(sf::Vector2f(125.f, 10.f));
	rectangle7_5.setPosition(1135.0f, 436.108f);
	rectangle7_5.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle7_6(sf::Vector2f(125.f, 10.f));
	rectangle7_6.setPosition(1135.0f, 358.331f);
	rectangle7_6.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle7_7(sf::Vector2f(125.f, 10.f));
	rectangle7_7.setPosition(1135.0f, 280.554f);
	rectangle7_7.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle7_8(sf::Vector2f(125.f, 10.f));
	rectangle7_8.setPosition(1135.0f, 202.777f);
	rectangle7_8.setFillColor(sf::Color::Cyan);

	sf::RectangleShape rectangle7_9(sf::Vector2f(125.f, 10.f));
	rectangle7_9.setPosition(1135.0f, 125.0f);
	rectangle7_9.setFillColor(sf::Color::Cyan);


	
	sf::RectangleShape rectangle8_1(sf::Vector2f(105.f, 10.f));
	rectangle8_1.setPosition(397.222f, 20.f);
	rectangle8_1.setFillColor(sf::Color::Cyan);
	rectangle8_1.setRotation(90.f);

	sf::RectangleShape rectangle8_2(sf::Vector2f(105.f, 10.f));
	rectangle8_2.setPosition(489.444f, 20.f);
	rectangle8_2.setFillColor(sf::Color::Cyan);
	rectangle8_2.setRotation(90.f);

	sf::RectangleShape rectangle8_3(sf::Vector2f(105.f, 10.f));
	rectangle8_3.setPosition(581.666f, 20.f);
	rectangle8_3.setFillColor(sf::Color::Cyan);
	rectangle8_3.setRotation(90.f);

	sf::RectangleShape rectangle8_4(sf::Vector2f(105.f, 10.f));
	rectangle8_4.setPosition(673.888f, 20.f);
	rectangle8_4.setFillColor(sf::Color::Cyan);
	rectangle8_4.setRotation(90.f);
	sf::RectangleShape rectangle8_5(sf::Vector2f(105.f, 10.f));
	rectangle8_5.setPosition(766.11f, 20.f);
	rectangle8_5.setFillColor(sf::Color::Cyan);
	rectangle8_5.setRotation(90.f);

	sf::RectangleShape rectangle8_6(sf::Vector2f(105.f, 10.f));
	rectangle8_6.setPosition(858.332f, 20.f);
	rectangle8_6.setFillColor(sf::Color::Cyan);
	rectangle8_6.setRotation(90.f);

	sf::RectangleShape rectangle8_7(sf::Vector2f(105.f, 10.f));
	rectangle8_7.setPosition(950.554f, 20.f);
	rectangle8_7.setFillColor(sf::Color::Cyan);
	rectangle8_7.setRotation(90.f);

	sf::RectangleShape rectangle8_8(sf::Vector2f(105.f, 10.f));
	rectangle8_8.setPosition(1042.774f, 20.f);
	rectangle8_8.setFillColor(sf::Color::Cyan);
	rectangle8_8.setRotation(90.f);

	sf::RectangleShape rectangle8_9(sf::Vector2f(105.f, 10.f));
	rectangle8_9.setPosition(1135.0f, 20.f);
	rectangle8_9.setFillColor(sf::Color::Cyan);
	rectangle8_9.setRotation(90.f);

	//bottom
	sf::RectangleShape rectangle9_1(sf::Vector2f(105.f, 10.f));
	rectangle9_1.setPosition(397.222f, 835.f);
	rectangle9_1.setFillColor(sf::Color::Cyan);
	rectangle9_1.setRotation(90.f);

	sf::RectangleShape rectangle9_2(sf::Vector2f(105.f, 10.f));
	rectangle9_2.setPosition(489.444f, 835.f);
	rectangle9_2.setFillColor(sf::Color::Cyan);
	rectangle9_2.setRotation(90.f);

	sf::RectangleShape rectangle9_3(sf::Vector2f(105.f, 10.f));
	rectangle9_3.setPosition(581.666f, 835.f);
	rectangle9_3.setFillColor(sf::Color::Cyan);
	rectangle9_3.setRotation(90.f);

	sf::RectangleShape rectangle9_4(sf::Vector2f(105.f, 10.f));
	rectangle9_4.setPosition(673.888f, 835.f);
	rectangle9_4.setFillColor(sf::Color::Cyan);
	rectangle9_4.setRotation(90.f);

	sf::RectangleShape rectangle9_5(sf::Vector2f(105.f, 10.f));
	rectangle9_5.setPosition(766.11f, 835.f);
	rectangle9_5.setFillColor(sf::Color::Cyan);
	rectangle9_5.setRotation(90.f);

	sf::RectangleShape rectangle9_6(sf::Vector2f(105.f, 10.f));
	rectangle9_6.setPosition(858.332f, 835.f);
	rectangle9_6.setFillColor(sf::Color::Cyan);
	rectangle9_6.setRotation(90.f);

	sf::RectangleShape rectangle9_7(sf::Vector2f(105.f, 10.f));
	rectangle9_7.setPosition(950.554f, 835.f);
	rectangle9_7.setFillColor(sf::Color::Cyan);
	rectangle9_7.setRotation(90.f);

	sf::RectangleShape rectangle9_8(sf::Vector2f(105.f, 10.f));
	rectangle9_8.setPosition(1042.774f, 835.f);
	rectangle9_8.setFillColor(sf::Color::Cyan);
	rectangle9_8.setRotation(90.f);

	sf::RectangleShape rectangle9_9(sf::Vector2f(105.f, 10.f));
	rectangle9_9.setPosition(1135.0f, 835.f);
	rectangle9_9.setFillColor(sf::Color::Cyan);
	rectangle9_9.setRotation(90.f);

	//Left Colored

	sf::RectangleShape rectangle_red1(sf::Vector2f(67.777f, 20.f));
	rectangle_red1.setPosition(295.f, 757.223f);
	rectangle_red1.setFillColor(sf::Color::Red);
	rectangle_red1.setRotation(90.f);

	sf::RectangleShape rectangle_red2(sf::Vector2f(67.777f, 20.f));
	rectangle_red2.setPosition(295.f, 601.669f);
	rectangle_red2.setFillColor(sf::Color::Red);
	rectangle_red2.setRotation(90.f);

	sf::RectangleShape rectangle_red3(sf::Vector2f(67.777f, 20.f));
	rectangle_red3.setPosition(295.f, 523.892f);
	rectangle_red3.setFillColor(sf::Color::Red);
	rectangle_red3.setRotation(90.f);
	//orange
	sf::RectangleShape rectangle_pink1(sf::Vector2f(67.777f, 20.f));
	rectangle_pink1.setPosition(295.f, 368.338f);
	rectangle_pink1.setFillColor(sf::Color::Magenta);
	rectangle_pink1.setRotation(90.f);

	sf::RectangleShape rectangle_pink2(sf::Vector2f(67.777f, 20.f));
	rectangle_pink2.setPosition(295.f, 212.784f);
	rectangle_pink2.setFillColor(sf::Color::Magenta);
	rectangle_pink2.setRotation(90.f);

	sf::RectangleShape rectangle_pink3(sf::Vector2f(67.777f, 20.f));
	rectangle_pink3.setPosition(295.f, 135.007f);
	rectangle_pink3.setFillColor(sf::Color::Magenta);
	rectangle_pink3.setRotation(90.f);
	
	//gold
	sf::RectangleShape rectangle_gold1(sf::Vector2f(82.222f, 20.f));
	rectangle_gold1.setPosition(305.f, 105.f);
	rectangle_gold1.setFillColor(sf::Color(253, 227, 167));

	sf::RectangleShape rectangle_gold2(sf::Vector2f(82.222f, 20.f));
	rectangle_gold2.setPosition(489.444f, 105.f);
	rectangle_gold2.setFillColor(sf::Color(253, 227, 167));

	sf::RectangleShape rectangle_gold3(sf::Vector2f(82.222f, 20.f));
	rectangle_gold3.setPosition(581.66f, 105.f);
	rectangle_gold3.setFillColor(sf::Color(253, 227, 167));

	//Yellow
	sf::RectangleShape rectangle_yellow1(sf::Vector2f(82.222f, 20.f));
	rectangle_yellow1.setPosition(766.11f, 105.f);
	rectangle_yellow1.setFillColor(sf::Color(255, 203, 5));

	sf::RectangleShape rectangle_yellow2(sf::Vector2f(82.222f, 20.f));
	rectangle_yellow2.setPosition(950.554f, 105.f);
	rectangle_yellow2.setFillColor(sf::Color(255, 203, 5));

	sf::RectangleShape rectangle_yellow3(sf::Vector2f(82.222f, 20.f));
	rectangle_yellow3.setPosition(1042.774f, 105.f);
	rectangle_yellow3.setFillColor(sf::Color(255, 203, 5));

	//Right Colored
	//blue
	sf::RectangleShape rectangle_blue1(sf::Vector2f(67.777f, 20.f));
	rectangle_blue1.setPosition(1155.f, 757.223f);
	rectangle_blue1.setFillColor(sf::Color::Blue);
	rectangle_blue1.setRotation(90.f);

	sf::RectangleShape rectangle_blue2(sf::Vector2f(67.777f, 20.f));
	rectangle_blue2.setPosition(1155.f, 601.669f);
	rectangle_blue2.setFillColor(sf::Color::Blue);
	rectangle_blue2.setRotation(90.f);

	//green
	sf::RectangleShape rectangle_green1(sf::Vector2f(67.777f, 20.f));
	rectangle_green1.setPosition(1155.f, 368.338f);
	rectangle_green1.setFillColor(sf::Color::Green);
	rectangle_green1.setRotation(90.f);

	sf::RectangleShape rectangle_green2(sf::Vector2f(67.777f, 20.f));
	rectangle_green2.setPosition(1155.f, 212.784f);
	rectangle_green2.setFillColor(sf::Color::Green);
	rectangle_green2.setRotation(90.f);

	sf::RectangleShape rectangle_green3(sf::Vector2f(67.777f, 20.f));
	rectangle_green3.setPosition(1155.f, 135.007f);
	rectangle_green3.setFillColor(sf::Color::Green);
	rectangle_green3.setRotation(90.f);

	//bottom colored
	//darker green
	sf::RectangleShape rectangle_drgrn1(sf::Vector2f(82.222f, 20.f));
	rectangle_drgrn1.setPosition(305.f, 835.f);
	rectangle_drgrn1.setFillColor(sf::Color(27, 163, 157));

	sf::RectangleShape rectangle_drgrn2(sf::Vector2f(82.222f, 20.f));
	rectangle_drgrn2.setPosition(489.444f, 835.f);
	rectangle_drgrn2.setFillColor(sf::Color(27, 163, 157));

	sf::RectangleShape rectangle_drgrn3(sf::Vector2f(82.222f, 20.f));
	rectangle_drgrn3.setPosition(581.66f, 835.f);
	rectangle_drgrn3.setFillColor(sf::Color(27, 163, 157));

	//shamrock

	sf::RectangleShape rectangle_shamrock1(sf::Vector2f(82.222f, 20.f));
	rectangle_shamrock1.setPosition(857.778f, 835.f);
	rectangle_shamrock1.setFillColor(sf::Color(135, 211, 124));

	sf::RectangleShape rectangle_shamrock2(sf::Vector2f(82.222f, 20.f));
	rectangle_shamrock2.setPosition(1042.774f, 835.f);
	rectangle_shamrock2.setFillColor(sf::Color(135, 211, 124));

	//Start the text
	sf::Text text;
	text.setFont(font);
	text.setString("Monopoly");
	text.setPosition(560.0f, 560.f);
	text.setRotation(315.0f);
	text.setCharacterSize(48);
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	text.setLetterSpacing(3);
	



	sf::Event event;

	while (window.isOpen()) {

		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) {

				window.close();
			}
		}
		window.clear();
		//window.draw(sprite2);
		
		/*window.draw(text2);
		window.draw(text3);
		window.draw(text4);*/
		window.draw(rectangle1);
		window.draw(rectangle2);
		window.draw(rectangle3);
		window.draw(rectangle4);
		window.draw(rectangle5);
		
		window.draw(rectangle6_1);
		window.draw(rectangle6_2);
		window.draw(rectangle6_3);
		window.draw(rectangle6_4);
		window.draw(rectangle6_5);
		window.draw(rectangle6_6);
		window.draw(rectangle6_7);
		window.draw(rectangle6_8);
		window.draw(rectangle6_9);

		window.draw(rectangle7_1);
		window.draw(rectangle7_2);
		window.draw(rectangle7_3);
		window.draw(rectangle7_4);
		window.draw(rectangle7_5);
		window.draw(rectangle7_6);
		window.draw(rectangle7_7);
		window.draw(rectangle7_8);
		window.draw(rectangle7_9);

		window.draw(rectangle8_1);
		window.draw(rectangle8_2);
		window.draw(rectangle8_3);
		window.draw(rectangle8_4);
		window.draw(rectangle8_5);
		window.draw(rectangle8_6);
		window.draw(rectangle8_7);
		window.draw(rectangle8_8);
		window.draw(rectangle8_9);

		window.draw(rectangle9_1);
		window.draw(rectangle9_2);
		window.draw(rectangle9_3);
		window.draw(rectangle9_4);
		window.draw(rectangle9_5);
		window.draw(rectangle9_6);
		window.draw(rectangle9_7);
		window.draw(rectangle9_8);
		window.draw(rectangle9_9);

		window.draw(rectangle_red1);
		window.draw(rectangle_red2);
		window.draw(rectangle_red3);
		
		window.draw(rectangle_pink1);
		window.draw(rectangle_pink2);
		window.draw(rectangle_pink3);

		window.draw(rectangle_gold1);
		window.draw(rectangle_gold2);
		window.draw(rectangle_gold3);

		window.draw(rectangle_yellow1);
		window.draw(rectangle_yellow2);
		window.draw(rectangle_yellow3);
		
		window.draw(rectangle_green1);
		window.draw(rectangle_green2);
		window.draw(rectangle_green3);
		
		window.draw(rectangle_blue1);
		window.draw(rectangle_blue2);
		
		window.draw(rectangle_drgrn1);
		window.draw(rectangle_drgrn2);
		window.draw(rectangle_drgrn3);

		window.draw(rectangle_shamrock1);
		window.draw(rectangle_shamrock2);

		window.draw(text);
		window.draw(sprite);
		window.draw(sprite2);
		window.draw(sprite3);
		window.draw(sprite4);
		window.display();
	}

	return 0;
}

