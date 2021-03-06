/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusMapSearchInfo : NSObject {
    BOOL  _didFindFocusBlockingBoundary;
    NSMutableArray * _mutableDestinationRegions;
    NSMutableArray * _mutableSnapshots;
}

@property (nonatomic, readonly, copy) NSArray *destinationRegions;
@property (nonatomic) BOOL didFindFocusBlockingBoundary;
@property (nonatomic, retain) NSMutableArray *mutableDestinationRegions;
@property (nonatomic, retain) NSMutableArray *mutableSnapshots;
@property (nonatomic, readonly, copy) NSArray *snapshots;

- (void).cxx_destruct;
- (void)addDestinationRegion:(id)arg1;
- (void)addSnapshot:(id)arg1;
- (id)destinationRegions;
- (BOOL)didFindFocusBlockingBoundary;
- (id)init;
- (id)mutableDestinationRegions;
- (id)mutableSnapshots;
- (void)setDidFindFocusBlockingBoundary:(BOOL)arg1;
- (void)setMutableDestinationRegions:(id)arg1;
- (void)setMutableSnapshots:(id)arg1;
- (id)snapshots;

@end
