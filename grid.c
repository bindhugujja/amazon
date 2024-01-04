<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Grid Creator</title>
    <style>
        .container {
            display: grid;
            grid-template-columns: repeat(var(--columns), 1fr);
            grid-template-rows: repeat(var(--rows), 1fr);
            gap: 10px;
            width: 80%;
            margin: 0 auto;
        }

        .grid-item {
            background-color: #4caf50;
            padding: 20px;
            text-align: center;
            border-radius: 5px;
            color: white;
        }

        label {
            display: block;
            margin-bottom: 10px;
        }

        input[type="number"] {
            width: 100%;
            padding: 5px;
            margin-bottom: 20px;
        }

        button {
            background-color: #4caf50;
            color: white;
            padding: 10px 20px;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            margin-bottom: 20px;
        }

        button:hover {
            background-color: #3e8e41;
        }
    </style>
</head>
<body>
    <div class="container">
        <label for="rows">Rows:</label>
        <input type="number" id="rows" name="rows" min="1" value="3">

        <label for="columns">Columns:</label>
        <input type="number" id="columns" name="columns" min="1" value="3">

        <button id="create-grid">Create Grid</button>
    </div>

    <script>
        const createGridButton = document.getElementById('create-grid');
        const rowsInput = document.getElementById('rows');
        const columnsInput = document.getElementById('columns');
        const container = document.querySelector('.container');

        createGridButton.addEventListener('click', () => {
            const rows = parseInt(rowsInput.value);
            const columns = parseInt(columnsInput.value);
            container.style.setProperty('--rows', rows);
            container.style.setProperty('--columns', columns);
        });
    </script>
</body>
</html>
