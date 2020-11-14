#include <bits/stdc++.h>

#define MAX 102
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define fs first
#define sc second
#define VISITED 1
#define UNVISITED 0
#define vi vector<int>

using namespace std;

vi vis;
long long adj[MAX][MAX];
int n, d, t, x, y, test, ans;

void bfs(int s)
{
	queue<int> fila;

	fila.push(s);
	vis[s] = VISITED;

	while(!fila.empty())
	{
		int u = fila.front();
		fila.pop();

		for(int k = 1; k <= n; k++)
		{
			if(vis[k] == UNVISITED && adj[u][k])
			{
				vis[k] = VISITED;
				fila.push(k);
			}
		}
	}
}



int main(){_
	cin >> t;
	while(t--)
	{

		cin >> n >> d;

		for(int k = 1; k <= n; k++)
			for(int j = 1; j <= n; j++)
				adj[k][j] = 0;
		
		for(int k = 1; k <= d; k++)
		{
			cin >> x >> y;
			adj[x][y] = adj[y][x] = 1;
		}

		vis = vi(n+1);
		ans = 0;
		for(int k = 1; k <= n; k++)
		{
			if(vis[k] == UNVISITED)
			{
				bfs(k);
				ans++;
			}
		}

	
	/*cout << endl;
	for(int k = 1; k <= n; k++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout << adj[k][j] << ' ';
		}
		cout << endl;
	}*/
		
		++test;
		cout << "Caso #" << test << ": ";

		ans == 1 ? cout << "a promessa foi comprida\n" : cout << "ainda falta(m) " << ans-1 << " estrada(s)\n";
	}

	return 0;
}


