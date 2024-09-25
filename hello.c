#include <stdio.h>
#include <stdlib.h>
int main(){
        printf("Hello World");
        printf("trial");
	printf("dfdf");
}
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
-- INSERT --                                                  6,2           All
name: build script for quiz.c

on:
  push:
    branches: [ "main" ]

jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4

      - name: build quiz
        run: gcc -o quiz quiz.c

      - name: upload binary
        uses: actions/upload-artifact@v4
        with:
          name: quiz
          path: ./quiz


~                                                                               
-- INSERT --                                                  22,1          All

