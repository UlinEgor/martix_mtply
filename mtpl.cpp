template <class T> vec<vec<T>> mmult(vec<vec<T>> a, vec<vec<T>> b) {
    const ll MOD = 10007;

    int n = b.size();
    int m = a.size();
    int k = b[0].size();

    vec<vec<T>> v(m, vec<T>(k));

    fori(m) {
        forj(k) {
            rep(q, n) {
                T t = v[i][j];
                T f = a[i][q];
                T g = b[q][j];
                t = (t + f * g) % MOD;

                v[i][j] = t;
            }
        }
    }

    re v;
}

template<class T> vec<vec<T>> mfast_pow(vec<vec<T>> v, ll p) {
    if (p == 1) re v;
    if (p % 2 == 0) re mfast_pow(mmult(v, v), p / 2);
    re mmult(v, mfast_pow(v, p - 1));
}
