export module Iconer.Utility.ColourfulConsole.Colour:Codes;
import <cstdint>;
import <limits>;

export namespace iconer::util::cfc
{
	enum class [[nodiscard]] ColourCodes : std::uint16_t
	{
		Black = 0,
		Blue = 1,
		Green = 2,
		Aqua = 3,
		Red = 4,
		Purple = 5,
		Yellow = 6,
		White = 7,
		Grey = 8, Gray = Grey,
		LightBlue = 9,
		LightGreen = 10, Lime = LightGreen,
		LightAqua = 11, Teal = LightAqua,
		LightRed = 12, PaleRed = LightRed,
		LightPurple = 13, Lavender = LightPurple,
		LightYellow = 14,
		BrightYellow = 15,
		Unknown = static_cast<std::uint16_t>(-256)
	};
}
