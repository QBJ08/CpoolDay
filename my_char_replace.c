char *my_char_replace(char *origin, char toFind, char toReplace) {
    int length = 0;
    while (origin[length]) length++;

    char *tmp = origin;

    for (int i = 0; i < length; i++) {
        if (origin[i] == toFind) {
            tmp[i] = toReplace;
        }
    }
    origin = tmp;

}