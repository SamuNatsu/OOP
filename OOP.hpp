#ifndef OOP_HPP_INCLUDED
#define OOP_HPP_INCLUDED

// Main class
#define MAIN_CLASS(name) int main(int argc, char* argv[]) {name::main(argc, argv);return 0;}

// Generate unique identifier
#define __CONCATE_1__(s1, s2) __##s1##_##s2##__
#define __CONCATE_2__(s1, s2) __CONCATE_1__(s1, s2)
#define __UNIQUE_ID__(prefix) __CONCATE_2__(prefix, __LINE__)

// Class static block
#define static_block static void __static__()
#define __STATIC_BLOCK__(name, var) static char var = (name::__static__(), 0);
#define STATIC_BLOCK(name) __STATIC_BLOCK__(name, __UNIQUE_ID__(name)) 

#endif
