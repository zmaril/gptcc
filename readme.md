# gptcc

gptcc is an experimental Python script that uses the OpenAI GPT-4 model to generate assembly code from a given C program. The generated assembly code is then assembled and linked to produce an executable binary. gptcc is intended for educational purposes and should be used with caution, as the generated assembly code may not always be correct or compatible.

## Prerequisites

    Python 3.8 or later
    NASM (Netwide Assembler)
    Clang

## Installation

```bash
git clone https://github.com/zmaril/gptcc.git
cd gptcc
    pip install -r requirements.txt
```


## Usage

Run the script with a C source file as an argument:

```bash
python gptcc.py <source_file.c>
```

This will generate assembly code using the GPT-4 model, then assemble and link the generated code to produce an executable binary.

If the script succeeds, it will output the path to the generated binary. You can run the binary as you would any other executable:

``` bash
./path/to/binary
```

## Limitations

gptcc is an experimental tool that relies on the GPT-4 model's ability to generate valid assembly code. Due to the nature of the GPT model, the generated assembly code might not always be correct or compatible with the target platform. gptcc is intended for educational purposes and should be used with caution.
License

This project is licensed under the MIT License. See the LICENSE file for details.

## Zack's Note 

All of the above and most of the code in this repo was written by ChatGPT4. It's ridiculous that this even works sort of sometimes.

![Hark!](/letsgo.jpg?raw=true "hark!")
