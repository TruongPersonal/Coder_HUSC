#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

struct Point
{
    double x;
    double y;
    Point *next;
};

Point *createNode(double x, double y)
{
    Point *newNode = new Point;
    newNode->x = x;
    newNode->y = y;
    newNode->next = NULL;
    return newNode;
}

void insertLast(Point *&head, double x, double y)
{
    Point *newNode = createNode(x, y);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Point *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void clear(Point *&head)
{
    Point *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

double distance(Point *a, Point *b)
{
    return sqrt(pow((a->x - b->x), 2) + pow((a->y - b->y), 2));
}

int main()
{

    
}