#pragma once
#include <iostream>

class MyQueue
{
private:
	struct Node
	{
		int m_data;
		Node* m_next;
	};

	Node* m_first;
	Node* m_last;
	size_t m_size;
public:
	MyQueue() {
		m_first = nullptr;
		m_last = nullptr;
		m_size = 0;
	}

	void Push(int value) {
		// Create node 
		Node* node = new Node();

		node->m_data = value;
		
		if (m_first == nullptr || m_size == 0 || m_last == nullptr) {
			m_first = node;
			m_last = node;
		}
		else {

			m_last->m_next = node; //le pasa al last anterior el nuevo puntero en la varable next
			m_last = m_last->m_next; // le pasa como last el nuevo node
		}

		m_size++;
	}

	void Pop() {
		if (m_first == nullptr || m_size == 0 || m_last == nullptr) {
			return;
		}

		Node* nodeToRemove = m_first;

		m_first = m_first->m_next; // el nuevo first es el next del anterior first

		delete nodeToRemove;
		m_size--;
	}

	bool Empty() {
		return (m_first == nullptr || m_size == 0 || m_last == nullptr);
	}

	int Fornt() {
		if (m_first == nullptr || m_size == 0 || m_last == nullptr) {
			return -1;
		}
		else {
			return m_first->m_data;
		}
	}

	int Back() {
		if (m_first == nullptr || m_size == 0 || m_last == nullptr) {
			return -1;
		}
		else {
			return m_last->m_data;
		}
	}

	void Print() {
		Node* temp = m_first;
		while (temp != nullptr) {
			std::cout << temp->m_data << "-";
			temp = temp->m_next;
		}
	}
	~MyQueue() {
		if (m_first != nullptr || m_size != 0 || m_last != nullptr) {
			while (m_size > 0) {
				Node* nodeToRemove = m_first;

				m_first = m_first->m_next; // el nuevo first es el next del anterior first

				delete nodeToRemove;
				m_size--;
			}
		}
	}
};

