/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class AVItem, NSString, NSDate;

@interface RCSavedRecording : NSManagedObject {
    unsigned int _beingRemade : 1;
    AVItem *_avItem;
    NSString *_pathForRemaking;
}

@property(readonly) AVItem * avItem;
@property(getter=isBeingRemade) BOOL beingRemade;
@property(copy) NSString * customLabel;
@property(copy) NSDate * date;
@property(readonly) NSString * detailLabel;
@property double duration;
@property long long iTunesPersistentID;
@property(readonly) NSString * label;
@property unsigned int labelPreset;
@property(copy) NSString * path;
@property(copy) NSString * pathForRemaking;
@property(getter=isPendingRestore) BOOL pendingRestore;
@property(getter=isSynced) BOOL synced;

+ (id)localizedStringForRecordingLabel:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)avItem;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (id)detailLabel;
- (double)duration;
- (long long)iTunesPersistentID;
- (BOOL)isBeingRemade;
- (BOOL)isPendingRestore;
- (BOOL)isSynced;
- (id)label;
- (unsigned int)labelPreset;
- (id)pathForRemaking;
- (void)setBeingRemade:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setITunesPersistentID:(long long)arg1;
- (void)setLabelPreset:(unsigned int)arg1;
- (void)setPathForRemaking:(id)arg1;
- (void)setPendingRestore:(BOOL)arg1;
- (void)setSynced:(BOOL)arg1;
- (void)willSave;

@end