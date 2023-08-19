#include <bits/stdc++.h>
using namespace std;
int ntodec(const char c);
char decton(const int n);
inline long long pow_ll(long long x, long long n);
/*  関数名          n_ary(string str, int n, int m)
	説明            n 進数で表現された数値を文字列 str で受け取り、m 進数に直して文字列で出力する。
	使用ライブラリ  string
	使用自作関数    ntodec, decton, pow_ll
	制約事項        36進数までの対応。負の値には対応していない。
*/
string n_ary(string str, int n, int m)
{
	unsigned long tmp = 0;
	string ret;

	for (int i = 0; i < str.length(); i++)
	{
		tmp += (unsigned long)ntodec(str[str.length() - 1 - i]) * pow_ll(n, i);
	}

	if (tmp == 0)
		return "0";
	while (tmp != 0)
	{
		ret = decton(tmp % m) + ret;
		tmp /= m;
	}
	return ret;
}
/*  関数名          ntodec(const char c)
	説明            char で 文字{0,1,2,...,9,A,B,...,Z} を受け取り、
　　　　　　　　　　　 int で {0,1,2,...9,10,11,...,35}に直して返す。
　　　　　　　　　　　 それ以外の文字が来た場合は-1を返す。
	使用ライブラリ   なし
*/
int ntodec(const char c)
{
	switch (c)
	{
	case '0':
		return 0;
	case '1':
		return 1;
	case '2':
		return 2;
	case '3':
		return 3;
	case '4':
		return 4;
	case '5':
		return 5;
	case '6':
		return 6;
	case '7':
		return 7;
	case '8':
		return 8;
	case '9':
		return 9;
	case 'A':
		return 10;
	case 'B':
		return 11;
	case 'C':
		return 12;
	case 'D':
		return 13;
	case 'E':
		return 14;
	case 'F':
		return 15;
	case 'G':
		return 16;
	case 'H':
		return 17;
	case 'I':
		return 18;
	case 'J':
		return 19;
	case 'K':
		return 20;
	case 'L':
		return 21;
	case 'M':
		return 22;
	case 'N':
		return 23;
	case 'O':
		return 24;
	case 'P':
		return 25;
	case 'Q':
		return 26;
	case 'R':
		return 27;
	case 'S':
		return 28;
	case 'T':
		return 29;
	case 'U':
		return 30;
	case 'V':
		return 31;
	case 'W':
		return 32;
	case 'X':
		return 33;
	case 'Y':
		return 34;
	case 'Z':
		return 35;
	default:
		return -1;
	}
}
/*  関数名          decton(const int n)
	説明            int で 数値 0〜35 を受け取り、文字{0,1,2,...,9,A,B,...,Z}に直して char で返す。
　　　　　　　　　　　 それ以外の数字が来た場合は \0 を返す。
	使用ライブラリ  なし
*/
char decton(const int n)
{
	switch (n)
	{
	case 0:
		return '0';
	case 1:
		return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';
	case 10:
		return 'A';
	case 11:
		return 'B';
	case 12:
		return 'C';
	case 13:
		return 'D';
	case 14:
		return 'E';
	case 15:
		return 'F';
	case 16:
		return 'G';
	case 17:
		return 'H';
	case 18:
		return 'I';
	case 19:
		return 'J';
	case 20:
		return 'K';
	case 21:
		return 'L';
	case 22:
		return 'M';
	case 23:
		return 'N';
	case 24:
		return 'O';
	case 25:
		return 'P';
	case 26:
		return 'Q';
	case 27:
		return 'R';
	case 28:
		return 'S';
	case 29:
		return 'T';
	case 30:
		return 'U';
	case 31:
		return 'V';
	case 32:
		return 'W';
	case 33:
		return 'X';
	case 34:
		return 'W';
	case 35:
		return 'Z';
	default:
		return '\0';
	}
}
/*  関数名          pow_ll(long long x, long long n)
	説明            x^n を計算する。long long 対応
	使用ライブラリ  なし
*/
inline long long pow_ll(long long x, long long n)
{
	long long ret = x;
	if (n == 0)
		return 1;
	for (long long i = 1; i < n; i++)
	{
		ret *= x;
	}
	return ret;
}

inline string zerou(string s)
{
	if (s.size() == 1)
	{
		return "0" + s;
	}
	else
		return s;
}

int main()
{
	system("");
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			int hex = i * 16 + j;
			cout << "\e[38;5;" << hex << "m0x" << zerou(n_ary(to_string(hex), 10, 16)) << "\e[m ";
		}
		cout << endl;
	}

	int a;
	cin >> a;

	return 0;
}