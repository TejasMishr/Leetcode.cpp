class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());

        queue<int>q;
        for(int i=0;i<deck.size();i++)
        {
            q.push(i);
        }
        vector<int>res(deck.size());
        int i=0;
        while(!q.empty())
        {
           int id=q.front();
           q.pop();
           res[id]=deck[i];
           id=q.front();
           q.pop();
           q.push(id);
           i++;
        }

        return res;
    }
};