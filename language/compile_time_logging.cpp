/*
Turn log strings into types and at compile time.
*/

#include <iostream>
#include <string_view>

/*
A template to hold a series of characters. I.e. turn a string into a type.
*/
template <class CharT, CharT... Chars>
struct string_constant {
  // Compile-time access to the characters as a CharT array.
  constexpr static CharT storage[sizeof...(Chars)]{Chars...};

  // A basic_string_view lets us access the storage in a std::string like
  // fashion.
  using sv_t = std::basic_string_view<CharT>;
  constexpr static sv_t value{storage, sizeof...(Chars)};
};

// Cumbersome, but the most low-level way of creating strings
using hello_world_sc = string_constant<char, 'H', 'e', 'l', 'l', 'o'>;

// Helper, utilizing custom string literal operators (User Defined Literals
// (UDL))
template <class T, T... Chars>
constexpr string_constant<T, Chars...> operator""_sc() {
  return {};
}

int main() {
  // String is turned into a type 
  // string_constant<char, 'H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l',
  // 'd'>
  // Notice that we can use constexpr. The string is never part of the compiled
  // code.
  constexpr auto hello_world_easy_sc = "Hello world"_sc;

  std::cout << hello_world_easy_sc.value << std::endl;
  return 0;
}