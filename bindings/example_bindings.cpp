// cppimport

#include <pybind11/pybind11.h>

int calc(int, int); //needed for pybind11 

PYBIND11_MODULE(example_bindings, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("calc", &calc, "A function which does some calculations using two numbers");
}

/*
<%
setup_pybind11(cfg)
cfg['sources'] = ['../src/example.cpp']
%>
*/