cmake_minimum_required(VERSION 3.5)
project(owdin_contract VERSION 0.0.2)

find_package(eosio.cdt)

# add contract
add_contract(owdinnetwork, owdinnetwork, owdinnetwork.cpp)
