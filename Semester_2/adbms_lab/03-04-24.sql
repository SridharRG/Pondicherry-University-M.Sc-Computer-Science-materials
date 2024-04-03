
-- create
CREATE TABLE EMPLOYEE (
  ID INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  dept_name TEXT NOT NULL,
  salary INT NOT NULL
);

-- insert
INSERT INTO EMPLOYEE VALUES (10101, 'Srinivasan', 'Comp. Sci.', '65000');
INSERT INTO EMPLOYEE VALUES (12121, 'Wu', 'Finance', '90000');
INSERT INTO EMPLOYEE VALUES (15151, 'Mozart', 'Music', '40000');
INSERT INTO EMPLOYEE VALUES (22222, 'Einstein', 'Physics', '95000');
INSERT INTO EMPLOYEE VALUES (32343, 'El Said', 'History', '60000');
INSERT INTO EMPLOYEE VALUES (33456, 'Gold', 'Physics', '87000');
INSERT INTO EMPLOYEE VALUES (45565, 'Katz', 'Comp. Sci.', '75000');
INSERT INTO EMPLOYEE VALUES (58583, 'Califieri', 'History', '62000');
INSERT INTO EMPLOYEE VALUES (76543, 'Singh', 'Finance', '80000');
INSERT INTO EMPLOYEE VALUES (76766, 'Crick', 'Biology', '72000');
INSERT INTO EMPLOYEE VALUES (83821, 'Brandt', 'Comp. Sci.', '92000');
INSERT INTO EMPLOYEE VALUES (98345, 'Kim', 'Elec. Eng.', '80000');

-- fetch 
SELECT * FROM EMPLOYEE;



-- create
CREATE TABLE TEACHES (
  ID INTEGER NOT NULL,
  COURSE_ID VARCHAR(50) NOT NULL,
  SEC_ID TEXT NOT NULL,
  SEMESTER CHAR(50) NOT NULL,
  YEAR INT NOT NULL,
  FOREIGN KEY (ID) REFERENCES EMPLOYEE(ID)
);

-- insert
INSERT INTO TEACHES VALUES (10101, 'CS-101', '1', 'Fall', 2017);
INSERT INTO TEACHES VALUES (10101, 'CS-315', '1', 'Spring', 2018);
INSERT INTO TEACHES VALUES (10101, 'CS-347', '1', 'Fall', 2017);
INSERT INTO TEACHES VALUES (12121, 'FIN-201', '1', 'Spring', 2018);
INSERT INTO TEACHES VALUES (15151, 'MU-199', '1', 'Spring',2018);
INSERT INTO TEACHES VALUES (22222, 'PHY-101', '1', 'Fall', 2017);
INSERT INTO TEACHES VALUES (32343, 'HIS-351', '1', 'Spring', 2018);
INSERT INTO TEACHES VALUES (45565, 'CS-101', '1', 'Spring', 2018);
INSERT INTO TEACHES VALUES (45565, 'CS-319', '1', 'Spring', 2018);
INSERT INTO TEACHES VALUES (76766, 'BIO-101', '1', 'Summer', 2017);
INSERT INTO TEACHES VALUES (76766, 'BIO-301', '1', 'Summer', 2018);
INSERT INTO TEACHES VALUES (83821, 'CS-190', '2', 'Spring', 2017);
INSERT INTO TEACHES VALUES (83821, 'CS-319', '2', 'Spring', 2018);
INSERT INTO TEACHES VALUES (98345, 'EE-181', '1', 'Spring', 2017);

-- fetch 
SELECT * FROM TEACHES;

MariaDB [dbmslab0304]> INSERT INTO EMPLOYEE VALUES (10211, 'Smith', 'Biology', 66000);
Query OK, 1 row affected (0.002 sec)

