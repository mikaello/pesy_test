# pesy_test


[![CircleCI](https://circleci.com/gh/yourgithubhandle/pesy_test/tree/master.svg?style=svg)](https://circleci.com/gh/yourgithubhandle/pesy_test/tree/master)


**Contains the following libraries and executables:**

```
pesy_test@0.0.0
│
├─test/
│   name:    TestPesyTest.exe
│   main:    TestPesyTest
│   require: pesy_test.lib
│
├─library/
│   library name: pesy_test.lib
│   namespace:    PesyTest
│   require:
│
└─executable/
    name:    PesyTestApp.exe
    main:    PesyTestApp
    require: pesy_test.lib
```

## Developing:

```
npm install -g esy
git clone <this-repo>
esy install
esy build
```

## Running Binary:

After building the project, you can run the main binary that is produced.

```
esy x PesyTestApp.exe 
```

## Running Tests:

```
# Runs the "test" command in `package.json`.
esy test
```
