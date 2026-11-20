import { Injectable } from "@nestjs/common";
import { CreateTeacherDto } from "./dto/createTeacher.dto.js";


@Injectable()

    export class TeacherService{
        getAllTeacher(){
            return "Salom"
        }
        createTeacher(payload:CreateTeacherDto){
            return{
                success:true,
                message:"User created"
            }
        }
    }
