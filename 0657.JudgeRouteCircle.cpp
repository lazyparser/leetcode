class Solution {
public:
    bool judgeCircle(string moves) {
        int v = 0, h = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'L')
                --h;
            else if (moves[i] == 'R')
                ++h;
            else if (moves[i] == 'U')
                --v;
            else if (moves[i] == 'D')
                ++v;
        }
        return !(v || h);
    }
};
