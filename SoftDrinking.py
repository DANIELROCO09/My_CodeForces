n, k, l, c, d, p, nl, np=map(int,input().split())
#obtenemos totales del brindis
max_brindis=(k*l)//(n*nl)
#totales de rodajas lima
max_limas=((c*d)//n)
#totales sal
max_sal=p//(n*np)

print(min(max_brindis,max_limas,max_sal))