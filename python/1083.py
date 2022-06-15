n, fac = input().split()
n = int(n)
fac_len = len(fac)

temp = n
while temp-fac_len>0:
    n = n*(temp-fac_len)
    temp = temp-fac_len

print(n)