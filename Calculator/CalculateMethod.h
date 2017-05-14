//
//  CalculateMethod.h
//  Calculator
//
//  Created by Shiratsuyu on 2017/5/14.
//  Copyright © 2017年 Shiratsuyu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculateMethod : NSObject

@property(assign,nonatomic)long double operand1,operand2,result;

-(long double)performOperation:(int)input;
-(void)clear;

@end
