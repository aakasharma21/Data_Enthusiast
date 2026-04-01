use MyDatabase
create table Players
(
	id INT NOT NULL PRIMARY KEY,
	P_Name VARCHAR(30) NOT NULL,
	Age INT,
	Country VARCHAR(30),
	Sports VARCHAR(50) NOT NULL

)

SELECT * FROM Players

INSERT INTO Players(id, P_Name, Age, Country, Sports)
	VALUES(101,'Michael Jordan',27,'USA','Basketball'),
		  (102,'Cristiano Ronaldo',32,' Portuguese','Soccer'),
		  (103,'Sachin Tendulkar',38,'India','Cricket')