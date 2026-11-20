import { Injectable } from '@nestjs/common';
import { CreateUserDto } from './dto/create-user.dto.js';
import { UpdateUserDto } from './dto/update-user.dto.js';
import { PrismaService } from '../database/prisma.service.js';

@Injectable()
export class UsersService {
   constructor(private prisma:PrismaService){}
  async create(createUserDto: CreateUserDto) {
    console.log(createUserDto)
      await this.prisma.user.create({
        data:createUserDto
      })
      return{
        succeff:true,
        message:"Teacher succeffuly  create"
      }
  }

  async findAll() {
  let allUser = await this.prisma.user.findMany({
      select:{
        id:true,
        fullname:true,
        age:true,
        email:false
      }
    })
    return{
      data:allUser?allUser : []
    }
  }

  async findOne(id: number) {
     let aUser =  await this.prisma.user.findUnique({
      where:{id:id}
    }) 
    return{
      data:aUser? aUser : []
    }
  }

  async update(id: number, updateUserDto: UpdateUserDto) {
    return `This action updates a #${id} user`;
  }

  async remove(id: number) {
        let checkUser = await this.prisma.user.findFirst({
      where:{id :id}
    })

    if(checkUser){
       await this.prisma.user.delete({
      where:{ id:id}
    })
    return{
      status:true,
      message:"User succeffully delete"
      }
    }
return{
        success:false,
        message:"Before deleting the user adding them"
      }
  }
}
