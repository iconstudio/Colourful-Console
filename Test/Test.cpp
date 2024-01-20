#pragma comment(lib, "ColourfulConsole.lib")
import Iconer.Utility.ColourfulConsole;
import <iostream>;

int main()
{
	std::cout << "Hello World!\n";

	using namespace iconer::util::cfc;

	const auto fgcol = ConsoleTextColour();
	const auto bgcol = ConsoleBackgroundColour();
	const auto pal = GetConsoleColour();

	std::cout << "fgcol: " << fgcol.GetIntegerCode() << '\n';
	std::cout << "bgcol: " << bgcol.GetIntegerCode() << '\n';
	std::cout << '\n';

	ConsoleTextColour(colors::Black);
	std::cout << "fgcol (Black)";
	ConsoleTextColour(colors::White);
	std::cout << "<--- black is here\n";
	ConsoleTextColour(colors::Blue);
	std::cout << "fgcol (Blue)\n";
	ConsoleTextColour(colors::Green);
	std::cout << "fgcol (Green)\n";
	ConsoleTextColour(colors::Aqua);
	std::cout << "fgcol (Aqua)\n";
	ConsoleTextColour(colors::Red);
	std::cout << "fgcol (Red)\n";
	ConsoleTextColour(colors::Purple);
	std::cout << "fgcol (Purple)\n";
	ConsoleTextColour(colors::Yellow);
	std::cout << "fgcol (Yellow)\n";
	ConsoleTextColour(colors::White);
	std::cout << "fgcol (White)\n";
	ConsoleTextColour(colors::Grey);
	std::cout << "fgcol (Grey)\n";
	ConsoleTextColour(colors::LightBlue);
	std::cout << "fgcol (LightBlue)\n";
	ConsoleTextColour(colors::LightGreen);
	std::cout << "fgcol (LightGreen)\n";
	ConsoleTextColour(colors::LightAqua);
	std::cout << "fgcol (LightAqua)\n";
	ConsoleTextColour(colors::LightRed);
	std::cout << "fgcol (LightRed)\n";
	ConsoleTextColour(colors::LightPurple);
	std::cout << "fgcol (LightPurple)\n";
	ConsoleTextColour(colors::LightYellow);
	std::cout << "fgcol (LightYellow)\n";
	ConsoleTextColour(colors::BrightYellow);
	std::cout << "fgcol (BrightYellow)\n";
	std::cout << '\n';

	ConsoleBackgroundColour(colors::BrightYellow);
	std::cout << "bgcol (BrightYellow)";
	ConsoleTextColour(colors::White);
	ConsoleBackgroundColour(colors::Black);
	std::cout << "<--- bright yellow is here\n";
	ConsoleTextColour(colors::BrightYellow);
	ConsoleBackgroundColour(colors::LightYellow);
	std::cout << "bgcol (LightYellow)\n";
	ConsoleBackgroundColour(colors::LightPurple);
	std::cout << "bgcol (LightPurple)\n";
	ConsoleBackgroundColour(colors::LightRed);
	std::cout << "bgcol (LightRed)\n";
	ConsoleBackgroundColour(colors::LightAqua);
	std::cout << "bgcol (LightAqua)\n";
	ConsoleBackgroundColour(colors::LightGreen);
	std::cout << "bgcol (LightGreen)\n";
	ConsoleBackgroundColour(colors::LightBlue);
	std::cout << "bgcol (LightBlue)\n";
	ConsoleBackgroundColour(colors::Grey);
	std::cout << "bgcol (Grey)\n";
	ConsoleBackgroundColour(colors::White);
	std::cout << "bgcol (White)\n";
	ConsoleBackgroundColour(colors::Yellow);
	std::cout << "bgcol (Yellow)\n";
	ConsoleBackgroundColour(colors::Purple);
	std::cout << "bgcol (Purple)\n";
	ConsoleBackgroundColour(colors::Red);
	std::cout << "bgcol (Red)\n";
	ConsoleBackgroundColour(colors::Aqua);
	std::cout << "bgcol (Aqua)\n";
	ConsoleBackgroundColour(colors::Green);
	std::cout << "bgcol (Green)\n";
	ConsoleBackgroundColour(colors::Blue);
	std::cout << "bgcol (Blue)\n";
	ConsoleBackgroundColour(colors::Black);
	std::cout << "bgcol (Black)\n";
	std::cout << '\n';

	for (size_t i = 15; 0 < i; --i)
	{
		ConsoleTextColour(i);
		std::cout << '@';
	}
	std::cout << '\n';

	ConsoleTextColour(colors::Black);
	for (size_t i = 0; i < 16; ++i)
	{
		ConsoleBackgroundColour(i);
		std::cout << '@';
	}
	std::cout << "\n\n";

	for (size_t i = 0; i < 16; ++i)
	{
		ConsoleTextColour(i);

		for (size_t j = 15; 0 < j; --j)
		{
			ConsoleBackgroundColour(j);
			std::cout << '@';
		}

		ConsoleBackgroundColour(colors::Black);
		std::cout << '\n';
	}

	ConsoleTextColour(colors::White);
	std::cout << "\n\n";
}
