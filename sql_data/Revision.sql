--------------------------------------Revision of SQL Queries----------------------------------------------------
/* 

DDL(Data Definition Language) - CREATE, ALTER, DROP
DML(Data Manaipulation Language) - INSERT, UPDATE, DELETE
Filtering of Data/Queries - WHERE condtions
SQL JOINS

*/
use mydatabase
SELECT * FROM orders
ORDER BY sales,order_date DESC

UPDATE orders
SET customer_id=4
WHERE order_id=1004

DELETE FROM orders
WHERE order_id=1005

INSERT INTO orders(order_id,customer_id,order_date,sales)
VALUES(1005,5,'01-04-2026',40),
		(1006,6,'02-04-2026',50),	
		(1007,7,'03-04-2026',60)


--DELETE FROM Employee
--WHERE id IN(1,2,3,4,5,6)

/*UPDATE Employee
SET id=1
WHERE first_name='Aakash Sharma'

UPDATE Employee
SET id=2
WHERE first_name='Laddu'

UPDATE Employee
SET id=3
WHERE first_name='Banke'

UPDATE Employee
SET id=4
WHERE first_name='Radhe'

UPDATE Employee
SET id=5
WHERE first_name='Shaali'

UPDATE Employee
SET id=6
WHERE first_name='Krishu'
*/


INSERT INTO Employee(id,first_name)
VALUES(1,'Aakash Sharma'), (2,'Laddu'), (3,'Banke'), (4,'Radhe'), (5,'Shaali'), (6,'Krishu');
		
SELECT * FROM Players

SELECT * FROM Employee AS E
FULL JOIN customers AS C
ON E.id=C.id

SELECT * FROM Employee AS E
LEFT JOIN customers AS C
ON E.id=C.id

-- SQL JOINS on multiple tables

SELECT * FROM customers AS C
LEFT JOIN orders AS O
ON C.id=O.customer_id
LEFT JOIN Players AS P
ON O.customer_id=P.id
WHERE O.customer_id IS NOT NULL AND P.id IS NOT NULL
