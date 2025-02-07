/**
 * @file Appetizer.cpp
 * @brief This file contains the implementation of the Appetizer class, which is a subclass of the Dish class.
 *
 * The Appetizer class includes methods to manage and present the Appetizer details such as ServingStyle, spiciness levels, and if vegetarian.
 * It provides constructors, accessor and mutator functions, and inherits the Dish class properties.
 *
 * @date 09/19/2024
 * @author Mitchell Lipyansky
 */

#include "Appetizer.hpp"

/**
    * Default constructor.
    * Initializes all private members with default values.
*/
Appetizer::Appetizer() : Dish("UNKNOWN", {}, 0, 0.0, CuisineType::OTHER), serving_style_(ServingStyle::PLATED), spiciness_level_(0), vegetarian_(false) {}
/**
    * Parameterized constructor.
    * @param name The name of the appetizer.
    * @param ingredients The ingredients used in the appetizer.
    * @param prep_time The preparation time in minutes.
    * @param price The price of the appetizer.
    * @param cuisine_type The cuisine type of the appetizer.
    * @param serving_style The serving style of the appetizer.
    * @param spiciness_level The spiciness level of the appetizer.
    * @param vegetarian Flag indicating if the appetizer is vegetarian.
*/
Appetizer::Appetizer(const std::string& name, const std::vector<std::string>& ingredients, int prep_time, double price, CuisineType cuisine_type, ServingStyle serving_style, int spiciness_level, bool vegetarian)
        : Dish(name, ingredients, prep_time, price, cuisine_type), serving_style_(serving_style), spiciness_level_(spiciness_level), vegetarian_(vegetarian) {}

// Accessors

/**
    * @return The serving style of the appetizer (as an enum).
*/
Appetizer::ServingStyle Appetizer::getServingStyle() const {
    return serving_style_;
}

/**
    * @return The spiciness level of the appetizer.
*/
int Appetizer::getSpicinessLevel() const {
    return spiciness_level_;
}

/**
   * @return True if the appetizer is vegetarian, false otherwise.
*/
bool Appetizer::isVegetarian() const {
    return vegetarian_;
}

// Mutators
/**
    * Sets the serving style of the appetizer.
    * @param serving_style The new serving style.
    * @post Sets the private member `serving_style_` to the value of the
    parameter.
*/
void Appetizer::setServingStyle(const ServingStyle& serving_style) {
    serving_style_ = serving_style;
}

/**
    * Sets the spiciness level of the appetizer.
    * @param spiciness_level An integer representing the spiciness level of
    the appetizer.
    * @post Sets the private member `spiciness_level_` to the value of the
    parameter.
*/
void Appetizer::setSpicinessLevel(const int& spiciness_level) {
    spiciness_level_ = spiciness_level;
}

/**
    * Sets the vegetarian flag of the appetizer.
    * @param vegetarian A boolean indicating if the appetizer is
    vegetarian.
    * @post Sets the private member `vegetarian_` to the value of the
    parameter.
*/
void Appetizer::setVegetarian(const bool& vegetarian) {
    vegetarian_ = vegetarian;
}

