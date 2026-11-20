import { IsInt, IsNumber, IsOptional, IsPositive, IsString, MaxLength, MinLength } from "class-validator"

export class CreateTeacherDto{
   @IsString()
   @MinLength(4)
   @MaxLength(20)
    name:String
    @IsNumber()
    @IsInt()
    @IsPositive()
    age:number
}