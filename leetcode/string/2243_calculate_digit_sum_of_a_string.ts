const digitSum = (s: string, k: number): string => {
    while (s.length > k) {
        let _sum = "";
        const len = s.length;
        for (let i = 0; i < len; i += k) {
            let sum = 0;
            const last = i + k > len ? len : i + k;
            for (let j = i; j < last; j++) {
                sum += parseInt(s[j]);
            }
            _sum += sum;
        }
        s = _sum;
        console.log(s);
    }
    return s;
};