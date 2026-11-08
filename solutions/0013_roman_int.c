int romanToInt(char* s) {
    int values[128] = {0};
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;

    int total = 0;
    int i = 0;

    while (s[i]) {
        int v_this = values[(unsigned char)s[i]];
        int v_next = values[(unsigned char)s[i+1]];
        if (v_this < v_next) {
            total -= v_this;
            total += v_next;
            i += 2;
        } else {
            total += v_this;
            i++;
        }
    }

    return total;
}
