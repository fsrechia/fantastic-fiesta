**Schema (MySQL v5.7)**

    CREATE TABLE cats (
      id INTEGER NOT NULL PRIMARY KEY,
      name VARCHAR(50) NOT NULL
    );

    CREATE TABLE dogs (
      id INTEGER NOT NULL PRIMARY KEY,
      name VARCHAR(50) NOT NULL
    );

    INSERT INTO cats (id, name) VALUES
      (1, 'Bichano'),
      (2, 'Branquinha'),
      (3, 'Branquinha'),
      (4, 'Frajola'),
      (5, 'Luna'),
      (6, 'Mel'),
      (7, 'Mel'),
      (8, 'Mingau'),
      (9, 'Pretinha'),
      (10, 'Pretinha');

    INSERT INTO dogs (id, name) VALUES
      (1, 'Bidan'),
      (2, 'Bolinha'),
      (3, 'Cacau'),
      (4, 'Cacau'),
      (5, 'Fofinho'),
      (6, 'Fofinho'),
      (7, 'Mel'),
      (8, 'Tico'),
      (9, 'Toto'),
      (10, 'Toto');


---

**Query #1**

    SELECT DISTINCT name FROM (
      SELECT name FROM dogs
      UNION ALL
      SELECT name FROM cats
    ) AS pet_names
    ORDER BY name ASC;

| name       |
| ---------- |
| Bichano    |
| Bidan      |
| Bolinha    |
| Branquinha |
| Cacau      |
| Fofinho    |
| Frajola    |
| Luna       |
| Mel        |
| Mingau     |
| Pretinha   |
| Tico       |
| Toto       |

---

[View on DB Fiddle](https://www.db-fiddle.com/f/5X79HyQKLThMYDVMoxdSVL/0)