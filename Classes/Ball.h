//
//  Ball.h
//  Pontra
//
//  Created by Mark Sands on 4/16/10.
//  Copyright 2010 nil. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>

@interface Ball : NSObject {
  int x;
  int y;
}

- (void) Render;
- (void) Update;
- (void) moveY:(int) dir;
- (void) moveX:(int) dir;
- (void) setPos:(CGPoint) p;

@end