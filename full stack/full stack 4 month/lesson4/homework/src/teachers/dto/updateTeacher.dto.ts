import { IsInt, IsNumber, IsOptional, IsPort, IsPositive, IsString, MaxLength, MinLength } from "class-validator"

export class UpdateTeacherDto{
    @IsString()
    @MinLength(5)
    @MaxLength(20)
    @IsOptional()
    name:string
    @IsNumber()
    @IsInt()
    @IsPositive()
    @IsOptional()
    age:number
}