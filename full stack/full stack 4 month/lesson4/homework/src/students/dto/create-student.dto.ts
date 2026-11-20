import { IsString, MaxLength, MinLength } from "class-validator"

export class CreateStudentDto {

    @IsString()
    @MinLength(3)
    @MaxLength(20)
    name:string

    @IsString()
    @MinLength(3)
    @MaxLength(20)
    subject:string

    @IsString()
    @MinLength(8)
    @MaxLength(20)
    password:string
}
