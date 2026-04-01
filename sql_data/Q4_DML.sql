use MyDatabase


/*CREATE TABLE Employee
(
	id INT NOT NULL,
	Emp_name VARCHAR(50) NOT NULL,
	Emp_phone VARCHAR(15),
	CONSTRAINT Pk_Employee PRIMARY KEY(id)
)*/

--ALTER TABLE Employee
--ADD  country VARCHAR(50)

SELECT *
FROM Employee

/*

	INSERT INTO Employee
	VALUES(1,'Aakash Sharma',9873453452,'India'),
	(2,'Laddu',9873453454,'India'),
	(3,'Banke',9873453457,'India'),
	(4,'Radhe',9873453489,'India'),
	(5,'Shaali',9873453454,'India') 
	
*/

	--ALTER TABLE Employee
	--DROP COLUMN country


	 SELECT *
     FROM Employee

/*
	INSERT INTO Employee(Emp_name,Emp_phone)  // This is the case that we cannot skip that column which is not allowed to be NULL.

	VALUES('Girdhari',974545656)

*/

------------------------------------------------------------------------------------------------------------------------------------------

/* INSERT of data into Table using 'SELECT'(Automatic data insertion from source table to target table) */

-- Steps:
	--1. First we SELECT the data from Source table 
	--2. Then we INSERT into our Target table


/*

INSERT INTO Employee	// Remember: The no and dataypes  of cloumns must be same in both source and target table.

SELECT 
id,						// Note: PK values of both table must be different otherwise it shows error of duplicacy.
first_name,
score
FROM customers

*/


---------------------------------------UPDATE into Existing Table -----------------------------------------------------
/*
	UPDATE Employee
	SET id=50
	WHERE Emp_name='Krishu'  // Note: It is important to use WHERE condtion as it helps to target particular Row & coulmn 
								   otherwise all rows and entire column gets updated.
	

*/
----------------------------------   DELETE row from Exisiting Table ----------------------------------------------------------------------

/*	

	DELETE FROM Employee
	WHERE id<10

*/


	SELECT *
	FROM Employee