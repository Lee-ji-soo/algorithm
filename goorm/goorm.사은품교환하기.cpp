#include <iostream>

using namespace std;

int T;
long long int n, m;

int main()
{
	cin >> T;
	while (T--)
	{

		long long int ans = 0;
		cin >> n >> m;
		ans = n / 5 <= m / 7 ? n / 5 : m / 7;
		if (ans)
			n -= 5 * ans, m -= 7 * ans;

		if (n >= 5 and m > 0 and n + m >= 12)
		{
			n -= 12 - m, m = 0;
			ans++;
		}
		if (n >= 12)
			ans += n / 12;

		cout << ans << '\n';
	}
	return 0;
}