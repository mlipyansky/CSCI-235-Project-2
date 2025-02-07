/**
 * @file Test.cpp
 * @brief This file contains the testing for the Appetizer, MainCourse and Dessert Classes.
 *
 * Expected outputs are given in Project 2 Specifications
 *
 * @date 09/19/2024
 * @author Mitchell Lipyansky
 */

#include "Appetizer.hpp"
#include "MainCourse.hpp"
#include "Dessert.hpp"
#include <iostream>
#include <iomanip>

int main() {
    // Test: Appetizer

    // Instantiate an appetizer with the default constructor
    Appetizer appetizer;

    // Set its spiciness level to 7
    appetizer.setSpicinessLevel(7);

    // Set its serving style to FAMILY_STYLE
    appetizer.setServingStyle(Appetizer::ServingStyle::FAMILY_STYLE);

    // Set the vegetarian flag to true
    appetizer.setVegetarian(true);

    // Print basic dish details
    appetizer.display();

    // Print additional Appetizer-specific attributes
    std::cout << "Spiciness Level: " << appetizer.getSpicinessLevel() << std::endl;

    std::cout << "Serving Style: "
              << (appetizer.getServingStyle() == Appetizer::ServingStyle::FAMILY_STYLE ? "FAMILY_STYLE" : "OTHER")
              << std::endl;

    std::cout << "Vegetarian: " << (appetizer.isVegetarian() ? "True" : "False") << std::endl;

    std::cout << std::endl;

    // Test: Main Course

    // SideDish objects
    MainCourse::SideDish mashedPotatoes = {"Mashed Potatoes", MainCourse::Category::STARCHES};
    MainCourse::SideDish greenBeans = {"Green Beans", MainCourse::Category::VEGETABLE};

    // Instantiate a main course with the parameterized constructor
    std::vector<MainCourse::SideDish> sideDishes = {mashedPotatoes, greenBeans};

    MainCourse grilledChicken("Grilled Chicken", {"Chicken", "Olive Oil", "Garlic", "Rosemary"}, 30, 18.99,
                              Dish::CuisineType::AMERICAN, MainCourse::CookingMethod::GRILLED, "Chicken", sideDishes, true);

    // Display function for basic dish details
    grilledChicken.display();

    // Print additional MainCourse-specific attributes
    std::cout << "Cooking Method: "
              << (grilledChicken.getCookingMethod() == MainCourse::CookingMethod::GRILLED ? "GRILLED" : "OTHER")
              << std::endl;

    std::cout << "Protein Type: " << grilledChicken.getProteinType() << std::endl;

    std::cout << "Side Dishes: ";
    for (size_t i = 0; i < grilledChicken.getSideDishes().size(); ++i) {
        std::cout << grilledChicken.getSideDishes()[i].name << " ("
                  << (grilledChicken.getSideDishes()[i].category == MainCourse::Category::STARCHES ? "Starches" : "Vegetable")
                  << ")";
        if (i < grilledChicken.getSideDishes().size() - 1) { //check if printing last element, then no comma
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    std::cout << "Gluten-Free: " << (grilledChicken.isGlutenFree() ? "True" : "False") << std::endl;

    std::cout << std::endl;

    //Test: Dessert

    //Create Dessert object with parameterized constructor
    Dessert dessert("Chocolate Cake", {"Flour, Sugar, Cocoa Powder, Eggs"}, 45, 7.99, Dish::CuisineType::FRENCH, Dessert::FlavorProfile::SWEET, 9, false);
    dessert.display(); //display basic details
    std::cout << "Flavor Profile: "
              << (dessert.getFlavorProfile() == Dessert::FlavorProfile::SWEET ? "SWEET" : "OTHER")
              << std::endl;
    std::cout << "Sweetness Level: " << dessert.getSweetnessLevel() << std::endl;
    std::cout << "Contains Nuts: " << (dessert.containsNuts() ? "True" : "False") << std::endl;

    // Dish Setter functions
    Dish chickenWaffles;
    chickenWaffles.setName("Chicken and Waffles");
    chickenWaffles.setIngredients({"Chicken", "Waffles"});
    chickenWaffles.setPrepTime(30);
    chickenWaffles.setPrice(19.99);
    chickenWaffles.setCuisineType(Dish::CuisineType::AMERICAN);

    //Dish Getter functions
    std::cout << "Dish Name: " << chickenWaffles.getName() << std::endl;
    std::cout << "Ingredients: ";
    for (size_t i = 0; i < chickenWaffles.getIngredients().size(); ++i) {
        std::cout << chickenWaffles.getIngredients()[i];
        if (i < chickenWaffles.getIngredients().size() - 1) { //check if last ingredient to not print extra comma
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    std::cout << "Preparation Time: " << chickenWaffles.getPrepTime() << " minutes" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Price: $" << chickenWaffles.getPrice() << std::endl;
    std::cout << "Cuisine Type: " << chickenWaffles.getCuisineType() << std::endl;

    // MainCourse Setter functions

    grilledChicken.setCookingMethod(MainCourse::CookingMethod::BAKED);
    grilledChicken.setProteinType("Poultry");
    grilledChicken.setGlutenFree(false);
    grilledChicken.addSideDish({"Salad", MainCourse::Category::VEGETABLE});

    //Dessert Setter functions

    dessert.setFlavorProfile(Dessert::FlavorProfile::SWEET);
    dessert.setSweetnessLevel(3);
    dessert.setContainsNuts(true);

    return 0;
}
