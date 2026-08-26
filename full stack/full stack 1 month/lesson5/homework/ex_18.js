let arr = []
let num = 10
let index_1 = 5
let index_2 = 7
for (let i =0; i<num;i++)
{
    arr.push(Math.floor(Math.random()*100))
}
console.log(arr)

let ms = arr.splice(index_1,index_2)
console.log(ms)
ls = ms.reduce((total,el) =>{
    return total+=el })
console.log(ls)

