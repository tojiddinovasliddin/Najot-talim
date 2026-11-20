import { IsInt, isInt, IsNumber, IsPhoneNumber, IsPositive, isPositive, IsString, MaxLength, MinLength} from "class-validator"

export class CreateTeacherDto {
     @IsString()
     @MinLength(5)
     @MaxLength(20)
    name:string

    @IsPhoneNumber('UZ')
    phone:string

    @IsNumber()
    @IsInt()
    @IsPositive()
    age:number

    @IsString()
    @MinLength(8)
    @MaxLength(20)
    password:string

}
