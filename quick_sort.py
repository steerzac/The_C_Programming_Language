import random

def quick_sort(arr, left, right):
    if left >= right:
        return
    p = right
    less = left-1
    for i in range(left, p):
        if arr[i] < arr[p]:
            less += 1
            arr[i], arr[less] = arr[less], arr[i]
    less += 1
    arr[p], arr[less] = arr[less], arr[p]
    quick_sort(arr, left, less-1)
    quick_sort(arr, less+1, right)

if __name__ == "__main__":
    arr = []
    n = 10
    for i in range(0, n):
        arr.append(random.randint(0, 101))
    print("Unsorted: {}".format(arr))
    quick_sort(arr, 0, n-1)
    print("Sorted: {}".format(arr));
