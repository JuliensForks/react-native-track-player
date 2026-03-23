#import <React/RCTEventEmitter.h>

#ifdef RCT_NEW_ARCH_ENABLED
#import <NativeTrackPlayerSpec/NativeTrackPlayerSpec.h>
#else
#import <React/RCTBridgeModule.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface NativeTrackPlayer: RCTEventEmitter

#ifdef RCT_NEW_ARCH_ENABLED
<NativeTrackPlayerSpec>
#else
<RCTBridgeModule>
#endif

@end

NS_ASSUME_NONNULL_END
