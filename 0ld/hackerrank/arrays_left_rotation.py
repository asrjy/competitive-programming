a, b = map(int, input().split())
nums = list(map(int, input().split()))

for i in range(b, a):
    print(nums[i], end = " ")

for i in range(b):
    print(nums[i], end = " ")
