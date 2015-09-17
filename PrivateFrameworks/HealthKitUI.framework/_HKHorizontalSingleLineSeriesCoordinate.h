/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface _HKHorizontalSingleLineSeriesCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    BOOL _groupToPrevious;
    int _markStyle;
    id _userInfo;
    float _xValue;
    int _yValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float endXValue;
@property (nonatomic, readonly) BOOL groupToPrevious;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int markStyle;
@property (nonatomic, readonly) float startXValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id userInfo;
@property (nonatomic, readonly) float xValue;
@property (nonatomic, readonly) int yValue;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 roundToViewScale:(BOOL)arg2;
- (float)endXValue;
- (BOOL)groupToPrevious;
- (id)initWithXValue:(float)arg1 yValue:(int)arg2 groupToPrevious:(BOOL)arg3 markStyle:(int)arg4 userInfo:(id)arg5;
- (int)markStyle;
- (float)startXValue;
- (id)userInfo;
- (float)xValue;
- (int)yValue;

@end