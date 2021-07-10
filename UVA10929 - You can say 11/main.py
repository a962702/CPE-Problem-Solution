while True:
	num = int(input())
	if (num == 0):
		break
	if num % 11 == 0:
		print(num, "is a multiple of 11.")
	else:
		print(num, "is not a multiple of 11.")