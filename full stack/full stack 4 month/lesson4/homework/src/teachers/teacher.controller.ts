import { Body, Controller, Get, Header, Post } from "@nestjs/common";
import { get } from "http";
import { TeacherService } from "./teacher.service.js";
import { CreateTeacherDto } from "./dto/createTeacher.dto.js";


@Controller("teacher")
export class TeacherController{
    constructor(private readonly teacherService:TeacherService){}
    @Get("all")
    getAllTeacher(){
        return this.teacherService.getAllTeacher()
    }
    @Post("createNewTeacher")
   createTeacher(@Body() payload: CreateTeacherDto):{success:boolean,message:string}{
        return this.teacherService.createTeacher(payload)
   }
}