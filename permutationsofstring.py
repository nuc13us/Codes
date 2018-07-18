def generate(str):
    result = []
    if(len(str) == 0):
        result.append("")
        return result

    for i in range(0,len(str)):
        sub = generate(str[0:i] + str[i+1:len(str)])
        for j in sub:
            result.append(str[i] + j)

    return result

if __name__ == "__main__":
    substring = generate("abcd")
    print substring