Array.prototype.myPop = function(...el){
    for (const value of el) {
        this[this.length-1] = value
    }
    return this.length
}

let arr1 = [1,2,3]
let arr = [1,2,3]
let res = arr1.pop()
let res1 = arr.myPop()
console.log(res)
console.log(res1)