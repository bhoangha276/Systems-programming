try:
    while True:
        char = input('Nhap phim bat ki (ESC de thoat): ')
        a= ord(char)
        b = hex(a)
        print(b[2:])

except KeyboardInterrupt:
    pass