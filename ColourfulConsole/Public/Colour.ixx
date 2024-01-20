export module Iconer.Utility.ColourfulConsole.Colour;
export import :Codes;
import <format>;

export namespace iconer::util::cfc
{
	struct [[nodiscard]] Colour
	{
		[[nodiscard]]
		constexpr ColourCodes GetCode() const noexcept
		{
			return myCode;
		}

		[[nodiscard]]
		constexpr std::uint16_t GetIntegerCode() const noexcept
		{
			return static_cast<std::uint16_t>(myCode);
		}

		[[nodiscard]]
		constexpr bool IsOk() const noexcept
		{
			return myCode != ColourCodes::Unknown;
		}

		[[nodiscard]]
		constexpr bool operator==(const Colour& rhs) const noexcept = default;

		ColourCodes myCode;
	};

	namespace colors
	{
		inline constexpr Colour Black{ ColourCodes::Black };
		inline constexpr Colour Blue{ ColourCodes::Blue };
		inline constexpr Colour Green{ ColourCodes::Green };
		inline constexpr Colour Aqua{ ColourCodes::Aqua };
		inline constexpr Colour Red{ ColourCodes::Red };
		inline constexpr Colour Purple{ ColourCodes::Purple };
		inline constexpr Colour Yellow{ ColourCodes::Yellow };
		inline constexpr Colour White{ ColourCodes::White };
		inline constexpr Colour Grey{ ColourCodes::Grey };
		inline constexpr Colour LightBlue{ ColourCodes::LightBlue };
		inline constexpr Colour LightGreen{ ColourCodes::LightGreen };
		inline constexpr Colour LightAqua{ ColourCodes::LightAqua };
		inline constexpr Colour LightRed{ ColourCodes::LightRed };
		inline constexpr Colour LightPurple{ ColourCodes::LightPurple };
		inline constexpr Colour LightYellow{ ColourCodes::LightYellow };
		inline constexpr Colour BrightYellow{ ColourCodes::BrightYellow };
		inline constexpr Colour Unknown{ ColourCodes::Unknown };
	}

	[[nodiscard]]
	constexpr Colour MakeColour(std::string_view name, std::uint16_t code) noexcept
	{
		return Colour
		{
			.myCode = static_cast<ColourCodes>(code)
		};
	}

	[[nodiscard]]
	constexpr Colour MakeColour(std::uint16_t code) noexcept
	{
		return Colour
		{
			.myCode = static_cast<ColourCodes>(code)
		};
	}
}
