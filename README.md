# Setting_up

The "setting_up" project is an program developed in C language.
It is a first semester project of the elementary programming module in C at Epitech (B-CPE-110).

## Table of Contents

- [Description](#description)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#Usage)
- [Example of Maps](#example-of-maps)
- [Authors](#authors)

## Description

It is an Algorithm for finding the largest pssible square on map a while avoiding obstacle.
you can solve a two type of map. In first a map read in file (.txt), and genreate your own map.

## Prerequisites

- [Make](https://www.gnu.org/software/make/)
- [GCC](https://gcc.gnu.org/)
- [LibC](https://www.gnu.org/software/libc/)

## Installation

### Installation Steps

1. Clone the repository :

   ```bash
   git clone https://github.com/ZeHack0/Setting-Up.git

1. Navigate to the project directory :

   ```bash
   cd (name of directory project)

1. Compile the project :

   ```bash
   make
This command uses the Makefile to compile the project. Ensure that the Makefile is correctly configured for your environment.


## Usage

### How tu use

- From a file :

   ```bash
   ./space_hunter name_map.txt | cat -e

- From a generate map :

   ```bash
   ./space_hunter [size_of_map] [pattern of the map] | cat -e

## Example of Maps

- This is an example of an maps:

   ```bash
   9
   ............................
   ....o.......................
   ............o...............
   ............................
   ....o.......................
   .............o..............
   ............................
   ......o...............o.....
   ..o.......o.................

## Authors
- Ronan BOTREL | [Github](https://github.com/ZeHack0)

