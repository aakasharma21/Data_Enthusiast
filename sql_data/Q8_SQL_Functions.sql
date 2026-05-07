
---------------------------------------------------SQL Functions------------------------------------------------------------------

/*

Q. What is Functions?
>> Functions are the set of instructions/lines of code in order to perform particular task eg. SUM(), MIN(), MAX(), CONCAT(), REPLACE(), etc.

	>> To Work with Functions we need input i.e., either single input or multiple inputs (more than one).
	>> Functions which work with single input (only nedd single operand) called Single-Row Functions eg: MAX(), MIN(), etc.
	>> Fucntions which work with multiple input(more than one operand) called Multi-Row Functions. eg: SUM(), CONCAT(), etc.


>> Concept of Nested Functions
	Function inside a function called Nested function.

	To_Remember: Execution will take place from Right to Left / Written First will Execute First

>> Types of SQL Functions:

	1. Single-Row Functions(Row Level Calculations)  -- Data Engineers generally used Single-Row Functions to prepare the data like Cleaning/Filtering/Transformation for further Analysis.
		
		>> String Fucntions - 
			1. Manipulation: CONCAT(), UPPER(), LOWER(), TRIM(), REPLACE()
			2. Calculation: LEN()
			3. Extraction: LEFT(), RIGHT(), SUBSTRING()

		>> Numeric Functions
		>> Date & Time Functions
		>> NULL Functions

	2. Multi-Row Functions(Aggregations)  -- Data Analyst generally used Multi-Row Functions for Data Analysis. 
		>> Aggregate Functions
		>> Window Functions

*/


use SalesDB
use MyDatabase

SELECT * FROM sales.Customers

SELECT FirstName, Country FROM Sales.Customers

SELECT CONCAT(FirstName, '  ' ,LastName) AS Name, Country FROM Sales.Customers    -- CONCAT() is used to concatinate two strings or string with space together.

SELECT TOP 3 CONCAT(FirstName,'  ',LastName) FROM sales.Customers
ORDER BY CustomerID DESC

SELECT UPPER(FirstName) AS Upper_case, LOWER(LastName) AS Lower_case, * FROM Sales.Customers

SELECT * FROM customers
SELECT 'Aakash' AS consumer, * FROM sales.Orders

SELECT * FROM Sales.Orders

SELECT LEN(first_name) AS Length, first_name FROM customers

SELECT  first_name FROM customers
WHERE LEN(first_name) != LEN(TRIM(first_name))   -- TRIM() is used to remove the leading and trailing spaces in a string

SELECT TRIM(first_name), LEN(first_name) as Length, 
LEN(TRIM(first_name)) as Correct_length, LEN(first_name)-LEN(TRIM(first_name)) as Flag    -- Best practice to use/create 'Flag' to check the differences 
FROM customers




SELECT  SUM(Sales) AS Total_sale   FROM Sales.Orders
WHERE OrderStatus='Delivered'


SELECT  REPLACE(OrderStatus,'Shipped','Returned') AS Order_status  FROM Sales.Orders

SELECT  DATEDIFF(DAY,OrderDate,ShipDate) AS NO_of_Days  FROM Sales.Orders