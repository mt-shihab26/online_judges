/**
 * @param {string[]} strs
 * @return {string}
 */
 const longestCommonPrefix = (strs) => {
    let prefix = strs[0];
    for (let i = 0; i < strs.length; i++) {
        tmp = "";
        for (let j = 0; j < strs[i].length; j++) {
            if (strs[i][j] === prefix[j]) {
                tmp += prefix[j];
            }
            else {
                break;
            }
        }
        prefix = tmp;
    }
    return prefix;
};