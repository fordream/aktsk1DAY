//
//  Piece.cpp
//  SeikenBlock
//
//  Created by Hayata Miyazaki on 2015/09/19.
//
//

#include "Piece.h"
#include <random>

USING_NS_CC;

Piece::Piece()
{
}

Piece::~Piece()
{
}

bool Piece::init()
{
    // 乱数発生器
    std::random_device rdev;
    auto engine = std::mt19937(rdev());
    auto dist = std::uniform_int_distribution<>(0,(int)Piece::Shape::COUNT-1);
    
    // ピースの形をランダムに設定
    auto shape = dist(engine);
    
    // Pieceの形を元にshapeを初期化
    
    
    // 
}