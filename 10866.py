import sys
input = sys.stdin.readline
N = int(input())
deque = []
for i in range(N):
    command = input().rstrip()
    if " " in command :
        a,b = command.split()
        if a == 'push_front' : deque.insert(0,b)
        elif a == 'push_back' : deque.append(b)
    if(command == "pop_front"):
        if len(deque) > 0 :
            print(deque.pop(0))
        else:
            print(-1)
    if(command == "pop_back"):
        if len(deque) > 0 :
            print(deque.pop())
        else:
            print(-1)
    if(command == "size"):
        print(len(deque))
    if(command == "empty"):
        if(len(deque)>0):
            print(0)
        else:
            print(1)
    if(command == "front"):
        if len(deque) > 0 :
            print(deque[0])
        else:
            print(-1)
    if(command == "back"):
        if len(deque) > 0 :
            print(deque[-1])
        else:
            print(-1)
