// abc245-c.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#include <iomanip>
#include <math.h>
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;


int main() {
	ll n, k;
	std::cin >> n >> k;
	std::vector<ll> a(n);
	std::vector<ll> b(n);
	rep(i, n) {
		std::cin >> a[i];
	}
	rep(i, n) {
		std::cin >> b[i];
	}

	//a[i]にいるときa[i+1]もしくはb[i+1]へ行く。
	//この時|a[i+1]-a[i]|<=k または |b[i+1]-a[i]|<=k でなければいけない
	std::vector<bool> dp1(n, false);
	std::vector<bool> dp2(n, false);
	dp1[0] = true;
	dp2[0] = true;
	for (ll i = 1; i < n; ++i) {
		if (dp1[i - 1]) {
			if (abs(a[i] - a[i - 1]) <= k) {
				dp1[i] = true;
			}
			if (abs(b[i] - a[i - 1]) <= k) {
				dp2[i] = true;
			}
		}
		if (dp2[i - 1]) {
			if (abs(a[i] - b[i - 1]) <= k) {
				dp1[i] = true;
			}
			if (abs(b[i] - b[i - 1]) <= k) {
				dp2[i] = true;
			}
		}
	}
	if (dp1[n - 1] || dp2[n - 1]) {
		std::cout << "Yes" << std::endl;
		return 0;
	}
	else {
		std::cout << "No" << std::endl;
		return 0;
	}
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
