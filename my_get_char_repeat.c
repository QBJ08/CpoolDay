int my_get_char_repeat(char to_find, const char *to_search) {
    int length = 0;
    int occurences = 0;

    while (to_search[length]) length++;

    if (!to_search) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (to_search[i]==to_find) {
            occurences++;
        }
    }

    return occurences;
};
