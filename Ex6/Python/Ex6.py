try:
    while True:
        char = input('Nhap phim bat ki (An ESC de thoat): ')
        a= ord(char)
        b = hex(a)
        print(b)

except KeyboardInterrupt:
    pass