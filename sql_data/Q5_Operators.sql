/*
--> To delete the existing database

ALTER DATABASE mylearnings SET SINGLE_USER WITH ROLLBACK IMMEDIATE  
DROP DATABASE mylearnings				

--Note: First we need to switch the database into single user mode and need to 
  rollback(means Force all current users to exit immediately) and then drop(delete) the database

*/
use MyDatabase
SELECT * FROM customers
WHERE score BETWEEN 500 AND 800