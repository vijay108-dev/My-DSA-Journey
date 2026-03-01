#include <iostream>
#include <vector>
using namespace std;
bool checkIfPangram(string sentence)
{
    vector<bool> alpha(26, 0);

    for(int i=0;i<sentence.size();i++)
    {
        alpha[sentence[i] - 'a'] = 1;
    }

    for(int i=0;i<26; i++)
    {
        if(alpha[i]==0)
            return false;
    }
    return true;
}

int main()
{
    string sentence;
    getline(cin, sentence);
    if(checkIfPangram(sentence))
        cout<<"Pangram"<<endl;
    else
        cout<<"Not Pangram "<<endl;

    return 0;
}