**Schema (MySQL v5.7)**

    CREATE TABLE Notes (
      `Grade` INTEGER,
      `Min_Value` INTEGER,
      `Max_Value` INTEGER
    );

    INSERT INTO Notes
      (`Grade`, `Min_Value`, `Max_Value`)
    VALUES
      ('1', '0', '9'),
      ('2', '10', '19'),
      ('3', '20', '29'),
      ('4', '30', '39'),
      ('5', '40', '49'),
      ('6', '50', '59'),
      ('7', '60', '69'),
      ('8', '70', '79'),
      ('9', '80', '89'),
      ('10', '90', '100');



    CREATE TABLE Students (
      `ID` INTEGER,
      `Name` VARCHAR(9),
      `Value` INTEGER
    );

    INSERT INTO Students
      (`ID`, `Name`, `Value`)
    VALUES
      ('1', 'Julia', '81'),
      ('2', 'Carol', '68'),
      ('3', 'Maria', '99'),
      ('4', 'Andreia', '78'),
      ('5', 'Jaqueline', '63'),
      ('6', 'Marcela', '88');

---

**Query #1**

    SELECT
    	IF (Notes.Grade < 8, "NULL", Students.Name) AS Name,
        Notes.Grade as Grade,
        Students.Value as Value
    FROM Students
    LEFT JOIN Notes
    	ON Value >= Notes.Min_value
      	AND Value <= Notes.Max_Value
    ORDER BY Grade DESC, Name DESC, Value ASC;

| Name    | Grade | Value |
| ------- | ----- | ----- |
| Maria   | 10    | 99    |
| Marcela | 9     | 88    |
| Julia   | 9     | 81    |
| Andreia | 8     | 78    |
| NULL    | 7     | 63    |
| NULL    | 7     | 68    |

---

[View on DB Fiddle](https://www.db-fiddle.com/f/xApZskR4vx3Xqhut558YBZ/8)