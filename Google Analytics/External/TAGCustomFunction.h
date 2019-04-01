#import <Foundation/Foundation.h>

@protocol TAGCustomFunction<NSObject>

- (instancetype)init;
- (NSObject*)executeWithParameters:(NSDictionary*)parameters;

@end
