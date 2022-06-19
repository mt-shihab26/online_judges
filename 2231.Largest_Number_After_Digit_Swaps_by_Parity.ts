const largestInteger = (num: number): number => {
    let num_str = num.toString();
    while (true) {
        let is = true;
        for (let i = num_str.length - 1; i >= 0; i--) {
            for (let j = 0; j < i; j++) {
                if (num_str[j] < num_str[i] && (parseInt(num_str[j]) % 2 === parseInt(num_str[i]) % 2)) {
                    num_str = num_str.substring(0, j) + num_str[i] + num_str.substring(j + 1, i) + num_str[j] + num_str.substring(i + 1, num_str.length);
                    is = false;
                }
            }
        }
        if (is) break;
    }
    return parseInt(num_str);
};

console.log(largestInteger(1234))