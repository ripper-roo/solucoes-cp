#include <bits/stdc++.h> 
					 
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define precisao(x) cout.precision(x); cout.setf(ios::fixed)

#define un unsigned
#define li long int
#define ll long long

#define ii pair<int, int>
#define fs first
#define sc second
#define mp make_pair

#define vi vector<int>
#define vii vector<ii>
#define pb push_back
#define eb emplace_back

#define all(x) (x).begin(), (x).end()
#define sz(x) x.size()

using namespace std;

int n, m, v;
queue<ii> fila;
ii x;

int main(){_
	cin >> n >> m;
	fila.push({n,0});
	
	if(n == m)
	{
		cout << 0 << '\n';
		exit(0);
	}
		
	for(;;)	
	{
		x = fila.front(); fila.pop();
	//	cout << x << " nivel: " << niveis[x] << endl;
		
		if(x.fs == 0)
		{
			v = x.fs+7;
			if(v == m)
			{
				cout << x.sc+1 << '\n';
				break;
			}

			fila.push({v, x.sc+1});
		//	cout << v << " nivel: " << x.sc+1 << endl;
			continue;
		}
		
		if(!(x.fs%2))
		{
			v = x.fs/2;
			if(v == m)
			{
				cout << x.sc+1 << '\n';
				break;
			}

			fila.push({v, x.sc+1});
	//		cout << v << " nivel: " << x.sc+1 << endl;
		}
		if(!(x.fs%3))
		{
			v = x.fs/3;
			if(v == m)
			{
				cout << x.sc+1 << '\n';
				break;
			}

			fila.push({v, x.sc+1});
	//		cout << v << " nivel: " << x.sc+1 << endl;
		}

		v = x.fs*2;
		if(v == m)
		{
			cout << x.sc+1 << '\n';
			break;
		}

		fila.push({v, x.sc+1});
	//	cout << v << " nivel: " << x.sc+1 << endl;

		v = x.fs*3;
		if(v == m)
		{
			cout << x.sc+1 << '\n';
			break;
		}

		fila.push({v, x.sc+1});
	//	cout << v << " nivel: " << x.sc+1 << endl;
		
		v = x.fs+7;
		if(v == m)
		{
			cout << x.sc+1 << '\n';
			break;
		}

		fila.push({v, x.sc+1});
	//	cout << v << " nivel: " << x.sc+1 << endl;
		

		if(x.fs-7 >= 0)
		{
			v = x.fs-7;
			if(v == m)
			{
				cout << x.sc+1 << '\n';
				break;
			}

			fila.push({v, x.sc+1});
	//		cout << v << " nivel: " << x.sc+1 << endl;
		}
	}

	return 0;
}
