import ctypes

_isdigit = cytypes.CDLL("./100-operations.so")
print(type(_isdigit))
int c = '0'
print('{}: {}'.format(c, c._isdigit()))
print("Done")
