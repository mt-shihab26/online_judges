const isPalindrome = (x: number): boolean => {
    const xstr = x.toString();

    for (let i = 0, j = xstr.length - 1; i < j; i++, j--) {
        if (xstr[i] !== xstr[j]) {
            return false;
        }
    }
    return true;
};