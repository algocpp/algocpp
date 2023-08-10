#define BOOST_TEST_MAIN
#include <bits/stdc++.h>
#include <boost/test/included/unit_test.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <algocpp/all.hpp>

namespace mp = boost::multiprecision;

// math::fact 通常テスト
BOOST_AUTO_TEST_CASE(fact_nomal)
{
	BOOST_CHECK(algocpp::math::fact(3) == 6);
}

// math::fact Boostテスト
BOOST_AUTO_TEST_CASE(fact_boost_mp)
{
	mp::cpp_int n = 40;
	BOOST_CHECK(algocpp::math::fact(n).str() == "815915283247897734345611269596115894272000000000");
}

// math::fact 負の例外テスト
BOOST_AUTO_TEST_CASE(fact_exception)
{
	BOOST_CHECK_THROW(algocpp::math::fact(-1), algocpp::exception::numeric_error);
}

// math::isprime 素数
BOOST_AUTO_TEST_CASE(isprime_prime)
{
	BOOST_CHECK(algocpp::math::isprime(524287));
}

// math::isprime 偶数
BOOST_AUTO_TEST_CASE(isprime_even)
{
	BOOST_CHECK(!algocpp::math::isprime(34567892));
}

// math::isprime 非素数奇数
BOOST_AUTO_TEST_CASE(isprime_not_prime)
{
	BOOST_CHECK(!algocpp::math::isprime(748297483));
}
