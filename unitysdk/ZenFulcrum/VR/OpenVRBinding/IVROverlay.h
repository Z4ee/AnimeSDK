#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__ClearOverlayTexture; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__CloseMessageOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__ComputeOverlayIntersection; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__CreateDashboardOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__CreateOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__DestroyOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__FindOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetDashboardOverlaySceneProcess; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetGamepadFocusOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetHighQualityOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetKeyboardText; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayAlpha; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayColor; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayErrorNameFromEnum; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayFlag; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayFlags; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayImageData; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayInputMethod; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayKey; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayMouseScale; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayName; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayRenderModel; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayRenderingPid; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlaySortOrder; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayTexelAspect; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayTexture; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayTextureBounds; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayTextureColorSpace; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayTextureSize; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayTransformAbsolute; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayTransformOverlayRelative; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayTransformTrackedDeviceComponent; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayTransformTrackedDeviceRelative; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayTransformType; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetOverlayWidthInMeters; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetPrimaryDashboardDevice; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__GetTransformForOverlayCoordinates; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__HandleControllerOverlayInteractionAsMouse; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__HideKeyboard; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__HideOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__IsActiveDashboardOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__IsDashboardVisible; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__IsHoverTargetOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__IsOverlayVisible; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__MoveGamepadFocusToNeighbor; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__PollNextOverlayEvent; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__ReleaseNativeOverlayHandle; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetDashboardOverlaySceneProcess; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetGamepadFocusOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetHighQualityOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetKeyboardPositionForOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetKeyboardTransformAbsolute; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayAlpha; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayColor; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayFlag; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayFromFile; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayInputMethod; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayIntersectionMask; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayMouseScale; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayName; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayNeighbor; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayRaw; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayRenderModel; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayRenderingPid; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlaySortOrder; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayTexelAspect; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayTexture; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayTextureBounds; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayTextureColorSpace; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayTransformAbsolute; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayTransformOverlayRelative; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayTransformTrackedDeviceComponent; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayTransformTrackedDeviceRelative; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__SetOverlayWidthInMeters; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__ShowDashboard; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__ShowKeyboard; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__ShowKeyboardForOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__ShowMessageOverlay; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVROverlay__ShowOverlay; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay_TypeDefinitionIndex = 36902;

	struct alignas(8) IVROverlay
	{
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__FindOverlay* FindOverlay; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__CreateOverlay* CreateOverlay; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__DestroyOverlay* DestroyOverlay; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetHighQualityOverlay* SetHighQualityOverlay; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetHighQualityOverlay* GetHighQualityOverlay; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayKey* GetOverlayKey; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayName* GetOverlayName; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayName* SetOverlayName; // 0x48
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayImageData* GetOverlayImageData; // 0x50
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum; // 0x58
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayRenderingPid* SetOverlayRenderingPid; // 0x60
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayRenderingPid* GetOverlayRenderingPid; // 0x68
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayFlag* SetOverlayFlag; // 0x70
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayFlag* GetOverlayFlag; // 0x78
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayColor* SetOverlayColor; // 0x80
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayColor* GetOverlayColor; // 0x88
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayAlpha* SetOverlayAlpha; // 0x90
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayAlpha* GetOverlayAlpha; // 0x98
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTexelAspect* SetOverlayTexelAspect; // 0xA0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTexelAspect* GetOverlayTexelAspect; // 0xA8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlaySortOrder* SetOverlaySortOrder; // 0xB0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlaySortOrder* GetOverlaySortOrder; // 0xB8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayWidthInMeters* SetOverlayWidthInMeters; // 0xC0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayWidthInMeters* GetOverlayWidthInMeters; // 0xC8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters; // 0xD0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters; // 0xD8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTextureColorSpace* SetOverlayTextureColorSpace; // 0xE0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTextureColorSpace* GetOverlayTextureColorSpace; // 0xE8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTextureBounds* SetOverlayTextureBounds; // 0xF0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTextureBounds* GetOverlayTextureBounds; // 0xF8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayRenderModel* GetOverlayRenderModel; // 0x100
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayRenderModel* SetOverlayRenderModel; // 0x108
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformType* GetOverlayTransformType; // 0x110
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformAbsolute* SetOverlayTransformAbsolute; // 0x118
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformAbsolute* GetOverlayTransformAbsolute; // 0x120
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative; // 0x128
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative; // 0x130
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent; // 0x138
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent; // 0x140
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative; // 0x148
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative; // 0x150
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowOverlay* ShowOverlay; // 0x158
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__HideOverlay* HideOverlay; // 0x160
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__IsOverlayVisible* IsOverlayVisible; // 0x168
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates; // 0x170
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__PollNextOverlayEvent* PollNextOverlayEvent; // 0x178
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayInputMethod* GetOverlayInputMethod; // 0x180
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayInputMethod* SetOverlayInputMethod; // 0x188
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayMouseScale* GetOverlayMouseScale; // 0x190
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayMouseScale* SetOverlayMouseScale; // 0x198
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ComputeOverlayIntersection* ComputeOverlayIntersection; // 0x1A0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__HandleControllerOverlayInteractionAsMouse* HandleControllerOverlayInteractionAsMouse; // 0x1A8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__IsHoverTargetOverlay* IsHoverTargetOverlay; // 0x1B0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetGamepadFocusOverlay* GetGamepadFocusOverlay; // 0x1B8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetGamepadFocusOverlay* SetGamepadFocusOverlay; // 0x1C0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayNeighbor* SetOverlayNeighbor; // 0x1C8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor; // 0x1D0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayTexture* SetOverlayTexture; // 0x1D8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ClearOverlayTexture* ClearOverlayTexture; // 0x1E0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayRaw* SetOverlayRaw; // 0x1E8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayFromFile* SetOverlayFromFile; // 0x1F0
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTexture* GetOverlayTexture; // 0x1F8
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle; // 0x200
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayTextureSize* GetOverlayTextureSize; // 0x208
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__CreateDashboardOverlay* CreateDashboardOverlay; // 0x210
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__IsDashboardVisible* IsDashboardVisible; // 0x218
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__IsActiveDashboardOverlay* IsActiveDashboardOverlay; // 0x220
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess; // 0x228
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess; // 0x230
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowDashboard* ShowDashboard; // 0x238
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetPrimaryDashboardDevice* GetPrimaryDashboardDevice; // 0x240
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowKeyboard* ShowKeyboard; // 0x248
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowKeyboardForOverlay* ShowKeyboardForOverlay; // 0x250
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetKeyboardText* GetKeyboardText; // 0x258
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__HideKeyboard* HideKeyboard; // 0x260
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute; // 0x268
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay; // 0x270
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayIntersectionMask* SetOverlayIntersectionMask; // 0x278
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayFlags* GetOverlayFlags; // 0x280
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowMessageOverlay* ShowMessageOverlay; // 0x288
		::ZenFulcrum::VR::OpenVRBinding::IVROverlay__CloseMessageOverlay* CloseMessageOverlay; // 0x290
	};
}
