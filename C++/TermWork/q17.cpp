@@ -1,16 +0,0 @@
#include<iostream>
using namespace std;
template <typename t>

    t max(int x,int y)
    {
        return (x>y)?x:y;
    }

int main()
{
    cout<<max<int>(10,7)<<endl;
    cout<<max<char>('x','s')<<endl;

    return 0;
}