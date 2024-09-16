#include Dish.hpp


Dish::Dish(){
    name = "UNKNOWN";
    ingredients = {};
    prep_time = 0;
    price = 0.0;
    cuisine_type = "OTHER";
}

Dish::Dish(std::string name_,std::string ingredients, int prep_time_, double price_, CuisineType cuisine_type_){
    name_ = name;
    ingredients_ = ingredients;
    prep_time_ = prep_time;
    price_ = price; 
    cuisine_type_ = cuisine_type;
    
}
void Dish::setName(const std::string name_){
name_ = name;
}

std::string getName() const{
    return name_;
}

void Dish::setIngredients(std::vector<std::string>ingredients){
    ingredients_ = ingredients; 
}

std::string getIngredients() const{
    return ingredients_;

}
 void Dish::setPrepTime(const int prep_time){
    prep_time_ = prep_time;
 }

 int Dish::getPrepTime() const{
    return prep_time_;
 }

 double Dish::setPrice(double price) const{
    price_ = price;
 }
 double Dish::getPrice() const{
    return price_; 
}
 void Dish::setCuisineType(CuisineType cuisine_type){
    cuisine_type_ = cuisine_type; 
 }

 std::string getCuisineType() const{
    return cuisine_type_; 
}

void Dish::display() const{
    std::cout << "Dish Name: " << name_ << std::endl;
    std::cout << "Ingredients:" << ingredients_ << std::endl;
    for(int i = 0; i < ingredients_.size(); i++){
        std::cout << ingredients_[i];
    }
    std::cout << "Preparation Time: "<< prep_time_ << "minutes" << std::endl;
    std::cout << "$Price: " << price_ << std::endl;
}