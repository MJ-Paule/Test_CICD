#include <string> 

inline std::string greet(const sd::string& name = "")
{
    if (!name.empty()){
        return "Hello " + name;
    }

    return "Hello";
}

inline int add(int a, int b)
{
    return a+b;
}