#include "Ejercicio03.h"

Node<int>* Ejercicio03::copyList(Node<int>* head)
{
    if (!head) {
        return nullptr;
    }

    Node<int>* current = head;
    while (current) {
        Node<int>* newNode = new Node<int>{ current->value, nullptr, nullptr };
        newNode->next = current->next;
        current->next = newNode;
        current = newNode->next;
    }

    current = head;
    while (current) {
        if (current->random) {
            current->next->random = current->random->next;
        }
        current = current->next->next;
    }

    Node<int>* newHead = head->next;
    current = head;
    while (current) {
        Node<int>* temp = current->next;
        current->next = temp->next;
        current = current->next;
        if (current) {
            temp->next = current->next;
        }
    }

    return newHead;
}
