import { NestFactory } from '@nestjs/core';
import { MainModule } from './main.module.js';
import { Validate } from 'class-validator';
import { ValidationPipe } from '@nestjs/common';

async function bootstrap() {
  const app = await NestFactory.create(MainModule, {
  });
    app.useGlobalPipes(new ValidationPipe({
      whitelist:true,
      transform:true
    }))
  app.setGlobalPrefix("api/v1")
  await app.listen(process.env.PORT ?? 3000);
  
}
await bootstrap();
