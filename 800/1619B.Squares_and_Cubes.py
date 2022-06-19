def test_case():
    n = int(input())
    st = set()
    for i in range(1, n+1):
        if i*i > n:
            break
        st.add(i*i)
    for i in range(1, n+1):
        if i*i*i > n:
            break
        st.add(i*i*i)
    print(len(st))


t = int(input())
for _ in range(t):
    test_case()
