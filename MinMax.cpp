#include <iostream>
#include <climits>
using namespace std;


int max(int a[],int n )
{
    int max = INT_MIN;
    for (int i = 0; i < n;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int min(int b[],int m)
{
    int min = INT_MAX;
    for (int i = 0; i < m;i++)
    {
        if (min > b[i])
        {
            min = b [i];
        }
    }
    return min;
}

int main()
{
    int input[20], size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }

    cout<<"the max no is "<< max(input,size)<<endl;
    cout<<"the min no is "<< min(input,size)<<endl;

}