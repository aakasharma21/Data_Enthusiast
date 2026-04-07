/*
--> To delete the existing database

ALTER DATABASE mylearnings SET SINGLE_USER WITH ROLLBACK IMMEDIATE  
DROP DATABASE mylearnings				

--Note: First we need to switch the database into single user mode and need to 
  rollback(means Force all current users to exit immediately) and then drop(delete) the database

*/
use MyDatabase

-------------------------------------------------Filtering of Data in SQL-------------------------------------------------------------------
-- WHERE operators:
	-- Comparsion operator: = , <> =! , > , >= , < , <=
	-- Logical operator: AND, OR, NOT
	-- Range operator: BETWEEN 
	-- Memebership operator: IN, NOT IN
	-- Search operator: LIKE

-----------------------------------------------------------------------------------------------------------------------
SELECT * FROM customers

SELECT * FROM customers
WHERE score>250 AND score<800

SELECT * FROM customers
WHERE NOT score>250   -- NOT operator is used to reverse the output, behave as NOT logical gate

SELECT * FROM customers
WHERE score BETWEEN 500 AND 900 -- In BETWEEN operator lower and upper limit are also included in output
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

-- IN() operator is used in place to avoid the usage of nested where condtions with 'OR' , IN() operator provide a list of values which need to be included in output
--eg:

SELECT * FROM customers
WHERE country IN('UK','Germany') -- Values are passed as argument in IN() operator and behave as list

--Tip: Use IN() instead of OR for multiple values in the same column to simplify SQL.

SELECT * FROM customers
WHERE country NOT IN('UK','Germany')  -- Similarly for NOT IN(), provide those values as argument in list which need to be excluded

-----------------------------------------------------------------------------------------------------------------------------------------------

-- Use of LIKE (Search operator) -----------------------------------------------------------------

--LIKE is used to search a patter in the data of a particular column and return the output
-- '%' percentage symbol is behave as placeholder which indcates zero or any values/ string


--eg: Find all customers whose first name start with 'M'

SELECT * FROM customers
WHERE first_name LIKE 'M%'

-- where first_name ends with 'N'

SELECT * FROM customers
WHERE first_name LIKE '%N' 

-- where 'R' is present at 3rd position in first_name 

SELECT * FROM customers
WHERE first_name LIKE '__r%'

--------------------------------------------------------------------------------------------------



