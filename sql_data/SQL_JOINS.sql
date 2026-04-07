use MyDatabase

-----------------------------SQL JOINS (To combine the data/Tables)--------------------------------------------

--Note: To combine the tables we use two methods i.e Using the JOIN (For combining via Columns) and Using the SET operators (For combining via Rows)

/*

Q. What is SQL JOIN 
>> SQL JOIN is way to combine the data from different tables with the help of their common key(column).
>> To JOIN tables we need Keys.

Q. Why we need SQL JOINS
>> 1. Recombining Data : 
		Means to combine data from different tables which conveys common information, eg. Combining data 
		from Customers, orders, reviews, payment gateway tables together to get BIG PICTURE of whole data)

	2. Data Enrichment:
		Means to enhace the data of master table by adding some important information from reference table.

	3. Check Exsitence(Filtering):
		It's not about combining the tables, it's about to perform filtering of Master(main) table by looking 
		the lookup table.(eg. Customers from Customer_Table who made orders from order_table will only exist.)


		Types of JOINS:

		Basics-									Advanced-

		>> INNER JOIN						>> LEFT ANTI JOIN
		>> LEFT JOIN						>> RIGHT ANTI JOIN
		>> RIGHT JOIN						>> FULL ANTI JOIN
		>> FULL JOIN						>> CROSS JOIN

*/

---------------------------------------------------------------------------------------------------------------------
										/* Basic JOINS */
---------------------------------------------------------------------------------------------------------------------


------------------------------------------ INNER JOIN-------------------------------------------------------------

-- INNER JOIN only returns the Matching/common Rows from both the tables
-- By default JOIN is INNER in nature

SELECT * FROM customers
SELECT * FROM orders


SELECT * FROM customers
INNER JOIN orders
ON customers.id=orders.customer_id   --Tip: Sometimes while combining the tables, the name of columns of 
									-- both table that share common data are same and create confusion so we 
									-- should use table_name1.column_name1 = table_name2.column_name2 (Best Practice)



--Tip 2 : We can provide an Alias names to both the table in order to avoid writing long names everytime
--eg:

SELECT * FROM orders AS O   -- C is alias name of table customers and O is for orders
INNER JOIN customers AS C
ON C.id=O.customer_id


----------------------------------------------LEFT JOIN -----------------------------------------------------------------------

-- LEFT JOIN returns all rows from left tabel and only macthing(common) rows from right table
-- The left side is consider as Primary sorce of data and right side is conside as secondary source of data
-- The table which written first with SELECT clause is consider as Left table(Primary source)

SELECT * FROM orders AS O   -- orders is Left Table here and customer is a Right Table
LEFT JOIN customers AS C   -- means all data of Left tabel(orders) will return
ON C.id=O.customer_id

-------------------------------RIGHT JOIN (Opposite of LEFT JOIN)-----------------------------------------------

-- RIGHT JOIN returns all rows from Right tabel and only macthing(common) rows from Left table
-- The Right side is consider as Primary sorce of data and Left side is conside as secondary source of data
-- The table which written first with SELECT clause is consider as Left table

SELECT * FROM customers AS C	-- customers is Left table here and orders is right table
RIGHT JOIN orders AS O			-- means all data of right table(orders) will return  
ON O.customer_id=C.id

-- Tip: Always rely and prefer only one type of JOIN either LEFT or RIGHT and Prefer LEFT JOIN most.


---------------------------------------FULL JOIN----------------------------------------------------------------------

-- Returns all the rows from both table
-- No left or right table significance ( like as in INNER JOIN)

SELECT * FROM customers AS C
FULL JOIN orders AS O
ON C.id=O.customer_id

---------------------------------------------------------------------------------------------------------------------
										/* Advanced JOINS */
---------------------------------------------------------------------------------------------------------------------

---------------------------------------LEFT ANTI JOIN ------------------------------------------------------------------







