//
//  MeterTableOC.h
//


#import <Foundation/Foundation.h>

@interface MeterTableOC : NSObject {
    float    mMinDecibels;
    float    mDecibelResolution;
    float    mScaleFactor;
    NSMutableArray    *mTable;
}

- (instancetype)initWithMinDB:(float)minDB;

- (float)valueAt:(float)inDecibels;


@end
