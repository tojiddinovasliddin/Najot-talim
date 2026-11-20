import { PartialType } from '@nestjs/mapped-types';
import { CreateTeacherDto } from './create-teacher.dto.js';
import { IsInt, IsNumber, IsPhoneNumber, IsPositive, IsString, MaxLength, Min, MinLength } from 'class-validator';

export class UpdateTeacherDto extends PartialType(CreateTeacherDto) {
    
    @IsString()
    @MinLength(4)
    @MaxLength(20)
    name?:string 

    @IsPhoneNumber('UZ')
    phone?: string 
    @IsNumber()
    @IsInt()
    @IsPositive()
    age?: number

    @IsString()
    @MinLength(8)
    @MaxLength(20)
    password?: string 
}
