const visitors = [
101, 102, 103, 101, 104,
    102, 105, 103, 106, 101
];
let visitor = new Set(visitors)
console.log(visitor)

let size_visitor = visitor.size
console.log(size_visitor)
let filter_visitor = new Map()
for (let user of visitors)
{
    if (filter_visitor.has(user))
    {
        filter_visitor.set(user,filter_visitor.get(user) + 1)
    }
    else
    {
        filter_visitor.set(user,1)
    }
}
console.log(filter_visitor)

let more_visitor = []
let one_visitor = []
for (let [key, value] of filter_visitor)
{
    if (value > 1)
    {
        more_visitor.push(key)
    }
    else
    {
        one_visitor.push(key)
    }
} 
console.log(more_visitor)
console.log(one_visitor)

let max = 0
let name_max;
for (let [key, value] of filter_visitor)
{
    if (value > max)
    {
        max = value
        name_max = key
    }
}
console.log(name_max)