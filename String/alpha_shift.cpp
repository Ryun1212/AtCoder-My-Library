char shiftChar(char c, int shift) {
    if (c >= 'a' && c <= 'z') {
        // 'a' を基準(0)にしてずらし、26で割った余りを求めて 'a' を足す
        return 'a' + (c - 'a' + shift) % 26;
    } else if (c >= 'A' && c <= 'Z') {
        return 'A' + (c - 'A' + shift) % 26;
    }
    return c; // アルファベット以外はそのまま返す
}
