use MyDatabase

----------------------------------------------------- SET Operators(JOIN via Rows) --------------------------------------------------------------------------------
/*

SET operators helps to combine the result of multiple queries(like multiple different SELECT statments) into a single queries and Join them via Rows.

To_Remember: No. of Columns must be same of tables which are combining via SET operators.


SET Operators Rules:

>> SET operator can be used almost in all clauses - WHERE| JOIN| GROUP BY| HAVING
>> ORDER BY is allowed only once at the end of whole query
>> Each query musbe have same no of columns
>> Column data types must be compatible across queries, means data_types of Columns which are joining corrspondingly via SET operators must be similar
>> Order of Columns declare in each query must be same correspondingly
>> (Imp.) While using SET operators, the Column name of the query which is written first will be taken and consider and also reflect in final result/ouput
>> Aliases (short names given to Columns) of Columns of firstly written query will be considered only.


Types of SET Operators:

1. UNION - Return all distinct(unique) rows/data of both queries 
2. UNION ALL - Return all rwos/data of both queries including duplicates
3. INTERSECT - Return only those rows/data of firstly written query which are common in other queries (** Comparison/checking will be done only on basis of firstly written query)
4. EXCEPT - Return only those rows/data of firstly written query which are not common in other queries (** Comparison/checking will be done only on basis of firstly written query)


*/

SELECT * FROM Employee
SELECT * FROM customers


-- UNION (only distinct rows, No_Duplicate values)

SELECT first_name FROM customers
UNION 
SELECT first_name FROM Employee

-- UNION ALL (all rows including duplicates values also)

SELECT first_name FROM customers
UNION ALL
SELECT first_name FROM Employee

-- EXCEPT 
	-- Returns all distinct(unique) rows from the first query that are not found in the second query
	-- It is the only one where the order of queries(order of query means which query is written first and which one is second) affects the final result/output

SELECT first_name FROM customers
EXCEPT
SELECT first_name FROM Employee

--INTERSECT (Return only the rows that are common in both queries)

SELECT first_name FROM customers
INTERSECT
SELECT first_name FROM Employee

-- Use Cases of SET Operators:
	
	-- Use Case-1  Combining the data which are inter-related to each other
	-- eg:

	use SalesDB

	SELECT * FROM sales.Orders
	UNION 
	SELECT * FROM sales.OrdersArchive

	-- Tip: Best practice is Not to use 'SELECT *(All)'. Always keep listed all column names individually in a query because when we working on unknown large dataset we don't know whether the columns are arranged in a order with similar data type or not.

	SELECT 'Orders' AS SourceTable,  -- Creation of user define column(SourceTable) with static value = 'Orders'
       [OrderID]
      ,[ProductID]
      ,[CustomerID]
      ,[SalesPersonID]
      ,[OrderDate]
      ,[ShipDate]
      ,[OrderStatus]
      ,[ShipAddress]
      ,[BillAddress]
      ,[Quantity]
      ,[Sales]
      ,[CreationTime]
  FROM sales.Orders
  UNION
  SELECT 'Order_Archive' AS SourceTable,  -- Creation of user define column(SourceTable) with static value = 'Order_Archive'
       [OrderID]
      ,[ProductID]
      ,[CustomerID]
      ,[SalesPersonID]
      ,[OrderDate]
      ,[ShipDate]
      ,[OrderStatus]
      ,[ShipAddress]
      ,[BillAddress]
      ,[Quantity]
      ,[Sales]
      ,[CreationTime]
  FROM sales.OrdersArchive
  ORDER BY OrderID
  

  -- Tables from two different databases

  SELECT id,first_name,country,score FROM MyDatabase.dbo.customers 
  UNION
  SELECT CustomerID,FirstName,Country,Score FROM SalesDB.Sales.Customers 
  

  -- Use Case-2  Data Completness Check

    CREATE TABLE schoolA
    ( 
        s_id INT PRIMARY KEY,
        s_name VARCHAR(30) NOT NULL
    )
    
    INSERT INTO schoolA
    VALUES(1,'Aakash Sharma'), (2,'Laddu Sharma'), (3,'Radhe Sharma')


     CREATE TABLE schoolB
    ( 
        s_id INT PRIMARY KEY,
        s_name VARCHAR(30) NOT NULL
    )
    
    INSERT INTO schoolB
    VALUES(1,'Aakash Sharma'), (2,'Laddu Sharma'), (3,'Radhe Sharma')


    SELECT * FROM schoolA
    SELECT * FROM schoolB

    -- Now To check Data completness or Data Discrepancy(Incosistency, mismatch)

    SELECT * FROM schoolA
    EXCEPT                      -- The output is empty means no data discrepancy present as both tables schoolA and schoolB are exactly same.
    SELECT * FROM schoolB
     










