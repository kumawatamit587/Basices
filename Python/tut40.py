str=str(input("Enter the sentence: \n"))
print(str)
strlst=str.split()

encodedStr=""
for i in range(0,len(strlst)):
    if len(strlst[i])>=3:
        firstcharofword=strlst[i][0]
        remword=strlst[i].replace(strlst[i][0],"")
        changeword=remword+firstcharofword
        wordendcoded="dsk"+changeword+"jkr"
        encodedStr=encodedStr+wordendcoded+" "
    else:
        revword=strlst[i][::-1]
        encodedStr=encodedStr+revword+" "
        
print(encodedStr)

checkDecode=int(input("Enter to decode 1 or for not decode enter 0: )"))
destrlst=encodedStr.split()
print(destrlst)
denewstr=""
if(checkDecode==1):
    for j in range(0,len(destrlst)):
         if len(destrlst[j])>=3:
            #  denew=destrlst[j][3:-3]
             denew=destrlst[j][3:-3][-1]+destrlst[j][3:-3][:-1]
             print(denew)
             denewstr=denewstr+denew+" "
         else:
             denew=destrlst[j][::-1]
             denewstr=denewstr+denew+" "

print(denewstr)
             



