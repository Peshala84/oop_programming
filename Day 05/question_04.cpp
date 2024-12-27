#include <iostream>

using namespace std;

class Volume
{
public:
    int len, bre, hei;

    Volume(int l, int b, int h) : len(l), bre(b), hei(h) {}

    int calVolume()
    {
        return len * bre * hei;
    }
};

int main()
{
    Volume box(10, 5, 7);

    int volume = box.calVolume();

    cout << "Volume of the box: " << volume << endl;

    return 0;
}
