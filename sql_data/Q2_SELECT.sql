--use MyDatabase
-- Sorting of data using multiple "ORDER BY"

SELECT * FROM customers
--SELECT * FROM customers WHERE score>500 ORDER BY score ASC,country DESC

--------------------------------------------------------------------------------------------------------------------------------------------
/* SELECT 
    country AS Country_name,    -- AS - 'AS' keyword is used to provide an alias name to column but remember it will not reflect in orginal Database.
    SUM(score) AS Total_score
FROM customers
GROUP BY country
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
SELECT 
    country,
    --first_name,  // here the first_name cannot be included as it will show error because according to GROUP BY Rule: "All columns in SELECT must be either aggregated(sum up) or included in GROUP BY .
    SUM(score) AS total_score
FROM customers
GROUP BY country

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

SELECT 
    country,
    first_name,  
    SUM(score) AS total_score
FROM customers
GROUP BY country, first_name  -- Like this we can include "first_name" as well.

-------------------------------------------------------------------------------------------------------------------------------------------------------------
-- Q. Find total score and no of customers for each country

SELECT country,
COUNT(first_name) AS No_of_customers,
SUM(score) AS Total_score
FROM customers
GROUP BY country
-------------------------------------------------------------------------------------------------
-- Use of "HAVING" clause , Remember: "HAVING" will used after GROUP BY and perform filter after aggregation

SELECT country,
COUNT(first_name) AS No_of_customers,
SUM(score) AS Total_score
FROM customers
GROUP BY country
HAVING COUNT(first_name)>1  -- NOTE: IN "HAVING" we use aggregated column as an argument
*/
----------------------------------------------------------------------------------------------------------------
/* Find the average score for each country, considering only customers with 
   a score not equal to 0 and return only those countries with an average 
   score greater than 430 */

   SELECT country,
   AVG(score) AS Avg_score
   FROM customers
   WHERE score!=0
   GROUP BY country
   HAVING AVG(score)>430

------------------------------------------------------------------------------------------------------------
-- "DISTINCT" - used to remove duplicates and used immediate after SELECT
SELECT DISTINCT 
country
FROM customers
-------------------------------------------------------------------------------------------------------------------------------
-- "TOP(limit)" - used to extract top N row as per order mentioned in table of database not condition.
SELECT TOP(3)
*
FROM customers
------------------------------------------------------------------------------------------------------------------
--Q - Find top 2 recent orders

SELECT TOP(2) *
FROM orders
ORDER BY order_date DESC
---------------------------------------------------------------------------------------------

-- Note: We can create our own query(Table) i.e. without using the queries from database and that we call Static(Fixed) values.

 SELECT 'Aakash Sharma' AS Name,
 28 AS Age,
'Male' AS Gender,
'New Delhi' AS City

--------------------------------------------------------------------------------------------------
-- We can mix up the values from database and our own static values 

--example:

SELECT id, first_name,
'India' AS Country  -- >> This is static value
FROM customers  

------------------------------------------------------------------------------------













































































































