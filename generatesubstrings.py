a = "abcde"
substrings = []
for i in xrange(0,2**len(a)):
    b = str(bin(i)[2:])
    k = len(a)
    s = ""
    for j in xrange(len(b),0,-1):
        k = k - 1
        if(b[j-1] == '1' ):
            s += a[k]
    substrings.append(s)

print substrings