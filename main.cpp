#include <inclds>
//#include<cctype>
//self-start-project 0x12:
//count each sentence that is as correct as possible.
const string::size_type sentence_periods(string::size_type len_count, const string &s) {
    len_count = 0 + 1; //to stop the off by one counting for easier reading(... 0 + 1 ...) of results
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
    string s = "This is a sentence. This part is a sentence,"
            " And this is the last sentence. Hello World, this is a program!.";
    string::size_type n = 0;

    cout << sentence_periods(n, s);
}
