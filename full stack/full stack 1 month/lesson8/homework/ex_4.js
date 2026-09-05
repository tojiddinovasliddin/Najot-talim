class Person
{
    constructor(name, age)
    {
        this.name = name
        this.age = age
    }
    getInfo()
    {
        return `Name: ${this.name}, Age: ${this.age}`
    }
    addSubject(name, subject) {
        for (let i = 0; i < this.subjects.length; i++) {
            let s = this.subjects[i]
            if (this.ms.includes(name)) {
                if (!this.subjects.includes(subject)) {
                    this.subjects.push(subject)
                    return `${name}ning barcha fanlari: ${this.subjects}`
                    break
                }
                else {
                    return `${name}ga ushbu fan biriktirilgan`
                }
            }
            else {
                return `${name}ga fan biriktirishdan oldin uni ruyxatga qushish shart`
            }
        }
    }

}
class Student extends Person {
    ms = []
    constructor(name, age, studentId, subjects = []) {
        super(name, age)
        this.studentId = studentId
        this.subjects = subjects
        this.ms.push(this.name)
    }
    getInfo() {
        return `Name: ${this.name}, Age: ${this.age}, StudentId: ${this.studentId},Subjects: ${this.subjects.join(", ")}`
    }
}
class Teacher extends Person{
    ms = []
    constructor(name, age, salary, subjects = [])
    {
        super(name, age)
        this.salary = salary
        this.subjects = subjects
        this.ms.push(this.name)

    }
    getInfo()
    {
        return `Name: ${this.name}, Age: ${this.age}, Salary: ${this.salary},Subjects: ${this.subjects.join(", ")}`   
    }
}
class Course{
    constructor(name, teacher, students = [])
    {
        this.name = name
        this.teacher = teacher 
        this.students = students
    }
    addStudent(name)
    {
        this.students.push(name)
    }
    removeStudent(name)
    {
        this.students = this.students.filter(student => { return student != name})
    }
    setTeacher(name)
    {
        this.teacher = name
    }

    getStudents()
    {
        return this.students
    }
    getCourseInfo()
    {
        return {
            Course_name: this.name,
            Teacher_name: this.teacher,
            Students: this.students.join(", ")
        }
    }
   

}

let student = new Student("Asliddin", 21, 1, ["Maths", "English"])
console.log(student.getInfo())
console.log(student.addSubject("Umed", "C++"))

let teacher = new Teacher("Umed", 21, 123, ["Maths", "English"])
console.log(teacher.getInfo())
console.log(teacher.addSubject("Asliddin", "Maths"))

let course = new Course("Maths", "Asliddin", ["Ayub", "Umed"])
course.removeStudent("Ayub")
course.addStudent("Jasur")
course.setTeacher("Muxsin")
console.log(course.getStudents())
console.log(course.getCourseInfo())




