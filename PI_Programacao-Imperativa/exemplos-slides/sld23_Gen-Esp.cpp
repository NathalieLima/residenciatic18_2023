#include <iostream>

using namespace std;

class Gen {
    private:
    int x;

    protected:
    int y;

    public:
    int z;

};

class Esp: private Gen {
    void func() {
        z = 1; 
        y = 2;
        x = 2;
    }
};

class Esp2: Esp {

    void func() {
        z = 1; 
        y = 2;
        x = 2;
    }
};