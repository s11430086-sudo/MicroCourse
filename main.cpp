#include <iostream>
#include <vector>
using namespace std;

// 功能：計算平均值
double calculateAverage(const vector<int> &numbers)
{
    if (numbers.empty()) // 防止除以零
        return 0.0;

    long long sum = 0;
    for (int n : numbers) // 使用範圍迴圈避免越界
    {
        sum += n;
    }
    return static_cast<double>(sum) / numbers.size();
}

int main()
{
    vector<int> data = {10, 20, 30, 40, 50};
    cout << "平均值: " << calculateAverage(data) << endl;
    return 0;
}