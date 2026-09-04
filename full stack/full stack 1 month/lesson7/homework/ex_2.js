const students = [
    { id: 1, name: "Ali", group: "A", score: 85 },
    { id: 2, name: "Vali", group: "B", score: 72 },
    { id: 3, name: "Hasan", group: "A", score: 95 },
    { id: 4, name: "Husan", group: "B", score: 88 },
    { id: 5, name: "Aziz", group: "A", score: 65 },
    { id: 6, name: "Sardor", group: "B", score: 91 }
]

const groups = new Map()
for (let student of students) {

    if (!groups.has(student.group)) {
        groups.set(student.group, [])
    }
    groups.get(student.group).push(student)
}
console.log(groups)

const students_by_Id = new Map()

for (let student of students) {
    students_by_Id.set(student.id, student)
}
console.log(students_by_Id)
const averages = new Map()
for (let [group, students] of groups) {
    let sum = 0
    for (let student of students) {
        sum += student.score
    }
    let average = sum / students.length

    averages.set(group, average)
}
console.log(averages)


const Max_Students = new Map()

for (let [group, students] of groups) {

    let Max_Student = students[0]

    for (let student of students) {

        if (student.score > Max_Student.score) {
            Max_Student = student
        }
    }

    Max_Students.set(group, Max_Student)
}
console.log(Max_Students)

let hight_group = ""
let high_max = -Infinity

for (let [group, average] of averages) {

    if (average > high_max) {
        high_max = average
        hight_group = group
    }
}
console.log(`Eng yuqori o'rtacha ball ${hight_group} guruhida: ${high_max.toFixed(2)}`)