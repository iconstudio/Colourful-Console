export module Iconer.Utility.ColourfulConsole.Dye;
export import Iconer.Utility.ColourfulConsole.Colour;
export import Iconer.Utility.ColourfulConsole.Palette;
import <type_traits>;
import <concepts>;

export namespace iconer::util::cfc
{
	template<typename T>
	class Dye
	{
	public:
		static_assert(not std::is_reference_v<T>);

		constexpr Dye() noexcept(std::is_nothrow_default_constructible_v<T>) = default;
		constexpr ~Dye() noexcept(std::is_nothrow_destructible_v<T>) = default;

		constexpr Dye(const T& value, const Colour& text_colour)
			noexcept(std::is_nothrow_copy_constructible_v<T>)
			: myData(value), myPalette{ text_colour, colors::Black }
		{
			static_assert(std::copyable<T>);
		}

		constexpr Dye(const T& value, Colour&& text_colour)
			noexcept(std::is_nothrow_copy_constructible_v<T>)
			: myData(value), myPalette{ std::move(text_colour), colors::Black }
		{
			static_assert(std::copyable<T>);
		}

		constexpr Dye(const T& value, const Palette& palette)
			noexcept(std::is_nothrow_copy_constructible_v<T>)
			: myData(value), myPalette(palette)
		{
			static_assert(std::copyable<T>);
		}

		constexpr Dye(const T& value, Palette&& palette)
			noexcept(std::is_nothrow_copy_constructible_v<T>)
			: myData(value), myPalette(std::move(palette))
		{
			static_assert(std::copyable<T>);
		}

		constexpr Dye(T&& value, const Colour& text_colour)
			noexcept(std::is_nothrow_move_constructible_v<T>)
			: myData(std::move(value)), myPalette{ text_colour, colors::Black }
		{
			static_assert(std::movable<T>);
		}

		constexpr Dye(T&& value, Colour&& text_colour)
			noexcept(std::is_nothrow_move_constructible_v<T>)
			: myData(std::move(value)), myPalette{ std::move(text_colour), colors::Black }
		{
			static_assert(std::movable<T>);
		}

		constexpr Dye(T&& value, const Palette& palette)
			noexcept(std::is_nothrow_move_constructible_v<T>)
			: myData(std::move(value)), myPalette(palette)
		{
			static_assert(std::copyable<T>);
		}

		constexpr Dye(T&& value, Palette&& palette)
			noexcept(std::is_nothrow_move_constructible_v<T>)
			: myData(std::move(value)), myPalette(std::move(palette))
		{
			static_assert(std::copyable<T>);
		}

		[[nodiscard]]
		constexpr T& Get() & noexcept
		{
			return myData;
		}

		[[nodiscard]]
		constexpr const T& Get() const& noexcept
		{
			return myData;
		}

		[[nodiscard]]
		constexpr T&& Get() && noexcept
		{
			return std::move(myData);
		}

		[[nodiscard]]
		constexpr const T&& Get() const&& noexcept
		{
			return std::move(myData);
		}

		[[nodiscard]]
		explicit constexpr operator T() const noexcept
		{
			return myData;
		}

	private:
		T myData;
		Palette myPalette;
	};
}
