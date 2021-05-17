/*!
 * \file myTest.cpp
 * \brief Main de test contenant les tests unitaires sur les classes du projet de Conception Orientée Objet.
 * Pour se faire, j'ai utilisé le framework de test Catch2 :
 * Github : https://github.com/catchorg/Catch2/blob/master/docs/tutorial.md#top
 * \author Alexandre Chafaux
 * \version 1.0
 */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../includes/COO_Legacy_Class.h"

TEST_CASE("TESTE SUR COOCOMPLEX", "[COOComplex]"){

    COOComplex* C1 = new COOComplex(1);
    COOComplex* C2 = new COOComplex(2);


    SECTION("Test hashCode"){
        long int testHash = reinterpret_cast<long>(C1);
        REQUIRE(testHash == C1->hashCode());
        long int testHash2 = reinterpret_cast<long>(C2);
        REQUIRE(testHash2 == C2->hashCode());
        REQUIRE_FALSE(C1->hashCode() == C2->hashCode());
    }

}

 TEST_CASE("TESTE SUR COOString", "[COOString]"){

    COOString* C_HW = new COOString("Hello World");
    COOString* C_C = new COOString(" Chaf");

    SECTION("Test hashCode"){
        long int testHash = reinterpret_cast<long>(C_HW);
        REQUIRE(testHash == C_HW->hashCode());
        long int testHash2 = reinterpret_cast<long>(C_C);
        REQUIRE(testHash2 == C_C->hashCode());
        REQUIRE_FALSE(C_C->hashCode() == C_HW->hashCode());
    }

}

TEST_CASE("TEST SUR COO_REF", "[COOReferences]"){

    COOReferences<COOComplex> coo_ref(new COOComplex(1));
    COOReferences<COOString> coo_ref2(new COOString("Hello"));
    REQUIRE_FALSE(coo_ref->hashCode() == coo_ref2->hashCode());

}

