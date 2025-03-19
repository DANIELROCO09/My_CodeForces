n=int(input())
n_li=[]
n_ri=[]
for _ in range(n):
    l,r=map(int,input().split())
    n_li.append(l)
    n_ri.append(r)

left_open=n_li.count(1)
left_close=n-left_open

right_open=n_ri.count(1)
right_close=n-right_open

l_tarjet=1 if left_open > left_close else 0
r_tarjet=1 if right_open > right_close else 0
time=0
for i in range(n):
    if n_li[i]!=l_tarjet:
        time+=1
    if n_ri[i]!=r_tarjet:
        time+=1
print(time)

time = 0

