
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include <catch2/catch.hpp>

#include <glm/glm.hpp>

#if defined(RELAXED_CONSTEXPR)
#define TEST(X) X
#define CONSTEXPR
#else
#define TEST(X) static_test<X>()
#define CONSTEXPR constexpr
#endif

template<bool B> bool static_test()
{
  static_assert(B);
  return B;
}

TEST_CASE("Most Basic Test Case")
{
  constexpr int a = 0;
  constexpr int b = 0;
  REQUIRE(TEST(a == 0));
  REQUIRE(TEST(b == 0));
  REQUIRE(TEST(a == b));
}
