/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class AXHearingAidMode, NSArray, NSString, CBPeripheral, NSMutableDictionary, AXTimer;

@interface AXHearingAidDevice : NSObject <CBPeripheralDelegate> {
    float _leftVolume;
    float _rightVolume;
    float _leftMicrophoneVolume;
    float _rightMicrophoneVolume;
    float _leftStreamVolume;
    float _rightStreamVolume;
    BOOL _keepInSync;
    BOOL _finishedLoading;
    long initialLoadToken;
    AXTimer *_leftInvalidationTimer;
    AXTimer *_rightInvalidationTimer;
    BOOL _didLoseLeftPeripheral;
    BOOL _didLoseRightPeripheral;
    NSString *leftUUID;
    NSString *rightUUID;
    NSString *name;
    NSString *manufacturer;
    NSString *model;
    float rightBatteryLevel;
    float leftBatteryLevel;
    NSArray *rightPrograms;
    NSArray *leftPrograms;
    AXHearingAidMode *currentRightProgram;
    AXHearingAidMode *currentLeftProgram;
    CBPeripheral *leftPeripheral;
    CBPeripheral *rightPeripheral;
    BOOL isPaired;
    BOOL isConnecting;
    BOOL isPersistent;
    int leftLoadedProperties;
    int rightLoadedProperties;
    NSMutableDictionary *leftPropertiesLoadCount;
    NSMutableDictionary *rightPropertiesLoadCount;
    NSString *leftPeripheralUUID;
    NSString *rightPeripheralUUID;
    struct CGImage { } *_devicePhoto;
}

@property BOOL isPaired;
@property BOOL isConnecting;
@property BOOL keepInSync;
@property BOOL isPersistent;
@property(retain) NSString * name;
@property(retain) NSString * manufacturer;
@property(retain) NSString * model;
@property(retain) NSString * rightUUID;
@property(retain) NSString * leftUUID;
@property(retain) NSString * leftPeripheralUUID;
@property(retain) NSString * rightPeripheralUUID;
@property float rightVolume;
@property float leftVolume;
@property float rightMicrophoneVolume;
@property float leftMicrophoneVolume;
@property float rightStreamVolume;
@property float leftStreamVolume;
@property float rightBatteryLevel;
@property float leftBatteryLevel;
@property(copy) NSArray * rightPrograms;
@property(copy) NSArray * leftPrograms;
@property(retain) CBPeripheral * leftPeripheral;
@property(retain) CBPeripheral * rightPeripheral;
@property struct CGImage { }* devicePhoto;
@property AXHearingAidMode * currentRightProgram;
@property AXHearingAidMode * currentLeftProgram;
@property int leftLoadedProperties;
@property int rightLoadedProperties;
@property(retain) NSMutableDictionary * leftPropertiesLoadCount;
@property(retain) NSMutableDictionary * rightPropertiesLoadCount;

+ (id)characteristicsUUIDs;

