#include <hidl/ConcurrentMap.h>
#include <hidl/Static.h>

namespace android {
namespace hardware {
namespace details {

// Deprecated; kept for the ABI of old prebuilts. Nothing reads these any more.
DoNotDestruct<BnConstructorMap> gBnConstructorMap{};
DoNotDestruct<BsConstructorMap> gBsConstructorMap{};

}  // namespace details
}  // namespace hardware
}  // namespace android
