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
#ifndef ONLINE_JUDGE
    freopen(".build/Input.inp", "r", stdin);
    freopen(".build/Output.out", "w", stdout);
#endif

    Point *head = NULL;
    int N;
    cin >> N;
    double x, y;
    for (int i = 0; i < N; ++i)
    {
        cin >> x >> y;
        insertLast(head, x, y);
    }
    int count = 0;
    cin >> x >> y;
    Point *point = createNode(x, y);
    Point *first = NULL;
    int min_distance = INT_MAX;
    while (head != NULL)
    {
        double dis = distance(head, point);
        if (dis < min_distance)
        {
            min_distance = dis;
            count = 1;
            clear(first);
            insertLast(first, head->x, head->y);
        }
        else if (dis == min_distance)
        {
            insertLast(first, head->x, head->y);
            count++;
        }
        head = head->next;
    }
    while (first != NULL)
    {
        cout << first->x << " " << first->y << "\n";
        first = first->next;
    }
    cout << count;

    return 0;
}