- (void)setManufacturer:(id)arg1;
- (id)manufacturer;
- (BOOL)isConnecting;
- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (void)disconnect;
- (BOOL)isPersistent;
- (void)connect;
- (id)model;
- (void)_init;
- (void)reload;
- (void)setModel:(id)arg1;
- (struct CGImage { }*)devicePhoto;
- (BOOL)addPeripheral:(id)arg1;
- (void)setRightStreamVolume:(float)arg1;
- (void)setLeftStreamVolume:(float)arg1;
- (void)setRightVolume:(float)arg1;
- (id)rightSelectedProgram;
- (id)leftSelectedProgram;
- (id)selectedProgramIndexes;
- (id)selectedPrograms;
- (void)selectProgram:(id)arg1;
- (void)setKeepInSync:(BOOL)arg1;
- (id)rssi;
- (BOOL)containsPeripheralWithUUID:(id)arg1;
- (void)connectionDidChange;
- (id)initWithPersistentRepresentation:(id)arg1;
- (id)initWithPeripheral:(id)arg1;
- (id)currentRightProgram;
- (void)setRightPeripheral:(id)arg1;
- (void)setRightBatteryLevel:(float)arg1;
- (void)didCommunicateWithPeripheral:(id)arg1;
- (void)writeVolume:(float)arg1 toPeripheral:(id)arg2 forProperty:(int)arg3;
- (void)setRightMicrophoneVolume:(float)arg1;
- (id)programs;
- (void)setRightSelectedProgram:(id)arg1;
- (void)setLeftSelectedProgram:(id)arg1;
- (id)peripheral:(id)arg1 characteristicForProperty:(int)arg2;
- (void)writeInt:(unsigned char)arg1 toPeripheral:(id)arg2 forProperty:(int)arg3;
- (void)reloadPropertiesForPeripheral:(id)arg1 withLoadCount:(id)arg2;
- (BOOL)keepInSync;
- (void)loadProperties:(int)arg1 forPeripheral:(id)arg2 withRetryPeriod:(float)arg3;
- (BOOL)peripheral:(id)arg1 didLoadProperty:(int)arg2;
- (void)loadRequiredProperties;
- (BOOL)didLoadRequiredProperties;
- (void)loadFailedProperties;
- (void)setNotify:(BOOL)arg1 forPeripheral:(id)arg2;
- (int)peripheral:(id)arg1 propertyForCharacteristic:(id)arg2;
- (id)rightPrograms;
- (void)mateWithDevice:(id)arg1;
- (void)setRightLoadedProperties:(int)arg1;
- (void)setLeftLoadedProperties:(int)arg1;
- (id)currentLeftProgram;
- (id)leftPrograms;
- (void)setLeftBatteryLevel:(float)arg1;
- (void)setLeftMicrophoneVolume:(float)arg1;
- (void)setLeftVolume:(float)arg1;
- (id)rightUUID;
- (id)leftUUID;
- (id)rightPropertiesLoadCount;
- (id)leftPropertiesLoadCount;
- (int)rightLoadedProperties;
- (int)leftLoadedProperties;
- (id)rightPeripheralUUID;
- (id)leftPeripheralUUID;
- (void)loadBasicProperties;
- (BOOL)didLoadBasicProperties;
- (id)persistentRepresentation;
- (id)rightPeripheral;
- (id)leftPeripheral;
- (void)setDevicePhoto:(struct CGImage { }*)arg1;
- (void)setIsPaired:(BOOL)arg1;
- (void)setIsPersistent:(BOOL)arg1;
- (void)setRightPeripheralUUID:(id)arg1;
- (void)setRightUUID:(id)arg1;
- (void)setLeftUUID:(id)arg1;
- (void)peripheral:(id)arg1 didUpdateCharacteristic:(id)arg2;
- (void)setLeftPeripheralUUID:(id)arg1;
- (void)setLeftPeripheral:(id)arg1;
- (void)setCurrentRightProgram:(id)arg1;
- (void)setCurrentLeftProgram:(id)arg1;
- (void)setRightPropertiesLoadCount:(id)arg1;
- (void)setLeftPropertiesLoadCount:(id)arg1;
- (void)setLeftPrograms:(id)arg1;
- (void)setRightPrograms:(id)arg1;
- (float)rightStreamVolume;
- (float)leftStreamVolume;
- (float)rightMicrophoneVolume;
- (float)rightVolume;
- (float)leftMicrophoneVolume;
- (float)leftVolume;
- (float)rightBatteryLevel;
- (float)leftBatteryLevel;
- (BOOL)peripheralsStillAvailable;
- (BOOL)isPaired;
- (BOOL)rightAvailable;
- (BOOL)leftAvailable;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheralDidInvalidateServices:(id)arg1;
- (void)peripheralDidUpdateName:(id)arg1;
- (void)setIsConnecting:(BOOL)arg1;
- (BOOL)isConnected;

@end