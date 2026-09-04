function findCommon(arr1, arr2) {
    let a = new Set(arr1);
    let b = new Set(arr2);
    let c = a.intersection(b);
    return c
}

console.log(findCommon([1, 2, 3, 4], [3, 4, 5, 6])); // [3, 4]