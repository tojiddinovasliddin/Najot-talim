import { IsEmail, IsIn, IsInt, IsNumber, isNumber, IsPositive, IsString, MaxLength, MinLength } from "class-validator"

export class CreateUserDto {
    
    @IsString()
    @MinLength(5)
    @MaxLength(40)
   fullname: string
  
    @IsEmail()
  email: string
  
  @IsNumber()
  @IsInt()
  @IsPositive()
  age:number
}
