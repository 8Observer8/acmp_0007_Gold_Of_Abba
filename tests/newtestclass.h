/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on Nov 7, 2013, 2:55:51 PM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testMax_01);
    CPPUNIT_TEST(testMax_02);
    CPPUNIT_TEST(testMax_03);
    CPPUNIT_TEST(testMax_04);
    CPPUNIT_TEST(testMax_05);
    CPPUNIT_TEST(testMax_06);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testMax_01();
    void testMax_02();
    void testMax_03();
    void testMax_04();
    void testMax_05();
    void testMax_06();
};

#endif	/* NEWTESTCLASS_H */

