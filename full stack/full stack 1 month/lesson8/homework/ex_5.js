class User{
    constructor(id, name, email)
    {
        this.id = id
        this.name = name
        this.email = email
    }
}
class Admin extends User {
    add_new_task = []
    employee_with_task = []
    constructor(id, name, email, employees = []) {
        super(id, name, email)
        this.employees = employees
    }
    AddEmployees(new_employees) {
        if (!this.employees.includes(new_employees)) {
            this.employees.push(new_employees)
        }
    }
    DeleteEmployees(employee) {
        this.employees = this.employees.filter(name => { return name != employee })
    }
    AddTask(name) {
        this.add_new_task.push(name)
       
    }
    give_task_for_employee(employee_name, task_name) {
        if (this.employees.includes(employee_name)) {
            if (this.add_new_task.includes(task_name)) {
                this.employee_with_task.push({
                    worker: employee_name,
                    task: task_name
                })
               
            }
        }
    }
 
    getInfo() {
        return this.employees
    }

}
class Employee{
    pending = []
    progress = []
    completed = []
    constructor()
    {
        this.employee_list = admin.employee_with_task
        
    }
    check_status(emloyer_name, task,status)
    {
        for (let i = 0; i < this.employee_list.length; i++)
        {
            let a = this.employee_list[i]
            if (a.worker === emloyer_name && a.task === task && status === "pending") {
                this.pending.push("1")
            }
            else if (a.worker === emloyer_name && a.task === task && status === "in_progress") {
                this.progress.push("1")
            }
            else if (a.worker === emloyer_name && a.task === task && status === "completed") {
                this.completed.push("1")
            }
        }
            
    }
    giveInfo()
    {
        return this.employee_list
    }
}
class Customer{
    add_new_Customer = []
    addCustomer(id,name,phone,email)
    {
        this.add_new_Customer.push({
            id: this.id,
            name: this.name,
            phone: this.phone,
            email: this.email
        
        })

    } 
}
class CRM{
    constructor()
    {
        this.employee_list = admin.employee_with_task
        this.add_new_task = admin.add_new_task
        this.add_new_Customer = customer.add_new_Customer
        this.completed = employee.completed
        this.pending = employee.pending
        this.progress = employee.progress
    }
    getStatistic()
    {
        return {
            Total_Employees: this.employee_list.length,
            Total_Customer: this.add_new_Customer.length,
            Total_Task: this.add_new_task.length,
            Pending_task: this.pending.length,
            In_progress_task: this.progress.length,
            Completed_task: this.completed.length
        }
    }
}

let admin = new Admin(1, "Asliddin", "tojiddinov", ["Umed","Aydb","Asad","Jasur"])
admin.AddEmployees("Ayub")
admin.DeleteEmployees("Umed")
admin.AddTask("Ishla")
admin.AddTask("IT")
admin.AddTask("Developer")
admin.give_task_for_employee("Ayub", "Ishla")
admin.give_task_for_employee("Asad", "IT")
admin.give_task_for_employee("Jasur","Developer")

let employee = new Employee()
employee.check_status("Ayub", "Ishla", "pending")
employee.check_status("Asad", "IT", "completed")
employee.check_status("Jasur", "Developer","in_progress")
//console.log(worker.giveInfo())
let customer = new Customer()
customer.addCustomer(1, "Asliddin", 212, "tojididnov")
let crm = new CRM()
console.log(crm.getStatistic())

