//
//  Piece.h
//  SeikenBlock
//
//  Created by Hayata Miyazaki on 2015/09/19.
//
//

#ifndef __SeikenBlock__Piece__
#define __SeikenBlock__Piece__

#include "cocos2d.h"

const int PIECE_SIZE = 40;

class Piece :public cocos2d::Sprite
{
protected:
    Piece();
    virtual ~Piece();
    bool init() override;

public:
    /// 降ってくるピースの形
    enum class Shape{
        // 真四角
        // □□
        // □□
        O,
        // 細長いやつ
        // □□□□
        I,
        // 端が曲がってるやつ，左
        //  □
        //  □
        // □□
        J,
        // 端が曲がってるやつ，右
        // □
        // □
        // □□
        L,
        // うねうね，左
        // □□
        //  □□
        Z,
        // うねうね，右
        //  □□
        // □□
        S,
        // 凸の字
        //  □
        // □□□
        T,
        // ピースの種類の総数
        COUNT
    };
    
    /// ピースの状態
    enum class State{
        // 降下中
        FALLING,
        // 停止中
        STATIC
    };
    
    /// 絶対座標からグリッド座標に変換
    
    /// グリッド座標から絶対座標に変換　実装するかどうか決めてない
    
    CREATE_FUNC(Piece);
    
};

#endif /* defined(__SeikenBlock__Piece__) */
