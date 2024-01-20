export module Iconer.Utility.ColourfulConsole;
export import Iconer.Utility.ColourfulConsole.Colour;
export import Iconer.Utility.ColourfulConsole.Palette;

export namespace iconer::util::cfc
{
	void SetConsoleColour(const Palette& pal) noexcept;
	void SetConsoleColour(Palette&& pal) noexcept;
	[[nodiscard]] Palette GetConsoleColour() noexcept;

	void ConsoleTextColour(const Colour& colour) noexcept;
	void ConsoleBackgroundColour(const Colour& colour) noexcept;
	void ConsoleTextColour(Colour&& colour) noexcept;
	void ConsoleBackgroundColour(Colour&& colour) noexcept;
	void ConsoleTextColour(size_t index) noexcept;
	void ConsoleBackgroundColour(size_t index) noexcept;
	[[nodiscard]] Colour ConsoleTextColour() noexcept;
	[[nodiscard]] Colour ConsoleBackgroundColour() noexcept;
}
