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

