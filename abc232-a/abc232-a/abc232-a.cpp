// abc232-a.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
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
#define rep(i,n) for(ll i=0;i<n;++i)
typedef long long ll;

int main() {
	std::string s;
	std::cin >> s;
	ll a, b;
	if (s[0] == '1') {
		a = 1;
	}
	else if (s[0] == '2') {
		a = 2;
	}
	else if (s[0] == '3') {
		a = 3;
	}
	else if (s[0] == '4') {
		a = 4;
	}
	else if (s[0] == '5') {
		a = 5;
	}
	else if (s[0] == '6') {
		a = 6;
	}
	else if (s[0] == '7') {
		a = 7;
	}
	else if (s[0] == '8') {
		a = 8;
	}
	else if (s[0] == '9') {
		a = 9;
	}

	if (s[2] == '1') {
		b = 1;
	}
	else if (s[2] == '2') {
		b = 2;
	}
	else if (s[2] == '3') {
		b = 3;
	}
	else if (s[2] == '4') {
		b = 4;
	}
	else if (s[2] == '5') {
		b = 5;
	}
	else if (s[2] == '6') {
		b = 6;
	}
	else if (s[2] == '7') {
		b = 7;
	}
	else if (s[2] == '8') {
		b = 8;
	}
	else if (s[2] == '9') {
		b = 9;
	}
	std::cout << a * b << std::endl;
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
