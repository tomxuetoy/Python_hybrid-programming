#include <Python.h>

int main()
{

    Py_Initialize();
    PyRun_SimpleString ("import sys; sys.path.insert(0, '/home/maemo/mycode/trial_python_hybrid-programming')");
    PyObject * pModule = NULL;
    PyObject * pFunc   = NULL;

    pModule = PyImport_ImportModule("test");
    pFunc   = PyObject_GetAttrString(pModule, "Hello");
    if(pFunc != NULL) {
        PyEval_CallObject(pFunc, NULL);
        Py_Finalize();
    }
    else {
        printf("pFunc returned NULL\n");
    }

    return 0;
}
