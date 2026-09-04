const groupA = ["Ali", "Vali", "Hasan", "Sardor", "Bekzod"];
const groupB = ["Vali", "Hasan", "Jasur", "Sardor", "Aziz"];
let A = new Set(groupA)
let B = new Set(groupB)
let both_group_student = A.intersection(B)
console.log(both_group_student)
let has_only_A = A.difference(B)
console.log(has_only_A)
let has_only_B = B.difference(A)
console.log(has_only_B)
let only_a_group = A.union(B)
console.log(only_a_group)
