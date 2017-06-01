//
//  Node.h
//  贪食蛇
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#define NODEWH 10

@interface Node : NSObject
@property (nonatomic, assign) CGPoint coordinate;
+ (instancetype)nodeWithCoordinate:(CGPoint)coordinate;
@end
