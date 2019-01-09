
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include <catch2/catch.hpp>

#include <glm/glm.hpp>

TEST_CASE("Most Basic Test Case")
{
  constexpr int a = 0;
  constexpr int b = 0;
  REQUIRE(TEST(a == 0));
  REQUIRE(TEST(b == 0));
  REQUIRE(TEST(a == b));
}
