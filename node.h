#ifndef NODE_H
#define NODE_H

template <class X, class Y> struct node {
  int first{};
  int second{};
  node *left = nullptr;
  node *right = nullptr;
  node()= default;;
//    node(X x, Y y){first=x;second=y;}
};

#endif