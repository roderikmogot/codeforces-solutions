# import sympy
#
# t = 0
# for i in range(2, 1000000):
#     if sympy.isprime(i):
#         b = str(i)
#         check = True
#         for j in range(len(b)):
#             temp = -1
#             if sympy.isprime(int(b[::temp])):
#                 temp = temp - 1
#             else:
#                 check = False
#
#         if check:
#             t += 1
#
# print(t)