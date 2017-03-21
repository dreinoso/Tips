#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
struct Print
{
   Print(const std::string& name)
       : mName{ name }
   {
   }
   void fun(int a)
   {
       std::cout << mName << " -> " << a << std::endl;
   }
   
   std::string mName;
};
std::vector<Print*> v;
template<typename Callback, typename... Args>
void notifyListeners(const Callback& callback, Args&&... args)
{
   std::for_each(v.begin(), v.end(), [callback, &args...](auto& listener) 
    { (listener->*callback)(std::forward<Args>(args)...); });
}

int main()
{
   v.push_back(new Print{"Uno"});
   v.push_back(new Print{"Dos"});
   notifyListeners(&Print::fun, 1);
}