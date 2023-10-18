#include <iostream>
using namespace std;

/* // Бинарный поиск
    int lst[] = {1,2,3,4,5,6};
    int item = 3;

    int low = 0;
    int high = sizeof(lst) - 1;

    while (low <= high)
    {
        int mid = (high + low) / 2;
        int guess = lst[mid];
        if (guess == item)
        {
            cout << guess;
            break;
        } else if (mid > item){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    
     */

int main()
{
    // Бинарный поиск
    int lst[] = {1,2,3,4,5,6};
    int item = 3;

    int low = 0;
    int high = sizeof(lst) - 1;

    while (low <= high)
    {
        int mid = (high + low) / 2;
        int guess = lst[mid];
        if (guess == item)
        {
            cout << guess;
            break;
        } else if (mid > item){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    
    
    
    
    return 0;
}