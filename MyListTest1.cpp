#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include "List.h"
#include "ListNode.h"



TEST_CASE("Test list", "[list]") 
{
	List myList;

	SECTION("List empty or not empty")
	{
		INFO("Test Empty()");
		CHECK(myList.Empty() == true);
		myList.PushFront(1);
		CHECK(myList.Empty() == false);
	}

	SECTION("List size")
	{
		INFO("Test Size()");
		CHECK(myList.Size() == 0);
		myList.PushFront(1);
		CHECK(myList.Size() == 1);
	}

	SECTION("List clear")
	{
		INFO("Test Clear()");
		myList.PushFront(1);
		myList.Clear();
		CHECK(myList.Empty());

	}

	SECTION("List PopBack and PopFront empty list ")
	{
		CHECK(myList.PopBack() == 1);
		CHECK(myList.PopFront() == 1);
		
	}

	SECTION("Test List PushFront() and PushBack()")
	{
		myList.PushFront(1);
		myList.PushBack(2);
		CHECK(myList.PopBack() == 2);
		CHECK(myList.PopFront() == 1);
	}

}
int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
