#include<iostream>
#include<list>

void print(std::list<std::string> const &list)
{
    for(auto const &i: list)
    {
        std::cout<<i<<std::endl;
    }
}
int main()
{
    std::list<std::string>list={"blue","green","black"};
    print(list);

    return 0;
}