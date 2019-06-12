#include <iostream>
#include "./shopping.h"

// Push Goods object to shopping_list_ vector
void Shopping::PushList(Goods object) {
  shopping_list_.push_back(object);
}

// Get Goods object from end of shopping_list_ vector
Goods Shopping::GetLastElement() {
  return shopping_list_.back();
}

// Print shopping_list_ Elements
void Shopping::PrintList() {
  for (std::vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end(); i++) {
    std::cout << "Goods #" << i->GetIndex() << " - Price : " <<
    i->GetPrice() << std::endl;
  }
}

// Sort shopping_list_ Elements by Price
// Apply Selection Sort algorithm
void Shopping::SortByPrice() {
  sort(1);
}

// Sort shopping_list_ Elements by Index
void Shopping::SortByIndex() {
  sort(2);
}


// Sort shopping_list
// Apply Selection Sort algorithm
void Shopping::Sort(int type) {
  std::vector<Goods>::iterator p = shopping_list_.begin();
  std::vector<Goods>::iterator min = shopping_list_.end();
  for (std::vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end()-1; i++) {
    for (std::vector<Goods>::iterator j = i; j != shopping_list_.end(); j++) {
      if (min == shopping_list_.end()) {
        min = j;
        continue;
      }
      // TO DO: 비교 방식을 선택하는 부분 
      if (type == 1) {
        if (min->GetPrice() > j->GetPrice()) {
          min = j;
        }
      } else if (type == 2) {
        if (min->GetIndex() > j->GetIndex()) {
          min = j;
        }
        
    }
    std::iter_swap(i, min);
    min = shopping_list_.end();
  }
}


