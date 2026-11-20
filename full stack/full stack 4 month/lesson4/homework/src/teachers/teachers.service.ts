import { Injectable } from '@nestjs/common';
import { CreateTeacherDto } from './dto/create-teacher.dto.js';
import { UpdateTeacherDto } from './dto/update-teacher.dto.js';
import { PrismaService } from '../database/prisma.service.js';

@Injectable()
export class TeachersService {
    constructor(private prisma:PrismaService){}
  async create(createTeacherDto: CreateTeacherDto) { 
      await this.prisma.users.create({
        data:createTeacherDto
      })
      return{
        succeff:true,
        message:"Teacher succeffuly  create"
      }
  }

  async findAll() {
    let allUser = await this.prisma.users.findMany({
      select:{
        id:true,
        name:true,
        age:true,
        password:false
      }
    })
    return{
      data:allUser?allUser : []
    }
  }
 
  async findOne(id: number) {
  let aUser =  await this.prisma.users.findUnique({
      where:{id:id}
    }) 
    return{
      data:aUser? aUser : []
    }
  }

  async update(id: number, updateTeacherDto: UpdateTeacherDto) //update does not work
  {
      let checkUser = await this.prisma.users.findFirst({
      where:{id :id}
    })

    if(checkUser){
      await this.prisma.users.updateMany({
        where:{
          id:id
        },
        data:{updateTeacherDto}
      })
    
    return{
      status:true,
      message:"Teacher succeffully delete"
      }
    }
return{
        success:false,
        message:"Before updating the teacher adding them"
      }
  }
  
  async remove(id: number) {
    let checkUser = await this.prisma.users.findFirst({
      where:{id :id}
    })

    if(checkUser){
       await this.prisma.users.delete({
      where:{ id:id}
    })
    return{
      status:true,
      message:"Teacher succeffully delete"
      }
    }
return{
        success:false,
        message:"Before deleting the teacher adding them"
      }
  }
}
