const rChar = (s: string, index: number): string => {
    const len = s.length;
    let r = "";
    for (let i = 0; i < len; i++) {
        if (i !== index) {
            r += s[i];
        }
    }
    return r;
};

const isMax = (ans: string, res: string): boolean => {
    const len = ans.length;
    for (let i = 0; i < len; i++) {
        // console.log(ans[i]);
        // console.log(ans.charAt(i) , " " , res.charAt(i), " ", ans[i] < res[i])
        if (ans[i] < res[i]) {
            return true;
        } else if (ans[i] > res[i]) {
            return false;
        }
    }
    return false;
};

const removeDigit = (num: string, d: string): string => {
    const len = num.length;
    let max = 0;
    let ans: any = true;
    for (let i = 0; i < len; i++) {
        if (num[i] == d) {
            const res = rChar(num, i);
            if (ans === true) {
                ans = res;
            } else if (isMax(ans, res)) {
                ans = res;
            }
            // console.log(ans, " ", res, " ", isMax(ans, res));
        }
    }
    return ans;
};
