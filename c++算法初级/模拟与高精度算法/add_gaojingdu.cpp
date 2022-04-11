# include <iostream>
# include <cmath>

using namespace std;
const int N = 110;


int main(){
	int a_dights[N] = {8, 6, 3}, a_len = 3;
	int b_digits[N] = {7, 9, 9}, b_len = 3;
	int ans_digits[N], ans_len;
	
	ans_len = max(a_len,b_len);
	int k = 0;
	for (int i = 0; i<ans_len; ++i){
		ans_digits[i] = a_dights[i] + b_digits[i] + k;
		k = ans_digits[i] / 10;
		ans_digits[i] = ans_digits[i] % 10;
	}
	if (k){
		ans_digits[ans_len++] = k;
	}
	for (int i = ans_len-1; i>=0; --i){
		cout << ans_digits[i];
	}
	cout << endl;
	return 0;
}