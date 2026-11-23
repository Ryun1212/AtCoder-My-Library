// 回文？
bool isPalindrome(const string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        // 端から対照的な位置の文字を比較
        if (s[i] != s[n - i - 1]) {
            return false; // 一致しなかったら回文ではない
        }
    }
    return true; // すべて一致したら回文
}
