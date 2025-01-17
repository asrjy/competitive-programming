def binary_search(a, k):
    # assumes array is sorted 
    # indices of low and high indices
    low, high = 0, len(a) - 1
    while low <= high:
        mid = low + (high - low ) // 2
        if a[mid] < k:
            # value is in the right part of array 
            low = mid + 1
        elif a[mid] > k:
            high = mid - 1
        else:
            best = mid
            break
        if abs(a[mid] - k) < abs(a[best] - k):
            best = mid
    return best 

            
