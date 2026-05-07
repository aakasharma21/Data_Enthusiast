--select * from orders
--SELECT order_id,customer_id FROM orders
USE MyDatabase -- statement to connect to database
select * from customers
--select * from customers where country='Germany' AND score>400
select * from customers order by score -- by default it sort in ascending order
select * from customers order by score desc -- sort in descending order
