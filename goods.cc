#include "./goods.h"

void Goods::SetGoodsInfo(int index, int price) {
  goods_index_ = index;
  goods_price_ = price;
}

int Goods::GetIndex() {
  return goods_index_;
}

int Goods::GetPrice() {
  return goods_price_;
}
