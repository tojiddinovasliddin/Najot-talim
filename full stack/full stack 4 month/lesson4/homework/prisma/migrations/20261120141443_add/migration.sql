/*
  Warnings:

  - You are about to drop the `Students` table. If the table is not empty, all the data it contains will be lost.

*/
-- DropTable
DROP TABLE "Students";

-- CreateTable
CREATE TABLE "students" (
    "id" SERIAL NOT NULL,
    "name" TEXT NOT NULL,
    "subject" TEXT NOT NULL,
    "password" TEXT NOT NULL,

    CONSTRAINT "students_pkey" PRIMARY KEY ("id")
);