MariaDB [dbmslab0304]> SELECT * FROM EMPLOYEE;
+-------+------------+------------+--------+
| ID    | name       | dept_name  | salary |
+-------+------------+------------+--------+
| 10101 | Srinivasan | Comp. Sci. |  65000 |
| 10211 | Smith      | Biology    |  66000 |
| 12121 | Wu         | Finance    |  90000 |
| 15151 | Mozart     | Music      |  40000 |
| 22222 | Einstein   | Physics    |  95000 |
| 32343 | El Said    | History    |  60000 |
| 33456 | Gold       | Physics    |  87000 |
| 45565 | Katz       | Comp. Sci. |  75000 |
| 58583 | Cali       | History    |  60000 |
| 76543 | Singh      | Finance    |  80000 |
| 76766 | Crick      | Biology    |  72000 |
| 83821 | Brandt     | Comp. Sci. |  92000 |
| 98345 | Kim        | Elec. Eng. |  80000 |
+-------+------------+------------+--------+
13 rows in set (0.000 sec)

MariaDB [dbmslab0304]> DELETE FROM EMPLOYEE WHERE ID = 10211;
Query OK, 1 row affected (0.002 sec)

MariaDB [dbmslab0304]> SELECT * FROM EMPLOYEE;
+-------+------------+------------+--------+
| ID    | name       | dept_name  | salary |
+-------+------------+------------+--------+
| 10101 | Srinivasan | Comp. Sci. |  65000 |
| 12121 | Wu         | Finance    |  90000 |
| 15151 | Mozart     | Music      |  40000 |
| 22222 | Einstein   | Physics    |  95000 |
| 32343 | El Said    | History    |  60000 |
| 33456 | Gold       | Physics    |  87000 |
| 45565 | Katz       | Comp. Sci. |  75000 |
| 58583 | Cali       | History    |  60000 |
| 76543 | Singh      | Finance    |  80000 |
| 76766 | Crick      | Biology    |  72000 |
| 83821 | Brandt     | Comp. Sci. |  92000 |
| 98345 | Kim        | Elec. Eng. |  80000 |
+-------+------------+------------+--------+
12 rows in set (0.001 sec)

MariaDB [dbmslab0304]> SELECT * FROM EMPLOYEE WHERE dept_name = 'History';
+-------+---------+-----------+--------+
| ID    | name    | dept_name | salary |
+-------+---------+-----------+--------+
| 32343 | El Said | History   |  60000 |
| 58583 | Cali    | History   |  60000 |
+-------+---------+-----------+--------+
2 rows in set (0.000 sec)


