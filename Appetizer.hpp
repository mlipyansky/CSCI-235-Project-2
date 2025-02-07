/**
 * @file Appetizer.hpp
 * @brief This file contains the declaration of the Appetizer class, which is a subclass of the Dish class.
 *
 * The Appetizer class includes attributes such as ServingStyle, spiciness levels, and if vegetarian.
 * It provides constructors, accessor and mutator functions, and inherits the Dish class properties.
 *
 * @date 09/19/2024
 * @author Mitchell Lipyansky
 */

#ifndef APPETIZER_HPP
#define APPETIZER_HPP

#include "Dish.hpp"

class Appetizer : public Dish {
public:
    // ServingStyle enum definition
    enum ServingStyle { PLATED, FAMILY_STYLE, BUFFET };

    // Constructors
    /**
    * Default constructor.
    * Initializes all private members with default values.
    */
    Appetizer();

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
    Appetizer(const std::string& name, const std::vector<std::string>& ingredients, int prep_time, double price, CuisineType cuisine_type, ServingStyle serving_style, int spiciness_level, bool vegetarian);

    // Accessors
    /**
    * @return The serving style of the appetizer (as an enum).
    */
    ServingStyle getServingStyle() const;

    /**
    * @return The spiciness level of the appetizer.
    */
    int getSpicinessLevel() const;

    /**
    * @return True if the appetizer is vegetarian, false otherwise.
    */
    bool isVegetarian() const;

    // Mutators
    /**
    * Sets the serving style of the appetizer.
    * @param serving_style The new serving style.
    * @post Sets the private member `serving_style_` to the value of the
    parameter.
    */
    void setServingStyle(const ServingStyle& serving_style);

    /**
    * Sets the spiciness level of the appetizer.
    * @param spiciness_level An integer representing the spiciness level of
    the appetizer.
    * @post Sets the private member `spiciness_level_` to the value of the
    parameter.
    */
    void setSpicinessLevel(const int& spiciness_level);

    /**
    * Sets the vegetarian flag of the appetizer.
    * @param vegetarian A boolean indicating if the appetizer is
    vegetarian.
    * @post Sets the private member `vegetarian_` to the value of the
    parameter.
    */
    void setVegetarian(const bool& vegetarian);

private:
    ServingStyle serving_style_;
    int spiciness_level_;
    bool vegetarian_;
};

#endif // APPETIZER_HPP
