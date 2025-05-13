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
		size_t m_size;
	};
public:
	List() {

	}
	~List() {

	}

	void Insert(Node* it, T value) {

	}

	void Erase(Node* it) {

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

