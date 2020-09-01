#include <iostream>
using namespace std;

int main()
{
    
    int array[10] = { 2,3,4,5,6,7,8,9,10,1 };   //大きさ10の配列
    int max = array[0];                         //最大値
    int min = array[0];                         //最小値
    int maxindex = 0;                           //最大値の添え字
    int minindex = 0;                           //最小値の添え字
    
    for (int i = 0; i < 10; ++i) {
        
        //最大値検索
        if (max < array[i]) {
            max = array[i];
            maxindex = i;
        }

        //最小値検索
        if (min > array[i]){
            min = array[i];
            minindex = i;
            }
    }

    cout << "最大値は" << maxindex << "番目の" << max << endl
         << "最小値は" << minindex << "番目の" << min << endl;
}

