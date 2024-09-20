import sqlite3

# 1. Connect to the SQLite database (or create it if it doesn't exist)
conn = sqlite3.connect('example.db')

# 2. Create a cursor object to interact with the database
cursor = conn.cursor()

# 3. Create a table
cursor.execute('''
CREATE TABLE IF NOT EXISTS users (
    id INTEGER PRIMARY KEY,
    name TEXT,
    age INTEGER
)
''')

# 4. Insert data into the table
cursor.execute("INSERT INTO users (name, age) VALUES (?, ?)", ('Alice', 25))
cursor.execute("INSERT INTO users (name, age) VALUES (?, ?)", ('Bob', 30))

# Commit the changes
conn.commit()

# 5. Query the data
cursor.execute("SELECT * FROM users")
rows = cursor.fetchall()

# Print the data
for row in rows:
    print(row)

# 6. Close the connection
conn.close()