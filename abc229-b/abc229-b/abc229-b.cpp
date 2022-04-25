// abc229-b.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <iomanip>
#include <math.h>
#include <set>
#include <functional>
#define rep(i,n) for(ll i=0;i<n;++i)
typedef long long ll;

int main() {
	ll a, b;
	std::cin >> a >> b;
	std::string A = std::to_string(a);
	std::string B = std::to_string(b);
	if (a >= b) {
		for (ll i = 0; i < B.size(); ++i) {
			int p = A[A.size() - 1 - i] - '0';
			int q = B[B.size() - 1 - i] - '0';
			if (p + q > 9) {
				std::cout << "Hard" << std::endl;
				return 0;
			}
		}
	}
	else {
		for (ll i = 0; i < A.size(); ++i) {
			int p = A[A.size() - 1 - i] - '0';
			int q = B[B.size() - 1 - i] - '0';
			if (p + q > 9) {
				std::cout << "Hard" << std::endl;
				return 0;
			}
		}
	}
	std::cout << "Easy" << std::endl;
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
