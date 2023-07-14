vec<vec<thuge>> mtpl(vec<vec<thuge>> a, vec<vec<thuge>> b) {
	int n = b.size();
	int m = a.size();
	int k = b[0].size();

	vec<vec<thuge>> v(m, vec<thuge>(k));

	fori(m) {
		forj(k) {
			rep(q, n) {
				thuge t = v[i][j];
				thuge f = a[i][q];
				thuge g = b[q][j];
				t = (t + f * g) % D;

				v[i][j] = t;
			}
		}
	}

	re v;
}
