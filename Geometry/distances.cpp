template <typename T>
long double euclidean_distance(pair<T, T> &p1, pair<T, T> &p2) {
    return (
        sqrt(
            abs(p1.first - p2.first) * abs(p1.first - p2.first) +
            abs(p1.second - p2.second) * abs(p1.second - p2.second)
        )
    );
}

template <typename T>
long long manhattan_distance(pair<T, T> &p1, pair<T, T> &p2) {
    return (
        abs(p1.first - p2.first) + abs(p1.second - p2.second)
    );
}