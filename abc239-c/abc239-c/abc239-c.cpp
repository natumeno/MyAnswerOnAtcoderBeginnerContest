// abc239-c.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <iomanip>
#include <math.h>
#define rep(i,n) for(ll i=0;i<n;++i)
typedef long long ll;

int main() {
	ll x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;

	for (ll i = -2; i <= 2; ++i) {
		for (ll j = -2; j <= 2; ++j) {
			if (((x1 - x1 + i) * (x1 - x1 + i) + (y1 - y1 + j) * (y1 - y1 + j)) == 5) {
				if (((x2 - x1 + i) * (x2 - x1 + i) + (y2 - y1 + j) * (y2 - y1 + j)) == 5) {
					std::cout << "Yes" << std::endl;
					return 0;
				}
			}
		}
	}
	std::cout << "No" << std::endl;
	return 0;
}


// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
