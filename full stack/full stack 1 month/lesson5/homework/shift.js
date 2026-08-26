Array.prototype.myShift = function(...el){
   if(this.el == 0)
   {
        return undefined
   }
    let first = el[0]
   for (let i = 0; i<this.length-1; i++)
   {
        this[i]=this[i+1]
   }
   this.length = this.length - 1;
   return first
}


let arr1 = [1,2,3]
let arr = [1,2,3]
let res = arr.shift()
let res1 = arr1.myShift()
console.log(arr)
console.log(arr1)