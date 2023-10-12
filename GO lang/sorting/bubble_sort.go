package main

import "fmt"

func bubbleSort(arr []int) {
    n := len(arr)
    swapped := true

    for swapped {
        swapped = false
        for i := 0; i < n-1; i++ {
            if arr[i] > arr[i+1] {
                // Swap arr[i] and arr[i+1]
                arr[i], arr[i+1] = arr[i+1], arr[i]
                swapped = true
            }
        }
    }
}

func main() {
    unsortedArray := []int{64, 34, 25, 12, 22, 11, 90}
    bubbleSort(unsortedArray)

    fmt.Println("Sorted Array:", unsortedArray)
}
