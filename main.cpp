#include <inclds>
//#include<cctype>
//self-start-project 0x12:
//count each sentence that is as correct as possible.
const string::size_type sentences(string::size_type len_count, const string &s) {
    for (auto i = 0; i != s.size() && !s.empty(); ++i) {
        if (s[i] == '.' && isupper(s[i + 2])) {
            len_count += 1;
        }
    }
    return len_count;
}
int main()
{
    //gives result of: three sentences.
    string s = "William Shakespeare was an English poet, playwright and actor,"
        " widely regarded as the greatest writer in the English language"
        " and the world's pre-eminent dramatist. He is often called England's national poet and the ";
    string::size_type n = 0;

    cout << sentences(n, s);
}
