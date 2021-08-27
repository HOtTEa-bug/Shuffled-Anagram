# Shuffled Anagram
# Without test-cases

count = 0 #global variable

def permute(t, s, answer):
    global count
    if count>0:
        return
    if (len(s) == 0):
        flag = 0
        for j in range(0,len(answer)):
            if answer[j] == t[j]:
                flag =1
                break
        if flag==0:
            count =  1
            print(answer, end = " ")
        return
	
    for i in range(len(s)):
        ch = s[i]
        left_substr = s[0:i]
        right_substr = s[i + 1:]
        rest = left_substr + right_substr
        permute(t, rest, answer + ch)

# Driver Code
answer = ""

s = input("Enter the string : ")
count = 0
t = s

permute(t, s, answer)
if(count == 0):
    print("impossible")