MariaDB [dbmslab0304]> SELECT * FROM EMPLOYEE CROSS JOIN TEACHES;
+-------+------------+------------+--------+-------+-----------+--------+----------+------+
| ID    | name       | dept_name  | salary | ID    | COURSE_ID | SEC_ID | SEMESTER | YEAR |
+-------+------------+------------+--------+-------+-----------+--------+----------+------+
| 10101 | Srinivasan | Comp. Sci. |  65000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 12121 | Wu         | Finance    |  90000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 15151 | Mozart     | Music      |  40000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 22222 | Einstein   | Physics    |  95000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 32343 | El Said    | History    |  60000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 33456 | Gold       | Physics    |  87000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 45565 | Katz       | Comp. Sci. |  75000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 58583 | Cali       | History    |  60000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 76543 | Singh      | Finance    |  80000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 76766 | Crick      | Biology    |  72000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 98345 | Kim        | Elec. Eng. |  80000 | 10101 | CS-101    | 1      | Fall     | 2017 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 12121 | Wu         | Finance    |  90000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 15151 | Mozart     | Music      |  40000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 22222 | Einstein   | Physics    |  95000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 32343 | El Said    | History    |  60000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 33456 | Gold       | Physics    |  87000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 45565 | Katz       | Comp. Sci. |  75000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 58583 | Cali       | History    |  60000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 76543 | Singh      | Finance    |  80000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 76766 | Crick      | Biology    |  72000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 98345 | Kim        | Elec. Eng. |  80000 | 10101 | CS-315    | 1      | Spring   | 2018 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 12121 | Wu         | Finance    |  90000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 15151 | Mozart     | Music      |  40000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 22222 | Einstein   | Physics    |  95000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 32343 | El Said    | History    |  60000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 33456 | Gold       | Physics    |  87000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 45565 | Katz       | Comp. Sci. |  75000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 58583 | Cali       | History    |  60000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 76543 | Singh      | Finance    |  80000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 76766 | Crick      | Biology    |  72000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 98345 | Kim        | Elec. Eng. |  80000 | 10101 | CS-347    | 1      | Fall     | 2017 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 12121 | Wu         | Finance    |  90000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 15151 | Mozart     | Music      |  40000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 22222 | Einstein   | Physics    |  95000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 32343 | El Said    | History    |  60000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 33456 | Gold       | Physics    |  87000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 45565 | Katz       | Comp. Sci. |  75000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 58583 | Cali       | History    |  60000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 76543 | Singh      | Finance    |  80000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 76766 | Crick      | Biology    |  72000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 98345 | Kim        | Elec. Eng. |  80000 | 12121 | FIN-201   | 1      | Spring   | 2018 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 12121 | Wu         | Finance    |  90000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 15151 | Mozart     | Music      |  40000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 22222 | Einstein   | Physics    |  95000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 32343 | El Said    | History    |  60000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 33456 | Gold       | Physics    |  87000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 45565 | Katz       | Comp. Sci. |  75000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 58583 | Cali       | History    |  60000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 76543 | Singh      | Finance    |  80000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 76766 | Crick      | Biology    |  72000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 98345 | Kim        | Elec. Eng. |  80000 | 15151 | MU-199    | 1      | Spring   | 2018 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 12121 | Wu         | Finance    |  90000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 15151 | Mozart     | Music      |  40000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 22222 | Einstein   | Physics    |  95000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 32343 | El Said    | History    |  60000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 33456 | Gold       | Physics    |  87000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 45565 | Katz       | Comp. Sci. |  75000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 58583 | Cali       | History    |  60000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 76543 | Singh      | Finance    |  80000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 76766 | Crick      | Biology    |  72000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 98345 | Kim        | Elec. Eng. |  80000 | 22222 | PHY-101   | 1      | Fall     | 2017 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 12121 | Wu         | Finance    |  90000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 15151 | Mozart     | Music      |  40000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 22222 | Einstein   | Physics    |  95000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 32343 | El Said    | History    |  60000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 33456 | Gold       | Physics    |  87000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 45565 | Katz       | Comp. Sci. |  75000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 58583 | Cali       | History    |  60000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 76543 | Singh      | Finance    |  80000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 76766 | Crick      | Biology    |  72000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 98345 | Kim        | Elec. Eng. |  80000 | 32343 | HIS-351   | 1      | Spring   | 2018 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 12121 | Wu         | Finance    |  90000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 15151 | Mozart     | Music      |  40000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 22222 | Einstein   | Physics    |  95000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 32343 | El Said    | History    |  60000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 33456 | Gold       | Physics    |  87000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 45565 | Katz       | Comp. Sci. |  75000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 58583 | Cali       | History    |  60000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 76543 | Singh      | Finance    |  80000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 76766 | Crick      | Biology    |  72000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 98345 | Kim        | Elec. Eng. |  80000 | 45565 | CS-101    | 1      | Spring   | 2018 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 12121 | Wu         | Finance    |  90000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 15151 | Mozart     | Music      |  40000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 22222 | Einstein   | Physics    |  95000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 32343 | El Said    | History    |  60000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 33456 | Gold       | Physics    |  87000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 45565 | Katz       | Comp. Sci. |  75000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 58583 | Cali       | History    |  60000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 76543 | Singh      | Finance    |  80000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 76766 | Crick      | Biology    |  72000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 98345 | Kim        | Elec. Eng. |  80000 | 45565 | CS-319    | 1      | Spring   | 2018 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 12121 | Wu         | Finance    |  90000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 15151 | Mozart     | Music      |  40000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 22222 | Einstein   | Physics    |  95000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 32343 | El Said    | History    |  60000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 33456 | Gold       | Physics    |  87000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 45565 | Katz       | Comp. Sci. |  75000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 58583 | Cali       | History    |  60000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 76543 | Singh      | Finance    |  80000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 76766 | Crick      | Biology    |  72000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 98345 | Kim        | Elec. Eng. |  80000 | 76766 | BIO-101   | 1      | Summer   | 2017 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 12121 | Wu         | Finance    |  90000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 15151 | Mozart     | Music      |  40000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 22222 | Einstein   | Physics    |  95000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 32343 | El Said    | History    |  60000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 33456 | Gold       | Physics    |  87000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 45565 | Katz       | Comp. Sci. |  75000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 58583 | Cali       | History    |  60000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 76543 | Singh      | Finance    |  80000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 76766 | Crick      | Biology    |  72000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 98345 | Kim        | Elec. Eng. |  80000 | 76766 | BIO-301   | 1      | Summer   | 2018 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 12121 | Wu         | Finance    |  90000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 15151 | Mozart     | Music      |  40000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 22222 | Einstein   | Physics    |  95000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 32343 | El Said    | History    |  60000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 33456 | Gold       | Physics    |  87000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 45565 | Katz       | Comp. Sci. |  75000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 58583 | Cali       | History    |  60000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 76543 | Singh      | Finance    |  80000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 76766 | Crick      | Biology    |  72000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 98345 | Kim        | Elec. Eng. |  80000 | 83821 | CS-190    | 2      | Spring   | 2017 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 12121 | Wu         | Finance    |  90000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 15151 | Mozart     | Music      |  40000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 22222 | Einstein   | Physics    |  95000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 32343 | El Said    | History    |  60000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 33456 | Gold       | Physics    |  87000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 45565 | Katz       | Comp. Sci. |  75000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 58583 | Cali       | History    |  60000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 76543 | Singh      | Finance    |  80000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 76766 | Crick      | Biology    |  72000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 98345 | Kim        | Elec. Eng. |  80000 | 83821 | CS-319    | 2      | Spring   | 2018 |
| 10101 | Srinivasan | Comp. Sci. |  65000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 12121 | Wu         | Finance    |  90000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 15151 | Mozart     | Music      |  40000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 22222 | Einstein   | Physics    |  95000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 32343 | El Said    | History    |  60000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 33456 | Gold       | Physics    |  87000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 45565 | Katz       | Comp. Sci. |  75000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 58583 | Cali       | History    |  60000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 76543 | Singh      | Finance    |  80000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 76766 | Crick      | Biology    |  72000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 83821 | Brandt     | Comp. Sci. |  92000 | 98345 | EE-181    | 1      | Spring   | 2017 |
| 98345 | Kim        | Elec. Eng. |  80000 | 98345 | EE-181    | 1      | Spring   | 2017 |
+-------+------------+------------+--------+-------+-----------+--------+----------+------+
168 rows in set (0.001 sec)

