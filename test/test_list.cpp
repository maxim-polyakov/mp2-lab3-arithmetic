#include <gtest.h>
#include "list.h"

TEST(List, can_create_list){
	List<char> *list;
	ASSERT_NO_THROW(list = new List<char>());
}

TEST(List, can_create_copied_list) {
	List<char> list1;
	list1.InsertLast(1);
	ASSERT_NO_THROW(List<char> list2(list1));
}
TEST(List, copied_list_is_equal_to_sourse_one){

	List<char> list1;
	list1.InsertLast(1);
	List<char> list2(list1);
	EXPECT_EQ(list2.getFirst()->key, 1);
};

TEST(List, can_print_list) {
	List<char> list1;
	list1.InsertLast(25);
	ASSERT_NO_THROW(list1.Print());
}

TEST(List, can_print_empty_list) {
	List<char> list1;
	ASSERT_NO_THROW(list1.Print());
}

TEST(List, can_insert_last_element) {
	List<char> list;
	list.InsertFirst(2);
	ASSERT_NO_THROW(list.InsertLast(5));
}

TEST(List, can_insert_last_element_when_list_is_empty) {
	List<char> list;
	ASSERT_NO_THROW(list.InsertLast(5));
}

TEST(List, list_after_insertion_last_peek_right) {
	List<char> list;
	list.InsertLast(5);
	EXPECT_EQ(5, list.getFirst()->key);
}

TEST(List, list_after_insertion_first_peek_right) {
	List<char> list;
	list.InsertFirst(5);
	EXPECT_EQ(list.getFirst()->key, 5);
}

TEST(List, can_get_first) {
	List<char> list;
	list.InsertLast(8);
	list.InsertLast(10);
	list.InsertLast(11);
	ASSERT_NO_THROW(list.getFirst());
}

TEST(List, can_get_first_key){
	List<char> list;
	list.InsertLast(5);
	list.InsertLast(7);
	list.InsertLast(9);
	EXPECT_EQ(5, list.getFirst()->key);
}

TEST(List, throws_when_insert_after_in_empty_list) {
	List<char> list;
	Node<char> *elem = new Node<char>;
	elem->key = 1;
	ASSERT_ANY_THROW(list.InsertAfter(5, elem));
}

TEST(List, throws_when_try_erase_in_empty_list) {
	List<char> list;
	ASSERT_ANY_THROW(list.erase(1));
}

TEST(List, can_search_element_with_actual_value) {
	List<char> list1;
	list1.InsertLast(8);
	list1.InsertLast(4);
	list1.InsertLast(3);
	list1.InsertLast(2);
	ASSERT_TRUE(list1.Search(3) != 0);
}

TEST(List, return_null_when_cant_search_element) {
	List<char> list1;
	list1.InsertLast(2);
	list1.InsertLast(10);
	list1.InsertLast(7);
	list1.InsertLast(9);
	ASSERT_TRUE(list1.Search(11) == 0);
}

TEST(List, throws_when_search_in_empty_list) {
	List<char> list1;
	ASSERT_ANY_THROW(list1.Search(11));
}

TEST(List, can_erase_element_with_actual_value) {
	List<char> list1;
	list1.InsertLast(3);
	list1.InsertLast(5);
	list1.InsertLast(1);
	list1.InsertLast(8);
	ASSERT_NO_THROW(list1.erase(5));
}

TEST(List, throws_when_try_erase_not_actual_value) {
	List<char> list1;
	list1.InsertLast(3);
	list1.InsertLast(4);
	list1.InsertLast(2);
	list1.InsertLast(1);
	ASSERT_ANY_THROW(list1.erase(11));
}

TEST(List, can_erase_first_element) {
	List<char> list1;
	list1.InsertLast(2);
	list1.InsertLast(5);
	list1.InsertLast(3);
	list1.InsertLast(6);
	ASSERT_NO_THROW(list1.erase(2));
}

TEST(List, can_insert_before_when_it_first) {
	List<char> list;
	list.InsertLast(4);
	list.InsertLast(5);
	list.InsertLast(3);
	Node<char> *elem = new Node<char>;
	elem->key = 1;
	ASSERT_NO_THROW(list.InsertBefore(5, elem));
}

TEST(List, throws_when_cant_find_place_to_insert_before) {
	List<char> list;
	list.InsertLast(3);
	list.InsertLast(4);
	list.InsertLast(8);
	Node<char> *elem = new Node<char>;
	elem->key = 1;
	ASSERT_ANY_THROW(list.InsertBefore(9, elem));
}

TEST(List, can_insert_element_before) {
	List<char> list;
	list.InsertLast(6);
	list.InsertLast(7);
	list.InsertLast(10);
	Node<char> *elem = new Node<char>;
	elem->key = 1;
	ASSERT_NO_THROW(list.InsertBefore(7, elem));
}

TEST(List, can_insert_after) {
	List<char> list;
	list.InsertLast(5);
	list.InsertLast(7);
	list.InsertLast(9);
	Node<char> *elem = new Node<char>;
	elem->key = 1;
	ASSERT_NO_THROW(list.InsertAfter(7, elem));
}

TEST(List, can_insert_after_when_it_last) {
	List<char> list;
	list.InsertLast(5);
	list.InsertLast(7);
	list.InsertLast(9);
	Node<char> *elem = new Node<char>;
	elem->key = 1;
	ASSERT_NO_THROW(list.InsertAfter(9, elem));
}

TEST(List, trows_when_insert_before_and_list_is_empty)
{
	List<int> list;
	Node<int> *elem = new Node<int>;
	elem->key = 3;
	ASSERT_ANY_THROW(list.InsertBefore(6, elem));
}

TEST(List, trows_when_insert_after_and_list_is_empty)
{
	List<int> list;
	Node<int> *elem = new Node<int>;
	elem->key = 3;
	ASSERT_ANY_THROW(list.InsertAfter(5, elem));
}

TEST(List, can_insert_first_elem)
{
	List<int> list;
	ASSERT_NO_THROW(list.InsertFirst(10));
}

