/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on Nov 7, 2013, 2:55:52 PM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

#include <string>
using namespace std;

string max(string first, string second, string third);

void newtestclass::testMax_01() {
    string first = "5";
    string second = "7";
    string third = "3";

    string result = max(first, second, third);
    string expected = "7";

    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testMax_02() {
    string first = "987531";
    string second = "234";
    string third = "86364";

    string result = max(first, second, third);
    string expected = "987531";

    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testMax_03() {
    string first = "189285";
    string second = "283";
    string third = "4958439238923098349024";

    string result = max(first, second, third);
    string expected = "4958439238923098349024";

    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testMax_04() {
    string first = "W189285";
    string second = "283";
    string third = "4958439238923098349024";

    string result = max(first, second, third);
    string expected = "Error: incorrect input data.";

    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testMax_05() {
    string first = "189285";
    string second = "W283";
    string third = "4958439238923098349024";

    string result = max(first, second, third);
    string expected = "Error: incorrect input data.";

    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testMax_06() {
    string first = "189285";
    string second = "283";
    string third = "W4958439238923098349024";

    string result = max(first, second, third);
    string expected = "Error: incorrect input data.";

    CPPUNIT_ASSERT_EQUAL(expected, result);
}
