//
//  RNHeatshrinkDecoder.h
//  Pods
//
//  Created by Rafael Nobre on 06/05/17.
//
//

#import <Foundation/Foundation.h>

@interface RNHeatshrinkDecoder : NSObject
    
- (instancetype)initWithWindowSize:(NSInteger)windowBitSize andLookaheadSize:(NSInteger)lookaheadBitSize;
    
- (instancetype)initWithBufferSize:(NSInteger)inputBufferSize windowSize:(NSInteger)windowBitSize andLookaheadSize:(NSInteger)lookaheadBitSize;
    
- (NSData *)decodeData:(NSData *)dataToDecode;

@end
