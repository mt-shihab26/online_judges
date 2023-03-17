const compareVersion = (version1: string, version2: string): number => {
    const vers1 = version1.split('.');
    const vers2 = version2.split('.');

    let vi1 = vers1.map(a => parseInt(a));
    let vi2 = vers2.map(a => parseInt(a));

    const extLen = Math.abs(vi1.length - vi2.length);
    const len = Math.max(vi1.length, vi2.length);

    const tmp: number[] = Array(extLen).fill(0);
    vi1 = [...vi1, ...tmp];
    vi2 = [...vi2, ...tmp];

    for (let i = 0; i < len; i++) {
        if (vi1[i] < vi2[i]) return -1;
        if (vi1[i] > vi2[i]) return 1;
    }
    return 0;
};
