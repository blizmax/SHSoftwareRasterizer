//
//  BasicGeometry.h
//  SHSoftwareRasterizer
//
//  Created by 7heaven on 16/5/12.
//  Copyright © 2016年 7heaven. All rights reserved.
//

#ifndef BasicGeometry_h
#define BasicGeometry_h

typedef struct{
    int x;
    int y;
}SHPoint;

typedef struct{
    int x;
    int y;
    int z;
}SHPoint3D;

typedef struct{
    SHPoint a;
    SHPoint b;
    SHPoint c;
}SHTriangle;

typedef struct{
    SHPoint3D a;
    SHPoint3D b;
    SHPoint3D c;
}SHTriangle3D;

typedef struct{
    unsigned char a;
    unsigned char r;
    unsigned char g;
    unsigned char b;
}SHColor;


#endif /* BasicGeometry_h */
