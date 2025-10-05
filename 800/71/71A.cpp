#include <mylib/utils.h>

i32 main(){
    FastIO;

    i64 n;
    cin >> n;

    FOR(i, 0, n){
        str word;
        cin >> word;

        if(word.size() >= 10){
            str result = str(1, word[0]) + to_string(word.size()-2) + str(1, word[word.size()-1]);
            cout << result << "\n";
        } else {
            cout << word << "\n";
        }
    }
    return 0;
}
