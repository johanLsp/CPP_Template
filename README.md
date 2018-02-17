# C++ Template
> Jumpstart a C++ project in no time

[![Build Status](https://travis-ci.org/johanLsp/CPP_Template.svg?branch=master)](https://travis-ci.org/johanLsp/CPP_Template) [![codecov](https://codecov.io/gh/johanLsp/CPP_Template/branch/master/graph/badge.svg)](https://codecov.io/gh/johanLsp/CPP_Template) 
<img src="https://travis-ci.com/images/logos/TravisCI-Mascot-1.png" width="50">
<img src="https://github.com/codecov/media/blob/master/logos/icon-50.png" width="50">


This a CMake based C++ template shipped with :

 - Continuous Integration with Travis CI
 - Unit testing with Boost Test
 - Documentation with Doxygen
 - Code coverage with CodeCov

Each of these features can be disabled / enabled if needed

## Pre-requisites
You can skip this if you just want to use the CMake template without additional features
Otherwise, the following dependencies have to be installed :

    doxygen
    boost test-unit-framework
    lcov

## Usage
The template is shipped with extra features disabled. Just clone or fork the repository, and follow the usual CMake build from the project directory :

    mkdir build
    cd build
    cmake ..
    make
By default, two targets are generated: an executable in bin/, and a library in lib/
The CMake configuration accepts the following options :
- *-DENABLE_DOC=1* : Generates the documentation target
- *-DENABLE_TEST=1* : Turns on testing
- *-DENABLE_COVERAGE=1* : Generates the coverage build




## Features
### Documentation

    cmake -DENABLE_DOC=1
    make doc
Generates the doxygen documentation in doc/html
A base doxygen configuration is provided in [doc/documentation-config.doxygen.in](doc/documentation-config.doxygen.in), along with a few page templates.

### Unit testing
    cmake -DENABLE_TESTING=1
    make test
  Runs the tests defined in [test](test)

### Code Coverage
    cmake -DENABLE_COVERAGE=1
    make test
 Enabling code coverage automatically enables unit testing. Running the test generates a coverage report

### Travis CI
Integration with Travis CI is configured in [.travis.yml](.travis.yml)
The default configuration builds and run tests on on different version of Ubuntu & OSX, and generate a coverage report

### CodeCov

Integration with CodeCov is configured in [.codecov.yml](.codecov.yml)
The default Travis configuration automatically push the coverage report to CodeCov.io


## Contributing
If you think something is missing, feel free to open an issue.
To contribute to the repository :
    

 1. Fork it (https://github.com/yourname/yourproject/fork)
 2.  Create your feature branch (git checkout -b feature/fooBar)
 3.  Commit your changes (git commit -am 'Add some fooBar')
 4.  Push to the branch (git push origin feature/fooBar)
 5.   Create a new Pull Request

