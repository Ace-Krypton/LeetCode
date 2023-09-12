#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <gtest/gtest.h>

struct Node {
    int32_t val;
    Node *next;
    Node *random;
};

class Solution {
public:
    static auto copy_random_list(Node* head) -> Node* {
        Node *temp = head;
        std::unordered_map<Node*, Node*> mappings;

        while (temp) {
            mappings[temp] = new Node(temp->val);
            temp = temp->next;
        }

        temp = head;

        while(temp){
            Node *curr = mappings[temp];
            Node *next = mappings[temp->next];
            Node*r = mappings[temp->random];
            curr->next = next;
            curr->random = r;
            temp = temp->next;
        }

        return mappings[head];
    }
};
