--use mydatabase

-- DDL(Data Definition Language) :
	--> CREATE, ALTER, DROP
	
--------------------------------------------------------------------------
--------------------------------------------------------------------------
-- Syntax to Create a Table in Database --
/*
	CREATE TABLE "Table_name"
	( 
		"1st_colmn_name" "Data_type" "specify_Constraint(if any)",
		"2nd_colmn_name" "Data_type" "specify_Constraint(if any)",
		"3rd_colmn_name" "Data_type" "specify_Constraint(if any)",
		
		CONSTRAINT "name_of_primary_key as per choice" PRIMARY KEY("declare colmn name as an argument")
	)
*/
---------------------------------------------------------------------------------------------------------------------
-- Task 1 - Create a new table called person with coloumns: id,Name,DOB and phone
/*
CREATE TABLE Employee
(
	id INT NOT NULL,
	Emp_name VARCHAR(50) NOT NULL,
	DOB DATE,
	Phone VARCHAR(15) NOT NULL,
	Emp_Location VARCHAR(50),
	CONSTRAINT Pk_employee PRIMARY KEY(id)

)
*/

---------------------------------------------------------------------------------------------------------------------------------
-- ALTER = For edit the definition/structure of table like adding of columns, change of data types, etc.

/* Task 2 -  Adding of new coloumn */

--ALTER TABLE Employee
--ADD Email VARCHAR(50) NOT NULL

/* Task 3 -  Remove of existing coloumn */

--ALTER TABLE Employee
--DROP COLUMN Emp_Location


--SELECT *
--FROM Employee 

-- DROP TABLE Employee   // Used to drop/delete complete Table from database