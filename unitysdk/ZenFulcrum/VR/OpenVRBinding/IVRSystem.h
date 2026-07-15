#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__AcknowledgeQuit_Exiting; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__AcknowledgeQuit_UserPrompt; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__ApplyTransform; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__CaptureInputFocus; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__ComputeDistortion; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__DriverDebugRequest; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetBoolTrackedDeviceProperty; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetButtonIdNameFromEnum; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetControllerAxisTypeNameFromEnum; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetControllerRoleForTrackedDeviceIndex; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetControllerState; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetControllerStateWithPose; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetD3D9AdapterIndex; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetDXGIOutputInfo; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetDeviceToAbsoluteTrackingPose; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetEventTypeNameFromEnum; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetEyeToHeadTransform; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetFloatTrackedDeviceProperty; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetHiddenAreaMesh; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetInt32TrackedDeviceProperty; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetMatrix34TrackedDeviceProperty; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetOutputDevice; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetProjectionMatrix; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetProjectionRaw; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetPropErrorNameFromEnum; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetRecommendedRenderTargetSize; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetSortedTrackedDeviceIndicesOfClass; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetStringTrackedDeviceProperty; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetTimeSinceLastVsync; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetTrackedDeviceActivityLevel; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetTrackedDeviceClass; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetTrackedDeviceIndexForControllerRole; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__GetUint64TrackedDeviceProperty; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__IsDisplayOnDesktop; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__IsInputFocusCapturedByAnotherProcess; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__IsTrackedDeviceConnected; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__PerformFirmwareUpdate; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__PollNextEvent; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__PollNextEventWithPose; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__ReleaseInputFocus; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__ResetSeatedZeroPose; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__SetDisplayVisibility; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRSystem__TriggerHapticPulse; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem_TypeDefinitionIndex = 36733;

	struct alignas(8) IVRSystem
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetRecommendedRenderTargetSize* GetRecommendedRenderTargetSize; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetProjectionMatrix* GetProjectionMatrix; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetProjectionRaw* GetProjectionRaw; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ComputeDistortion* ComputeDistortion; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetEyeToHeadTransform* GetEyeToHeadTransform; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTimeSinceLastVsync* GetTimeSinceLastVsync; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetD3D9AdapterIndex* GetD3D9AdapterIndex; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetDXGIOutputInfo* GetDXGIOutputInfo; // 0x48
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetOutputDevice* GetOutputDevice; // 0x50
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__IsDisplayOnDesktop* IsDisplayOnDesktop; // 0x58
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__SetDisplayVisibility* SetDisplayVisibility; // 0x60
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetDeviceToAbsoluteTrackingPose* GetDeviceToAbsoluteTrackingPose; // 0x68
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ResetSeatedZeroPose* ResetSeatedZeroPose; // 0x70
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose* GetSeatedZeroPoseToStandingAbsoluteTrackingPose; // 0x78
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose* GetRawZeroPoseToStandingAbsoluteTrackingPose; // 0x80
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetSortedTrackedDeviceIndicesOfClass* GetSortedTrackedDeviceIndicesOfClass; // 0x88
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceActivityLevel* GetTrackedDeviceActivityLevel; // 0x90
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ApplyTransform* ApplyTransform; // 0x98
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceIndexForControllerRole* GetTrackedDeviceIndexForControllerRole; // 0xA0
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetControllerRoleForTrackedDeviceIndex* GetControllerRoleForTrackedDeviceIndex; // 0xA8
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetTrackedDeviceClass* GetTrackedDeviceClass; // 0xB0
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__IsTrackedDeviceConnected* IsTrackedDeviceConnected; // 0xB8
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetBoolTrackedDeviceProperty* GetBoolTrackedDeviceProperty; // 0xC0
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetFloatTrackedDeviceProperty* GetFloatTrackedDeviceProperty; // 0xC8
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetInt32TrackedDeviceProperty* GetInt32TrackedDeviceProperty; // 0xD0
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetUint64TrackedDeviceProperty* GetUint64TrackedDeviceProperty; // 0xD8
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetMatrix34TrackedDeviceProperty* GetMatrix34TrackedDeviceProperty; // 0xE0
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetStringTrackedDeviceProperty* GetStringTrackedDeviceProperty; // 0xE8
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetPropErrorNameFromEnum* GetPropErrorNameFromEnum; // 0xF0
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PollNextEvent* PollNextEvent; // 0xF8
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PollNextEventWithPose* PollNextEventWithPose; // 0x100
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetEventTypeNameFromEnum* GetEventTypeNameFromEnum; // 0x108
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetHiddenAreaMesh* GetHiddenAreaMesh; // 0x110
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetControllerState* GetControllerState; // 0x118
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetControllerStateWithPose* GetControllerStateWithPose; // 0x120
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__TriggerHapticPulse* TriggerHapticPulse; // 0x128
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetButtonIdNameFromEnum* GetButtonIdNameFromEnum; // 0x130
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetControllerAxisTypeNameFromEnum* GetControllerAxisTypeNameFromEnum; // 0x138
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__CaptureInputFocus* CaptureInputFocus; // 0x140
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__ReleaseInputFocus* ReleaseInputFocus; // 0x148
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__IsInputFocusCapturedByAnotherProcess* IsInputFocusCapturedByAnotherProcess; // 0x150
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__DriverDebugRequest* DriverDebugRequest; // 0x158
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__PerformFirmwareUpdate* PerformFirmwareUpdate; // 0x160
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__AcknowledgeQuit_Exiting* AcknowledgeQuit_Exiting; // 0x168
		::ZenFulcrum::VR::OpenVRBinding::IVRSystem__AcknowledgeQuit_UserPrompt* AcknowledgeQuit_UserPrompt; // 0x170
	};
}
