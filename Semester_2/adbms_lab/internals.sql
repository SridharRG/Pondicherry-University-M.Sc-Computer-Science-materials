 CREATE TABLE EMPLOYEE (
    ->     emp_no INT PRIMARY KEY,
    ->     E_name VARCHAR(100),
    ->     E_address VARCHAR(255),
    ->     E_ph_no VARCHAR(20),
    ->     Dept_no INT,
    ->     Dept_name VARCHAR(100),
    ->     Job_id INT,
    ->     Salary DECIMAL(10, 2)
    -> );



ALTER TABLE EMPLOYEE
    -> ADD COLUMN HIREDATE DATE;

ALTER TABLE EMPLOYEE MODIFY (Job_id VARCHAR2(100));

ALTER TABLE EMPLOYEE
MODIFY (JOB_ID VARCHAR2(100));

ALTER TABLE EMPLOYEE
CHANGE COLUMN emp_no e_no INT;


ALTER TABLE EMPLOYEE
MODIFY COLUMN Job_id VARCHAR(100);

INSERT INTO EMPLOYEE (e_no, E_name, E_address, E_ph_no, Dept_no, Dept_name, Job_id, Salary, HIREDATE) 
VALUES 

(1, 'ilavarasan', '123 Main St', '9643341234', 101, 'English', 'ENG001', 60000.00, '1981-05-01'),
(2, 'Kamesh', '456 omr St', '98745678', 102, 'maths', 'MKT002', 55000.00, '1981-12-03'),
(3, 'Ruban', '789 kalapet', '849489876', 103, 'finance', 'FIN003', 65000.00, '1981-12-17'),
(4, 'aanisha', '321 pillaichavady', '983644321', 101, 'Engineering', 'ENG004', 62000.00, '2023-02-05'),
(5, 'Sridhar', '654 kovil', '903838765', 104, 'Human Resources', 'HR005', 58000.00, '1980-01-19');


SELECT * FROM EMPLOYEE;

UPDATE EMPLOYEE
SET Salary = Salary * 1.25
WHERE Dept_no = '102';


SELECT E_name,
    Dept_name,
    Salary
FROM 
    EMPLOYEE;

SELECT *
FROM EMPLOYEE
WHERE Job_id IN ('ENG001', 'HR005');


SELECT *
FROM EMPLOYEE
WHERE HIREDATE IN ('1981-05-01', '1981-12-03', '1981-12-17', '1980-01-19');

SELECT *
FROM EMPLOYEE
WHERE Dept_no IN (101, 102);

SELECT *
FROM EMPLOYEE
WHERE E_name LIKE 'S%';


15
BEGIN TRANSACTION;

DELETE FROM EMPLOYEE WHERE Dept_no = 10;

ROLLBACK;

BEGIN TRANSACTION;

INSERT INTO EMPLOYEE (emp_no, E_name, Dept_no)
VALUES (101, 'John Doe', 10),
       (102, 'Jane Smith', 20);

COMMIT;

13
BEGIN TRANSACTION;


SAVEPOINT internal1;

ROLLBACK TO SAVEPOINT internal1;


COMMIT;

create table sailors 
            (suid int, 
            sname varchar(100), 
            rating int, 
            age int);
INSERT INTO sailors (suid, sname, rating, age) VALUES
(1, 'Sri', 5, 25),
(2, 'aani', 4, 28),
(3, 'Aishu', 6, 30),
(4, 'Ruban', 7, 22);

create table boats 
            (bid int, 
            bname varchar(100), 
            color varchar(100));
INSERT INTO boats (bid, bname, color) VALUES
(101, 'Boat1', 'Red'),
(202, 'Boat2', 'Blue'),
(303, 'Boat3', 'Red'),
(404, 'Boat4', 'Green');

create table reserces 
            (suid int, 
            bid int, 
            dates date);
INSERT INTO reserces (suid, bid, dates) VALUES
(1, 101, '2024-04-20'),
(2, 202, '2024-04-21'),
(3, 303, '2024-04-22'),
(4, 404, '2024-04-23'),
(2, 505, '2024-04-24');

SELECT sailors.suid, sailors.sname, sailors.rating, sailors.age
FROM sailors
INNER JOIN reserces ON sailors.suid = reserces.suid
WHERE reserces.bid = 1;

SELECT boats.bname
FROM boats
INNER JOIN reserces ON boats.bid = reserces.bid
INNER JOIN sailors ON sailors.suid = reserces.suid
WHERE sailors.sname = 'Sri';

SELECT sailors.sname
FROM sailors
INNER JOIN reserces ON sailors.suid = reserces.suid
INNER JOIN boats ON boats.bid = reserces.bid
WHERE boats.color = 'Red'
ORDER BY sailors.age;
