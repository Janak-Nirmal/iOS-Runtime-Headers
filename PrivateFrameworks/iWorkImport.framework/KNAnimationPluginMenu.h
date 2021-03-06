/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface KNAnimationPluginMenu : NSObject {
    unsigned int mDefaultDirection;
    NSMutableDictionary *mDirectionToLocalizedStringMap;
    NSMutableArray *mDirections;
    NSMutableArray *mLocalizedDirections;
    NSMutableDictionary *mLocalizedStringToDirectionMap;
}

@property(readonly) unsigned int count;
@property unsigned int defaultDirection;
@property(readonly) NSArray * directions;
@property(readonly) NSArray * localizedDirections;

+ (id)animationPluginMenu;
+ (id)localizedStringForDirection:(unsigned int)arg1 shortVersion:(BOOL)arg2;

- (void)addDirection:(unsigned int)arg1 localizedMenuString:(id)arg2;
- (void)addDirection:(unsigned int)arg1 useShortString:(BOOL)arg2;
- (BOOL)containsDirection:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)defaultDirection;
- (unsigned int)directionForIndex:(unsigned int)arg1;
- (id)directions;
- (unsigned int)indexForDirection:(unsigned int)arg1;
- (id)init;
- (id)localizedDirections;
- (void)setDefaultDirection:(unsigned int)arg1;

@end
