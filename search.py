##Iterative program of linear search
def linearsearch(arr,x):
    n = len(arr)
    
    for i in range(0,n):
        if arr[i] == x:
            return i
    return -1
    
if __name__ == "__main__":
    arr = [1,2,3,4,5,6]
    x = 5
    
    result = linearsearch(arr,x)
    
    if result == -1:
        print("Element not found")
    else:
        print("Element found at index ",result)
        
        
    
##Iterative program of Binary search
def binarysearch(arr,x):
    low = 0
    high = len(arr)-1
    while low <= high:
        mid = low+(high-low)-1
        if arr[mid] == x:
            return mid
        elif arr[mid] < x:
            low = mid + 1
        else:
            high = mid - 1
    return -1

if __name__ == "__main__":
    arr = [10,20,30,40,50,60]
    x = 30
    
    result = binarysearch(arr,x)
    if result != -1:
        print("Element is present at index ",result)
    else:
        print("Element Not found")