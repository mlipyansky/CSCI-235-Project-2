/**
 * @file Dessert.cpp
 * @brief This file contains the implementation of the Dessert class, which is a subclass of the Dish class.
 *
 * The Dessert class includes methods to manage the Dessert details such as flavor profile,
 * sweetness level, and if it contains nuts.
 * It provides constructors, accessor and mutator functions, and inherits the Dish class properties.
 *
 * @date 09/21/2024
 * @author Mitchell Lipyansky
 */

#include "Dessert.hpp"

/**
    * Default constructor.
    * Initializes all private members with default values.
*/
Dessert::Dessert()
        : Dish("UNKNOWN", {}, 0, 0.0, CuisineType::OTHER), flavor_profile_(FlavorProfile::SWEET), sweetness_level_(0), contains_nuts_(false) {}

/**
    * Parameterized constructor.
    * @param name The name of the dessert.
    * @param ingredients The ingredients used in the dessert.
    * @param prep_time The preparation time in minutes.
    * @param price The price of the dessert.
    * @param cuisine_type The cuisine type of the dessert.
    * @param flavor_profile The flavor profile of the dessert.
    * @param sweetness_level The sweetness level of the dessert.
    * @param contains_nuts Flag indicating if the dessert contains nuts.
*/
Dessert::Dessert(const std::string& name, const std::vector<std::string>& ingredients, int prep_time, double price, CuisineType cuisine_type, FlavorProfile flavor_profile, int sweetness_level, bool contains_nuts)
        : Dish(name, ingredients, prep_time, price, cuisine_type), flavor_profile_(flavor_profile), sweetness_level_(sweetness_level), contains_nuts_(contains_nuts) {}

// Accessors

/**
    * @return The flavor profile of the dessert (as an enum).
*/
Dessert::FlavorProfile Dessert::getFlavorProfile() const {
    return flavor_profile_;
}

/**
    * @return The sweetness level of the dessert.
*/
int Dessert::getSweetnessLevel() const {
    return sweetness_level_;
}

/**
    * @return True if the dessert contains nuts, false otherwise.
*/
bool Dessert::containsNuts() const {
    return contains_nuts_;
}

// Mutators

/**
    * Sets the flavor profile of the dessert.
    * @param flavor_profile The new flavor profile.
    * @post Sets the private member `flavor_profile_` to the value of the
    parameter.
*/
void Dessert::setFlavorProfile(const FlavorProfile& flavor_profile) {
    flavor_profile_ = flavor_profile;
}

/**
    * Sets the sweetness level of the dessert.
    * @param sweetness_level An integer representing the sweetness level of
    the dessert.
    * @post Sets the private member `sweetness_level_` to the value of the
    parameter.
*/
void Dessert::setSweetnessLevel(const int& sweetness_level) {
    sweetness_level_ = sweetness_level;
}

/**
    * Sets the contains_nuts flag of the dessert.
    * @param contains_nuts A boolean indicating if the dessert contains
    nuts.
    * @post Sets the private member `contains_nuts_` to the value of the
    parameter.
*/
void Dessert::setContainsNuts(const bool& contains_nuts) {
    contains_nuts_ = contains_nuts;
}
