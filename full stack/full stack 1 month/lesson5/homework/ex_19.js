let arr =[2,7,4,1,3]
console.log(arr)

while(arr.length>1)
{
    arr.sort((a,b) =>a-b)
    var k = arr.pop()
    var s = arr.pop()
    var a = k-s
    arr.push(a)

}

console.log(arr)
