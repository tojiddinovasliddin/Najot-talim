class Person{
    constructor(name, age)
    {
        this.name = name
        this.age = age
    }

}
class Student extends Person {
    constructor(name, age, grade)
    {
        super(name, age)
        this.grade = grade
    }
    getInfo()
    {

        return `name: ${this.name}, age: ${this.age}, grade: ${this.grade}`
    }
}
let student = new Student("Umed", 12, 5)
console.log(student.getInfo())
