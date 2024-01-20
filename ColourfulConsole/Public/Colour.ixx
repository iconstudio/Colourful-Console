export module Iconer.Utility.ColourfulConsole.Colour;
export import :Codes;
import <string>;
import <string_view>;

export namespace iconer::util::cfc
{
	struct [[nodiscard]] Colour
	{
		[[nodiscard]]
		constexpr std::string_view GetName() const noexcept
		{
			return myName;
		}

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
		friend constexpr bool operator==(const Colour& lhs, const Colour& rhs) noexcept
		{
			return lhs.myCode == rhs.myCode;
		}

		std::string_view myName;
		ColourCodes myCode;
	};

	namespace colors
	{
		inline constexpr Colour Black{ "k", ColourCodes::Black };
		inline constexpr Colour Blue{ "b", ColourCodes::Blue };
		inline constexpr Colour Green{ "g", ColourCodes::Green };
		inline constexpr Colour Aqua{ "a", ColourCodes::Aqua };
		inline constexpr Colour Red{ "r", ColourCodes::Red };
		inline constexpr Colour Purple{ "p", ColourCodes::Purple };
		inline constexpr Colour Yellow{ "y", ColourCodes::Yellow };
		inline constexpr Colour White{ "w", ColourCodes::White };
		inline constexpr Colour Grey{ "e", ColourCodes::Grey };
		inline constexpr Colour LightBlue{ "lb", ColourCodes::LightBlue };
		inline constexpr Colour LightGreen{ "lg", ColourCodes::LightGreen };
		inline constexpr Colour LightAqua{ "la", ColourCodes::LightAqua };
		inline constexpr Colour LightRed{ "lr", ColourCodes::LightRed };
		inline constexpr Colour LightPurple{ "lp", ColourCodes::LightPurple };
		inline constexpr Colour LightYellow{ "ly", ColourCodes::LightYellow };
		inline constexpr Colour BrightYellow{ "bw", ColourCodes::BrightYellow };
		inline constexpr Colour Unknown{ "*", ColourCodes::Unknown };
	}

	[[nodiscard]]
	constexpr Colour MakeColour(std::string_view name, std::uint16_t code) noexcept
	{
		return Colour
		{
			.myName = std::move(name),
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
