#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec = { 7,12,1,5,15,4,6,-20,100,5,3 };
    
    for  (int i = vec.size() - 1; i >= 0; i--)
    {
        int maxind = 0;
        for (int j = 0; j <= i; j++)
        {
            if (vec[j] > vec[maxind])
                maxind = j;
        }

        /*int temp = vec[i];
        vec[i] = vec[maxind];
        vec[maxind] = temp;*/

        std::swap(vec[i], vec[maxind]);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }

    return 0;

}

