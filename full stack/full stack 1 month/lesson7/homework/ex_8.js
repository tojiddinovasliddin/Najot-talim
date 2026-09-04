const text1 = `
javascript is a programming language
and javascript is very popular
`;
const text2 = `
typescript is a programming language
and javascript can run in browser
`;

let words1 = text1.trim().split(/\s+/)
let words2 = text2.trim().split(/\s+/)
let set1 = new Set(words1)
let set2 = new Set(words2)
let both = set1.intersection(set2)
console.log(both)
let only_one = set1.difference(set2)
console.log(only_one)
let only_two = set2.difference(set1)
console.log(only_two)