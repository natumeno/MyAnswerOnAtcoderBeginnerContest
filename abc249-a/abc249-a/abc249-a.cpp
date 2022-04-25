// abc249-a.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
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
	ll a, b, c, d, e, f, x;
	std::cin >> a >> b >> c >> d >> e >> f >> x;
	ll sum1 = 0;
	ll n1 = 0;
	while (sum1 < x) {
		sum1 += a;
		n1 += a;
		if (sum1 == x) {
			break;
		}
		else if (sum1 > x) {
			n1 -= abs(x - sum1);
			sum1 -= abs(x - sum1);
		}

		if (sum1 < x) {
			sum1 += c;
			if (sum1 == x) {
				break;
			}
			else if (sum1 > x) {
				sum1 -= abs(x - sum1);
			}
		}
	}
	ll sum2 = 0;
	ll n2 = 0;
	while (sum2 < x) {
		sum2 += d;
		n2 += d;
		if (sum2 == x) {
			break;
		}
		else if (sum2 > x) {
			n2 -= abs(x - sum2);
			sum2 -= abs(x - sum2);
		}

		if (sum2 < x) {
			sum2 += f;
			if (sum2 == x) {
				break;
			}
			else if (sum2 > x) {
				sum2 -= abs(x - sum2);
			}
		}
	}
	if (n1 * b == n2 * e) {
		std::cout << "Draw" << std::endl;
		return 0;
	}
	else if (n1 * b > n2 * e) {
		std::cout << "Takahashi" << std::endl;
		return 0;
	}
	else {
		std::cout << "Aoki" << std::endl;
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
