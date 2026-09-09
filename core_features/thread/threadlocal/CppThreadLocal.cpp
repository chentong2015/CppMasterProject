
// Global namespace. Not implicitly static.
thread_local float f = 42.0;

// cannot be applied to type definition
struct S {
    // thread_local int i; // Illegal. The member must be static.
    thread_local static char buf[10]; // OK
};

void DoSomething() {
    // Apply thread_local to a local variable.
    // Implicitly "thread_local static S my_struct".
    thread_local S my_struct;
}
