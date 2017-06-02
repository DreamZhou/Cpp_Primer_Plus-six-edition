#include <iostream>

struct Box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void printBox(Box b);
void caculateVol(Box * b);

int main()
{
    Box box1 = {"aocma" , 14, 15,16,210};
    printBox(box1);
    caculateVol(& box1);
    std::cout << "After autocaculate the volume: \n";
    printBox(box1);
    std::cout << "Done";

    return 0;
}

void printBox(Box b)
{
    std::cout << "The maker : " << b.maker << std::endl
              << "The height: " << b.height << std::endl
              << "The width : " << b.width << std::endl
              << "The length: " << b.length << std::endl
              << "The volume: " << b.volume << std::endl;
}
void caculateVol(Box * b)
{
   b->volume = b->height * b->width *b->length ;
}
