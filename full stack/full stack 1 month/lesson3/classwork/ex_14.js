let talabalar = [
  { ism: "Ali", fan: "Matematika", ball: 78 },
  { ism: "Vali", fan: "Fizika", ball: 55 },
  { ism: "Guli", fan: "Matematika", ball: 91 },
  { ism: "Dilnoza", fan: "Kimyo", ball: 40 },
  { ism: "Sardor", fan: "Matematika", ball: 66 },
  { ism: "Nodira", fan: "Fizika", ball: 82 }
];

let student=talabalar.filter(maths => {
    return maths.fan=="Matematika" && maths.ball>=60
})
console.log(student)

let name_big=student.map((students) => {
    return students.ism.toUpperCase() })

console.log(name_big)