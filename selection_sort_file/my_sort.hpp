// Change me instead
// All occurences of XXX need to be replaced with
// something more meaningful

template<typename iterator>
void my_selection_sort(iterator begin, iterator end) {
    for (auto i = begin; i != end; ++i) {
        auto min = i;
        for (auto j = i; j != end; ++j) {
            if (*j < *min)
                min = j;
        }
        auto tmp = *i;
        *i = *min;
        *min = tmp;
    }
}