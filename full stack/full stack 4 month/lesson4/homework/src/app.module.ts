import { Module } from '@nestjs/common';
import { ConfigModule } from '@nestjs/config';
import { PrismaModule } from './database/prisma.module.js';
import { UsersModule } from './users/users.module.js';
import { TeachersModule } from './teachers/teachers.module.js';
import { StudentsModule } from './students/students.module.js';

@Module({
  imports: [
    ConfigModule.forRoot({
      isGlobal:true
    }),
    PrismaModule,
    UsersModule,
    TeachersModule,
    StudentsModule
  ],

})
export class AppModule {}
