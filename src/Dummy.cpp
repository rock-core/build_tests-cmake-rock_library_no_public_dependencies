#include "Dummy.hpp"
#include <iostream>
#include <plain_package/Dummy.hpp>

using namespace std;
using namespace rock_library_no_public_dependencies;

void DummyClass::welcome()
{
    plain_package::DummyClass dummy;
    dummy.welcome();
    cout << "You successfully compiled and executed DummyProject. Welcome!" << endl;
}
