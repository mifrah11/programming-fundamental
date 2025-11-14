int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);

    if (m == 0) return 0; // empty needle

    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        // check if needle matches starting at i
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }

        if (j == m) return i;  // full match found
    }

    return -1; // not found
}
