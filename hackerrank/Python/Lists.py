if __name__ == '__main__':
    n = int(input())
    data = []
    for _ in range(n):
        cmd = input().split()
        if cmd[0] == "insert":
            data.insert(int(cmd[1]), int(cmd[2]))
        elif cmd[0] == "print":
            print(data)
        elif cmd[0] == "remove":
            data.remove(int(cmd[1]))
        elif cmd[0] == "sort":
            data.sort()
        elif cmd[0] == "pop":
            data.pop()
        elif cmd[0] == "reverse":
            data.reverse()
        elif cmd[0] == "append":
            data.append(int(cmd[1]))
