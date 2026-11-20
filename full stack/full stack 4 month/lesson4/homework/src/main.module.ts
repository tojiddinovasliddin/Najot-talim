import { Module } from "@nestjs/common";
import { TeacherModule } from "./teachers/teacher.module.js";

@Module({
  imports:[TeacherModule]
})

export class MainModule{}