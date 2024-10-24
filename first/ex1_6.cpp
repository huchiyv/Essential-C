/*
Copyright [2024] <huchiyu>
编写一个程序,从标准输入设备读取一串整数,并将读人的整数依次放到
array及vector,然后遍
历这两种容器,求取数值总和。将总和及平均值输出至标准输出设备。
*/
#include <iostream>
#include <vector>
#include <array>
using namespace std;  // NOLINT

int myMain() {
    int num;
    vector<int> vec;
    array<int, 100> arr;
    int sum = 0;
    int count = 0;
    cout << "Please input integers (Enter a non-numeric character to end the "
            "input):"
         << endl;
    while (cin >> num) {
        vec.push_back(num);
        arr[count] = num;
        sum += num;
        count++;
    }
    cout << "The sum of the integers is " << sum << endl;
    cout << "The average of the integers is " << static_cast<double>(sum) / count
         << endl;
    cout << "The integers in the vector are: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}
