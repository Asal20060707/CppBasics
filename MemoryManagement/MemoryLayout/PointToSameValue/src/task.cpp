bool pointToSameValue(int* a, int* b) {
    if (a && b) {
        return *a == *b;
    }
    return !a && !b;
}