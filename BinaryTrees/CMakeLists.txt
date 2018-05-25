project(BinaryTrees)

SET(CMAKE_CXX_STANDARD 11)

INCLUDE_DIRECTORIES(/home/selwb/Documents/Datastructures/BasicDatastructures)
SET(BinaryTrees_SRC main.cpp BinNode.h BinNodePtr.h TreeTravels.h)
SET(BSTmain_SRC BinNode.h BinNodePtr.h TreeTravels.h BST.h BSTmain.cpp)
SET(MaxHeap_SRC MaxHeap.h MaxHeapmain.cpp)

ADD_EXECUTABLE(BinaryTrees ${BinaryTrees_SRC})
ADD_EXECUTABLE(BSTmain ${BSTmain_SRC})
ADD_EXECUTABLE(MaxHeapmain ${MaxHeap_SRC})