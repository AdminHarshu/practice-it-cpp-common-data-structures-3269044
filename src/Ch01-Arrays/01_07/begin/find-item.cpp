#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    // TODO: implement
    int result = -1;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == target)
        {
            result = i;
            break;
        }
    }
    return result;
}

int main()
{
    int lnNumbers[] = {2,3,6,8,7,1,9,11,23};
    size_t lnSize = sizeof(lnNumbers) / sizeof(lnNumbers[0]);
    int lnTarget = 11;
    int lnResult = findItem( lnNumbers, lnSize, lnTarget);
    cout << "Find number is :" << lnResult << endl;
    float lfNumbers[] = { 2.2,6.1,33.3,7.1,99.6};
    int lfSize = sizeof(lfNumbers) / sizeof(lfNumbers[0]);
    float lfTarget = 67;
    int lnResult2 = findItem(lfNumbers, lfSize, lfTarget);
    cout << "Find number is :" << lnResult2 << endl;
    return 0;
}
