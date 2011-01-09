/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;



@interface MPMediaItemChapter : NSObject 
{
    NSString *_title;
    NSUInteger _chapterIndex;
    double _playbackTime;
    double _duration;
}

@property double duration;
@property double playbackTime;
@property NSUInteger chapterIndex;
@property(copy) NSString *title;


- (double)duration;
- (void)setDuration:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setPlaybackTime:(double)arg1;
- (void)setChapterIndex:(NSUInteger)arg1;
- (double)playbackTime;
- (NSUInteger)chapterIndex;

@end