#include <iostream>
#include <stack>

struct Person {
    std::string name;
};

int main()
{
    std::stack<int> s1;
    std::stack<float> s2;
    std::stack<Person> s3;
    

    s1.push(347);
    s1.push(121);
    s1.push(500);


    // Read
    std::cout << s1.top() << std::endl;
    std::cout << s1.size() << std::endl;

    
}

