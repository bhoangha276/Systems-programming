def sap_xep_tang_dan(numbers):
 
    lenth = len(numbers)
 
    # Lặp từ phần tử đầu đến kế cuối,
    # Vì khi đến phần tử cuối là đã sắp xếp thànhcông
    for i in range(0, lenth - 1):
        for j in range(i + 1, lenth):
            if (numbers[i] > numbers[j]):
                # Hoán đổi vị trí
                tmp = numbers[i]
                numbers[i] = numbers[j]
                numbers[j] = tmp
 
    return numbers

def sap_xep_giam_dan(numbers):
 
    lenth = len(numbers)

    for i in range(0, lenth - 1):
        for j in range(i + 1, lenth):
            if (numbers[i] < numbers[j]):
                # Hoán đổi vị trí
                tmp = numbers[i]
                numbers[i] = numbers[j]
                numbers[j] = tmp
 
    return numbers

def xuat_ba_gia_tri_dau(numbers):
    print(numbers[0], numbers[1], numbers[2])
 
# Chương trình chính
print("Chương trình sắp xếp mảng Python")
print("Nhập số phần tử", end=":")
 
length = int(input())
numbers = []
 
for i in range(0, length):
    print("Nhập phần tử thứ", (i + 1), end=": ")
    numbers.append(int(input()))
 
print("Xuất mảng: ")
print(numbers)

# a.
print("Sắp xếp tăng dần: ")
print(sap_xep_tang_dan(numbers))
print("3 giá trị đầu: ")
xuat_ba_gia_tri_dau(numbers)

# b.
print("Sắp xếp giảm dần: ")
print(sap_xep_giam_dan(numbers))
print("3 giá trị đầu: ")
xuat_ba_gia_tri_dau(numbers)