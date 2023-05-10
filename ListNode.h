#pragma once
#include <iostream>

struct ListNode
{
public:
    ListNode(int value, ListNode* prev = nullptr, ListNode* next = nullptr);

    int value;
    ListNode* prev;
    ListNode* next;
};


