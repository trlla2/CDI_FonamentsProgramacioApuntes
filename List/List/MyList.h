#pragma once

template<class T>
class MyList
{
private:
	struct Node
	{
		T m_value;
		Node* m_next;
		Node* m_previus;
	};

	Node* m_begin;
	Node* m_end;
	size_t m_size;
public:
	MyList() {
		m_begin = nullptr;
		m_end = nullptr;
		m_size = 0;
	}
	
	~MyList() {

	}

	void Insert(Node* it, T value) {
		Node* n = new Node();
		n->m_value = value;

		if (Empty()) {
			m_begin = n;
			m_end = n;
		}
		else {
			// Asume it is valid
			Node* prev = it->m_previus;
			if (it->m_previus == nullptr) {
				it->m_previus = n;
				n->m_next = it;
				
				m_begin = n;
			}
			else {
				prev->m_next = n;
				n->m_previus = prev;
				
				it->m_previus = n;
				n->m_next = it;
			}
		}

		m_size++;
	}

	bool Empty() const {
		return m_size == 0 && m_begin == nullptr && m_end == nullptr;
	}

	void Erase(Node* it) {
		if (it == nullptr) {
			return;
		}

		Node* prev = it->m_previus;
		Node* next = it->m_next;

		if (prev != nullptr) {
			prev->m_next = it->m_next;
		}
		else {
			m_begin = next;
		}

		if (next != nullptr) {
			next->m_previus = it->m_previus;
		}
		else {
			m_end = prev;
		}
	}

	Node* Front() {

	}

	Node* Back() {

	}

	Node* Advanced(T value) {

	}

	void Print(){

	}

	void ReversePrint() {

	}
	// ...
};

