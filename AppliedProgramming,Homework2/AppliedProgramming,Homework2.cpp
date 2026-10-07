#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n = 0;
    cout << "計算する人数をを入力してください" << endl;
    cin >> n;
    int* score = new int[n];
    //配列の要素数を実行後に指定する場合newをつければいいらしい

    for (int i = 0; i < n; ++i)
    {
        cout << i + 1 << "番目の点数を入力してください" << endl;
        cin >> score[i];
        sum += score[i];
    }
    cout << "平均点は" << sum / n << "点です" << endl;
    cout << "合計点は" << sum << "点です" << endl;
    delete[] score;
    //動的に要素数を指定した場合メモリーの開放なる行為が必要らしい
}

