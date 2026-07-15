#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__CanRenderScene; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__ClearLastSubmittedFrame; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__ClearSkyboxOverride; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__CompositorBringToFront; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__CompositorDumpImages; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__CompositorGoToBack; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__CompositorQuit; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__FadeGrid; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__FadeToColor; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__ForceInterleavedReprojectionOn; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__ForceReconnectProcess; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetCumulativeStats; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetCurrentFadeColor; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetCurrentGridAlpha; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetCurrentSceneFocusProcess; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetFrameTimeRemaining; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetFrameTiming; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetFrameTimings; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetLastFrameRenderer; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetLastPoseForTrackedDeviceIndex; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetLastPoses; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetMirrorTextureD3D11; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetMirrorTextureGL; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetTrackingSpace; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetVulkanDeviceExtensionsRequired; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__GetVulkanInstanceExtensionsRequired; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__HideMirrorWindow; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__IsFullscreen; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__IsMirrorWindowVisible; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__LockGLSharedTextureForAccess; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__PostPresentHandoff; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__ReleaseMirrorTextureD3D11; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__ReleaseSharedGLTexture; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__SetExplicitTimingMode; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__SetSkyboxOverride; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__SetTrackingSpace; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__ShouldAppRenderWithLowResources; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__ShowMirrorWindow; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__Submit; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__SubmitExplicitTimingData; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__SuspendRendering; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__UnlockGLSharedTextureForAccess; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRCompositor__WaitGetPoses; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor_TypeDefinitionIndex = 36858;

	struct alignas(8) IVRCompositor
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetTrackingSpace* SetTrackingSpace; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetTrackingSpace* GetTrackingSpace; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__WaitGetPoses* WaitGetPoses; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetLastPoses* GetLastPoses; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__Submit* Submit; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ClearLastSubmittedFrame* ClearLastSubmittedFrame; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__PostPresentHandoff* PostPresentHandoff; // 0x48
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetFrameTiming* GetFrameTiming; // 0x50
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetFrameTimings* GetFrameTimings; // 0x58
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetFrameTimeRemaining* GetFrameTimeRemaining; // 0x60
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCumulativeStats* GetCumulativeStats; // 0x68
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__FadeToColor* FadeToColor; // 0x70
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCurrentFadeColor* GetCurrentFadeColor; // 0x78
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__FadeGrid* FadeGrid; // 0x80
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCurrentGridAlpha* GetCurrentGridAlpha; // 0x88
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetSkyboxOverride* SetSkyboxOverride; // 0x90
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ClearSkyboxOverride* ClearSkyboxOverride; // 0x98
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__CompositorBringToFront* CompositorBringToFront; // 0xA0
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__CompositorGoToBack* CompositorGoToBack; // 0xA8
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__CompositorQuit* CompositorQuit; // 0xB0
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__IsFullscreen* IsFullscreen; // 0xB8
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess; // 0xC0
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetLastFrameRenderer* GetLastFrameRenderer; // 0xC8
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__CanRenderScene* CanRenderScene; // 0xD0
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ShowMirrorWindow* ShowMirrorWindow; // 0xD8
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__HideMirrorWindow* HideMirrorWindow; // 0xE0
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__IsMirrorWindowVisible* IsMirrorWindowVisible; // 0xE8
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__CompositorDumpImages* CompositorDumpImages; // 0xF0
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources; // 0xF8
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn; // 0x100
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ForceReconnectProcess* ForceReconnectProcess; // 0x108
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SuspendRendering* SuspendRendering; // 0x110
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetMirrorTextureD3D11* GetMirrorTextureD3D11; // 0x118
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11; // 0x120
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetMirrorTextureGL* GetMirrorTextureGL; // 0x128
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ReleaseSharedGLTexture* ReleaseSharedGLTexture; // 0x130
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__LockGLSharedTextureForAccess* LockGLSharedTextureForAccess; // 0x138
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess; // 0x140
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired; // 0x148
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired; // 0x150
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetExplicitTimingMode* SetExplicitTimingMode; // 0x158
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SubmitExplicitTimingData* SubmitExplicitTimingData; // 0x160
	};
}
