#ifndef STACK_H
#define STACK_H

const int MAX =10;
typedef struct Customer
{
  char fullname[35];
  double payment;
}   Item;

class Stack
{
private:
    Item items[MAX];
    int top;
public:
    Stack():top(0) {}
    bool isfull () const;
    bool isempty () const;
    bool push (const Item &  item);
    bool pop (Item & item);
};

#endif // STACK_H
