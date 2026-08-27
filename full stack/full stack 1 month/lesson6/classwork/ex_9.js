function add_new_student(ms,name,age,grade)
{
    let arr = {name: name, age: age, grades: grade}
   
    
    for (let i = 0;i<ms.length;i++)
    {
        let s = ms[i]
        if(name == s['name'])
        {
            return `${name} allaqachon ruyxatda bor`
        }
    }
    ms.push(arr)
    return ms
}

function find_top_student(ms,k)
{
    let max_name;
    for(let i = 0; i<ms.length; i+=1)
    {
       let mark = ms[i].average_grades
        if(mark == k)
        {
            max_name = ms[i].name
        }
    }
    return {name: max_name, average_grade: k }
}


let students = [
  { name: "Aziz", age: 20, grades: [85, 90, 78] },
  { name: "Malika", age: 19, grades: [92, 88, 95] },
  { name: "Bekzod", age: 21, grades: [70, 65, 80] }
];
let ls = add_new_student(students, "Asliddin", 20, [88, 91, 79])
let get_average_grade = students.map((student) =>
    {
     let get_grade = student.grades.reduce((total,grade) =>{
        return total + grade
    },0)   
   let mark =  (get_grade/student.grades.length).toFixed(2)
   return { name: student.name, average_grades: mark }
    })

let mark = get_average_grade.map((student) => 
{
        return student.average_grades
})
let top_student_grade = Math.max(...mark)
res_top_student = find_top_student(get_average_grade,top_student_grade)
let sort_student_by_mark = get_average_grade.sort((a,b) => { 
    return b.average_grades - a.average_grades })

let filter_student_by_mark = get_average_grade.filter(mark => {
    return mark.average_grades >=85 })
console.log(filter_student_by_mark)