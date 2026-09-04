let arr = ["olma","nok","olma","nok","uzum","olma"]
let map = new Map()
for (const el of arr) {
    if (map.has(el)) {
        map.set(el, map.get(el) + 1)
    } else {
        map.set(el, 1)
    }
}
console.log(map)