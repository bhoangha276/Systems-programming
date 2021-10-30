import random
import array as arr
import time

print("Random number:")
mang = arr.array('i', [])
while True:
    num = random.randint(0,10000)
    mang.append(num)
    print(num)
    length = len(mang)
    for i in range(0,length-1):
        for j in range(i+1,length):
            if(mang[i]<mang[j]):
                tg=mang[i]
                mang[i]=mang[j]
                mang[j]=tg
    print("3 Số Lớn Nhất")
    print(mang[0])
    if(len(mang)>1):
        print(mang[1])
    if(len(mang)>2):
        print(mang[2])
    print('')

    time.sleep(4)
