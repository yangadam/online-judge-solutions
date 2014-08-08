#include <cstdio>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

const int N = 52;
struct CARD {char Face[3];} card;

inline bool Match(const CARD &c1, const CARD &c2)
{
	return (c1.Face[0] == c2.Face[0] || c1.Face[1] == c2.Face[1]);
}

int main()
{
	typedef stack<CARD> PILE;
	while(scanf("%s", card.Face) && card.Face[0]!='#')
	{
		PILE temp;
		vector<PILE> piles;
		temp.push(card);
		piles.push_back(temp);
		for (int i = 1; i < N; i++)
		{
			scanf("%s", card.Face);
			PILE pile;			
			pile.push(card);
			piles.push_back(pile);
			for (size_t j=piles.size()-1, k; j<piles.size(); j++)
			{
				for (k=j; k>0; --k)
				{
					if (k>=3 && Match(piles[j].top(), piles[k-3].top()))
					{
						k -= 2;
						continue;
					} 
					if (!Match(piles[j].top(), piles[k-1].top()))
						break;
				}
				if (k != j)
				{
					piles[k].push(piles[j].top());
					piles[j].pop();
					if (piles[j].empty())
						piles.erase(piles.begin() + j);
					j = k;
				}
			}
		}
		int size = piles.size();
		printf("%d pile%sremaining:", size, size>1 ? "s " : " ");
		for(int i=0; i<size; printf(" %d", piles[i++].size()));
		printf("\n");
	}
	return 0;
}
