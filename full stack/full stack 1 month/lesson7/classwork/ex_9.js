let arr = [1, 2, 3, 4]
let arr1 = [3, 4, 5, 6]
let ms = new Set(arr)
let ms1 = new Set(arr1)
let res = ms.intersection(ms1)
res = [...res]
console.log(res)