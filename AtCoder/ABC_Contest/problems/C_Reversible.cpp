#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class TrieNode
{
public:
    unordered_map<char, TrieNode *> children;
    bool is_end_of_word;

    TrieNode()
    {
        is_end_of_word = false;
    }
};

void insertWord(TrieNode *root, const string &word)
{
    TrieNode *node = root;
    for (char ch : word)
    {
        if (node->children.find(ch) == node->children.end())
        {
            node->children[ch] = new TrieNode();
        }
        node = node->children[ch];
    }
    node->is_end_of_word = true;
}

bool isRepeatedOrReversed(TrieNode *root, const string &word)
{
    TrieNode *node = root;
    for (char ch : word)
    {
        if (node->children.find(ch) == node->children.end())
        {
            return false;
        }
        node = node->children[ch];
    }
    return node->is_end_of_word;
}

int countRepeatedOrReversedStrings(const vector<string> &arr)
{
    TrieNode *root = new TrieNode();
    int count = 0;

    for (const string &str : arr)
    {
        if (isRepeatedOrReversed(root, str) || isRepeatedOrReversed(root, string(str.rbegin(), str.rend())))
        {
            count++;
        }
        else
        {
            insertWord(root, str);
        }
    }

    return arr.size() - count;
}

int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = countRepeatedOrReversedStrings(arr);
    cout << result << endl;

    return 0;
}
