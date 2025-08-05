def miniMaxSum(arr):
    total = sum(arr)
    minimum_value = min(arr)
    maximum_value = max(arr)
    
    minimum_sum = total - maximum_value
    maximum_sum = total - minimum_value
    
    print(minimum_sum,maximum_sum)

arr = list(map(int, input().split()))
miniMaxSum(arr)