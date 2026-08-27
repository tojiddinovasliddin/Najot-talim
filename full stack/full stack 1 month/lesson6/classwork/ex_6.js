let arr = [1, 2, 3, 4, 5, 6]
let filter = arr.filter(a => {
    return a%2==0 })
let map  = filter.map((a) =>{
    return a**2 })
let sort = map.sort((a,b) => {
    return b-a })
    console.log(sort)
