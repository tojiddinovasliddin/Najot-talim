import { Injectable } from '@nestjs/common';
import { CreateStudentDto } from './dto/create-student.dto.js';
import { UpdateStudentDto } from './dto/update-student.dto.js';
import { PrismaService } from '../database/prisma.service.js';

@Injectable()
export class StudentsService {
  constructor(private prisma:PrismaService){}
  async create(createStudentDto: CreateStudentDto) {
        await this.prisma.students.create({
        data:createStudentDto
      })

    return{
      success:true,
      message:"Student succeffuly created"
    }
  }

  async findAll() {
      let allUser = await this.prisma.students.findMany({
      select:{
        id:true,
        name:true,
        subject:true,
        password:false
      }
    })
    return{
      data:allUser?allUser : []
    }
  }

  async findOne(id: number) {
  let aUser =  await this.prisma.students.findUnique({
      where:{id:id}
    }) 
    return{
      data:aUser? aUser : []
    }
  }

  update(id: number, updateStudentDto: UpdateStudentDto) //teacherda qilolmadim chunga qilmadim bu yerda xam
  {
    return `This action updates a #${id} student`;
  }

 async remove(id: number) {
  let checkUser = await this.prisma.students.findFirst({
      where:{id :id}
    })

    if(checkUser){
       await this.prisma.students.delete({
      where:{ id:id}
    })
    return{
      status:true,
      message:"Students succeffully delete"
      }
    }
return{
        success:false,
        message:"Before deleting the student adding them"
      }
  
  }
}
