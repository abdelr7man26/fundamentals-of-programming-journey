-- DDL comands 

--it's comman that controls the table's schema 

-- creating database 

create database databaseone;

-- switch data base 

use databaseone; 

-- creating table 

create table tableone(
ID smallint not null,
name nvarchar(50) not null,
salary decimal(12,2) null,
phone nvarchar(12) null,
primary key (ID));

-- showing table 

select * from tableone;

-- edit table schema 

-- add column "attribute"

alter table tableone
add age tinyint null;

-- rename column 

--alter table tableone 
--rename column name to NAme;
-- it's a SQL command but not for sql server 

exec sp_rename 'tableone.name' , 'Name' , 'column';  

-- rename table 

exec sp_rename 'tableone' , 'oldtable';

--don't forget to use the new table name 

select * from oldtable;

-- modify column architecture 

alter table oldtable
alter column phone varchar(12) null;

-- note that this commansd is called modify instead of alter column in mySQl Oracle , postgress

-- delete column 

alter table oldtable
drop column age;

-- Trancute 





-- DML comands 

--it's commands that controls the table's Data or contents  

-- insert data into table  

insert into oldtable
values 
(1,'احمد' ,6000,'01068190567',22),
(2,'عبدالرحمن',20000,'01068190567',22),
(3,'حسن',50,'01068190567',15),
(4,'حامد',30000,'01068190567',30),
(5,'ندي',6000,'01068190567',27),
(6,'هاجر',15000,'01068190567',28),
(7,'محمد',200000,'01068190567',65);


-- showing table 

select * from oldtable;

-- edit row data  

update oldtable
set Name = 'منه' , salary = 8000
where ID = 1;

-- showing table 

select * from oldtable;

-- make sure from your condations before updating data aor otherwise you will updat tha whole table

-- select data from table and copy it into new non exist table  

select * 
into newtable
from oldtable;

-- showing table 

select * from newtable;
-- you can choose data as you want through using where condations or mention columns instead of * 

-- select data from table and copy it into new exist table  that must match the schema 

--create table 

create table thirdtable(
ID tinyint not null, 
Name nvarchar(50) not null,
salary decimal(12,2) null);

insert into thirdtable 
select ID, Name, salary from oldtable;

-- showing table 

select * from thirdtable;

-- make sure that the data you want to copy matched the new table schema 

--Delete data from table 
--delte all the data :

delete from thirdtable;

--delte selcetd data:
delete from newtable
where age <27;

-- make sure from your condations before deleting data or otherwise you will lose tha whole table



-- daelet the whole table from dat base 
drop table thirdtable;





-- backup database 

--backup the whole dat base:

backup database databaseone
to Disk = 'E:/backup.bak';

--to only backup the differential 

backup database databaseone
to Disk = 'E:/backupdiff.bak'
with differential;

-- consider that any time you create a diffeterntial backup it saves the deiffrentaial between the last full backup and the currnet version.

-- restore database
-- must use master 
use master ;
restore database databaseone
from disk = 'E:/backup.bak';


