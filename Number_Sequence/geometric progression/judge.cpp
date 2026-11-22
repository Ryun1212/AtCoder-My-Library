bool isGeometricSequence(const vector<long long>& A) {
    int n = A.size();
    if (n <= 2) return true; // 要素が2つ以下なら常に等比数列とみなせる場合が多い

    for (int i = 0; i < n - 2; ++i) {
        // A[i+1] * A[i+1] == A[i] * A[i+2] を判定
        if (A[i+1] * A[i+1] != A[i] * A[i+2]) {
            return false;
        }
    }
    return true;
}
