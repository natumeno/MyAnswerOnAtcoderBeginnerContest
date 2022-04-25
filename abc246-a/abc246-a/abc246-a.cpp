// abc246-a.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
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
	ll x1, x2, x3;
	ll y1, y2, y3;
	std::cin >> x1 >> y1;
	std::cin >> x2 >> y2;
	std::cin >> x3 >> y3;
	ll ansx, ansy;
	if (x1 == x2) {
		ansx = x3;
	}
	else if (x1 == x3) {
		ansx = x2;
	}
	else {
		ansx = x1;
	}

	if (y1 == y2) {
		ansy = y3;
	}
	else if (y1 == y3) {
		ansy = y2;
	}
	else {
		ansy = y1;
	}

	std::cout << ansx << " " << ansy << std::endl;
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
