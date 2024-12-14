<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<header>
  <h1>Tokenizer Program 🧑‍💻</h1>
  <p>This C program tokenizes a text file by identifying unique words, sorting them alphabetically, and then converting the text into a sequence of tokens.</p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#input-and-output">Input and Output</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#usage">Usage</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>Your task is to implement a tokenizer in C that reads a text file, identifies unique words, and assigns them numbers based on their alphabetical order. The program will output the list of unique words and their corresponding numbers, followed by the tokenized version of the text.</p>
</section>

<hr>

<section id="input-and-output">
  <h2>Input and Output 🖥️</h2>
  <h3>Input</h3>
  <ul>
    <li>The program will receive two command-line arguments:
      <ul>
        <li>The first argument is the name of the input file containing the text to be processed.</li>
        <li>The second argument is the name of the output file where the result will be written.</li>
      </ul>
    </li>
    <li>The input file contains lowercase letters, spaces, periods, and newlines. It may have at most 10,000 characters.</li>
  </ul>

  <h3>Output</h3>
  <ul>
    <li>First, print the number of unique words (N).</li>
    <li>Then, print the unique words in alphabetical order, each on a new line.</li>
    <li>Finally, print one line for each sentence from the input, consisting of the corresponding numbers for each word in the sentence, separated by spaces.</li>
  </ul>
</section>

<hr>

<section id="examples">
  <h2>Examples 📋</h2>
  <h3>Example #1</h3>
  <div class="code-block">
    Command line:<br>
    <code>./a.out file.in file.out</code><br><br>
    Input file (file.in):<br>
    <pre>before was was was was was  is.</pre><br><br>
    Output file (file.out):<br>
    <pre>3
before
is
was
1 3 3 3 3 3 2</pre>
  </div>

  <h3>Example #2</h3>
  <div class="code-block">
    Command line:<br>
    <code>./a.out file.in file.out</code><br><br>
    Input file (file.in):<br>
    <pre>lorem ipsum dolor sit amet
consectetur adipiscing elit
sed do eiusmod tempor
incididunt ut labore et
dolore magna aliqua. ut enim
ad minim veniam quis nostrud
exercitation ullamco laboris
nisi ut aliquip ex ea
commodo consequat. duis aute
irure dolor in reprehenderit
in voluptate velit esse
cillum dolore eu fugiat
nulla pariatur. excepteur
sint occaecat cupidatat non
proident sunt in culpa qui
officia deserunt mollit anim
id est laborum.</pre><br><br>
    Output file (file.out):<br>
    <pre>63
ad
adipiscing
aliqua
aliquip
amet
anim
aute
cillum
commodo
consectetur
consequat
culpa
cupidatat
deserunt
do
dolor
dolore
duis
ea
eiusmod
elit
enim
esse
est
et
eu
ex
excepteur
exercitation
fugiat
id
in
incididunt
ipsum
irure
labore
laboris
laborum
lorem
magna
minim
mollit
nisi
non
nostrud
nulla
occaecat
officia
pariatur
proident
qui
quis
reprehenderit
sed
sint
sit
sunt
tempor
ullamco
ut
velit
veniam
voluptate
39 34 16 56 5 10 2 21 54 15 20 58 33 60 36 25 17 40 3
60 22 1 41 62 52 45 29 59 37 43 60 4 27 19 9 11
18 7 35 16 32 53 32 63 61 23 8 17 26 30 46 49
28 55 47 13 44 50 57 32 12 51 48 14 42 6 31 24 38</pre>
  </div>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>The program must tokenize the input file by identifying unique words.</li>
    <li>The words must be sorted alphabetically and numbered sequentially starting from 1.</li>
    <li>The program must then convert the input text into a sequence of numbers (tokens) based on the alphabetical order of the words.</li>
    <li>Ensure the output follows the specified format precisely, including the count of unique words and the tokenized sentences.</li>
    <li>The program should handle files with up to 10,000 characters efficiently.</li>
  </ol>
</section>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
  <div class="code-block">gcc -o tokenizer tokenizer.c</div>
  <p><strong>2. Run the Program:</strong></p>
  <div class="code-block">./tokenizer file.in file.out</div>
  <p><strong>3. Input Required:</strong></p>
  <ul>
    <li>Two command-line arguments: the input file (file.in) and the output file (file.out).</li>
  </ul>
</section>

</body>
</html>
