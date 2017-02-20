class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> outputs;
        if (words.size() == 0) return outputs;
        for (auto i = words.begin(); i != words.end(); ++i) {
            if (isInOneRow(*i)) outputs.push_back(*i);
        }
        return outputs;
    }

    bool isInOneRow(string word) {
        int status = 0;
        int maps[26] = {2 ,4 ,4 ,2 ,1 ,2 ,2 ,2 ,1 ,2 ,2 ,2 ,4 ,4 ,1 ,1 ,1 ,1 ,2 ,1 ,1 ,4 ,1 ,4 ,1 ,4};
        for (int i = 0; i < word.length(); ++i) {
            int c = tolower(word[i])-'a';
            status |= maps[c];
        }
        return (status == 1 || status == 2 || status == 4);
    }
};

