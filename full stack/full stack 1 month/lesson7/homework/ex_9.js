const permissions = ["read", "write", "update", "write", "read", "read", "delete", "delete"];
const required = ["read", "write", "update"];
let a = new Set(permissions)
console.log(a)

let all = required.every((permissions) => { return a.has(permissions) })
console.log(all)
let not_have = required.filter((permissions) => { return !a.has(permissions) })
console.log(not_have)