MariaDB [dbmslab0304]> SELECT EMPLOYEE.name, TEACHES.COURSE_ID
    -> FROM EMPLOYEE
    -> INNER JOIN TEACHES ON EMPLOYEE.ID = TEACHES.ID;
+------------+-----------+
| name       | COURSE_ID |
+------------+-----------+
| Srinivasan | CS-101    |
| Srinivasan | CS-315    |
| Srinivasan | CS-347    |
| Wu         | FIN-201   |
| Mozart     | MU-199    |
| Einstein   | PHY-101   |
| El Said    | HIS-351   |
| Katz       | CS-101    |
| Katz       | CS-319    |
| Crick      | BIO-101   |
| Crick      | BIO-301   |
| Brandt     | CS-190    |
| Brandt     | CS-319    |
| Kim        | EE-181    |
+------------+-----------+
14 rows in set (0.001 sec)

MariaDB [dbmslab0304]> SELECT * FROM EMPLOYEE WHERE name LIKE '%dar%';
Empty set (0.000 sec)


MariaDB [dbmslab0304]> SELECT * FROM EMPLOYEE WHERE salary BETWEEN 90000 AND 100000;
+-------+----------+------------+--------+
| ID    | name     | dept_name  | salary |
+-------+----------+------------+--------+
| 12121 | Wu       | Finance    |  90000 |
| 22222 | Einstein | Physics    |  95000 |
| 83821 | Brandt   | Comp. Sci. |  92000 |
+-------+----------+------------+--------+
3 rows in set (0.000 sec)


