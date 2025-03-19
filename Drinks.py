n=int(input())
m=list(map(int,input().split()))
total=sum(m)
# Calcular el porcentaje promedio
avarage = (total / n)
# Imprimir con 4 decimales para cumplir con la precisión requerida
print(f"{avarage:.12f}")

