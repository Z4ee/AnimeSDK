#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Compositor_CumulativeStats.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Compositor_FrameTiming.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSubmitFlags.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/IVRCompositor.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Texture_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRTextureBounds_t.h"

namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_CANRENDERSCENE_OFFSET UNITYSDK_OFFSET(0x1B50F7A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_CLEARLASTSUBMITTEDFRAME_OFFSET UNITYSDK_OFFSET(0x1B50F400)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_CLEARSKYBOXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B50F650)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORBRINGTOFRONT_OFFSET UNITYSDK_OFFSET(0x1B50F680)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORDUMPIMAGES_OFFSET UNITYSDK_OFFSET(0x1B50F860)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORGOTOBACK_OFFSET UNITYSDK_OFFSET(0x1B50F6B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORQUIT_OFFSET UNITYSDK_OFFSET(0x1B50F6E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FADEGRID_OFFSET UNITYSDK_OFFSET(0x1B50F5B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FADETOCOLOR_OFFSET UNITYSDK_OFFSET(0x1B50F520)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FORCEINTERLEAVEDREPROJECTIONON_OFFSET UNITYSDK_OFFSET(0x1B50F8C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FORCERECONNECTPROCESS_OFFSET UNITYSDK_OFFSET(0x1B50F8F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCUMULATIVESTATS_OFFSET UNITYSDK_OFFSET(0x1B50F4F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTFADECOLOR_OFFSET UNITYSDK_OFFSET(0x1B50F570)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTGRIDALPHA_OFFSET UNITYSDK_OFFSET(0x1B50F5E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTSCENEFOCUSPROCESS_OFFSET UNITYSDK_OFFSET(0x1B50F740)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMEREMAINING_OFFSET UNITYSDK_OFFSET(0x1B50F4C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMINGS_OFFSET UNITYSDK_OFFSET(0x1B50F490)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMING_OFFSET UNITYSDK_OFFSET(0x1B50F460)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTFRAMERENDERER_OFFSET UNITYSDK_OFFSET(0x1B50F770)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTPOSEFORTRACKEDDEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x1B50F390)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTPOSES_OFFSET UNITYSDK_OFFSET(0x1B50F340)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETMIRRORTEXTURED3D11_OFFSET UNITYSDK_OFFSET(0x1B50F950)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETMIRRORTEXTUREGL_OFFSET UNITYSDK_OFFSET(0x1B50F9B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETTRACKINGSPACE_OFFSET UNITYSDK_OFFSET(0x1B50F2C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETVULKANDEVICEEXTENSIONSREQUIRED_OFFSET UNITYSDK_OFFSET(0x1B50FAB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETVULKANINSTANCEEXTENSIONSREQUIRED_OFFSET UNITYSDK_OFFSET(0x1B50FA80)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_HIDEMIRRORWINDOW_OFFSET UNITYSDK_OFFSET(0x1B50F800)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_ISFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x1B50F710)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_ISMIRRORWINDOWVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B50F830)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_LOCKGLSHAREDTEXTUREFORACCESS_OFFSET UNITYSDK_OFFSET(0x1B50FA20)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_POSTPRESENTHANDOFF_OFFSET UNITYSDK_OFFSET(0x1B50F430)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_RELEASEMIRRORTEXTURED3D11_OFFSET UNITYSDK_OFFSET(0x1B50F980)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_RELEASESHAREDGLTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B50F9F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETEXPLICITTIMINGMODE_OFFSET UNITYSDK_OFFSET(0x1B50FAE0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETSKYBOXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1B50F610)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETTRACKINGSPACE_OFFSET UNITYSDK_OFFSET(0x1B50F290)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SHOULDAPPRENDERWITHLOWRESOURCES_OFFSET UNITYSDK_OFFSET(0x1B50F890)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SHOWMIRRORWINDOW_OFFSET UNITYSDK_OFFSET(0x1B50F7D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUBMITEXPLICITTIMINGDATA_OFFSET UNITYSDK_OFFSET(0x1B50FB10)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1B50F3C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUSPENDRENDERING_OFFSET UNITYSDK_OFFSET(0x1B50F920)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_UNLOCKGLSHAREDTEXTUREFORACCESS_OFFSET UNITYSDK_OFFSET(0x1B50FA50)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_WAITGETPOSES_OFFSET UNITYSDK_OFFSET(0x1B50F2F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B50F1B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRCompositor_TypeDefinitionIndex = 36263;

	class CVRCompositor : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetTrackingSpace(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETTRACKINGSPACE_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin GetTrackingSpace()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETTRACKINGSPACE_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError WaitGetPoses(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* a1, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_WAITGETPOSES_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError GetLastPoses(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* a1, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTPOSES_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError GetLastPoseForTrackedDeviceIndex(::System::UInt32 a1, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a2, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTPOSEFORTRACKEDDEVICEINDEX_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Submit(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::ZenFulcrum::VR::OpenVRBinding::Texture_t& a2, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a3, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUBMIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ClearLastSubmittedFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_CLEARLASTSUBMITTEDFRAME_OFFSET))(this);
		}

		::System::Void PostPresentHandoff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_POSTPRESENTHANDOFF_OFFSET))(this);
		}

		::System::Boolean GetFrameTiming(::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming& a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMING_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetFrameTimings(::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming& a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMINGS_OFFSET))(this, a1, a2);
		}

		::System::Single GetFrameTimeRemaining()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMEREMAINING_OFFSET))(this);
		}

		::System::Void GetCumulativeStats(::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats& a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCUMULATIVESTATS_OFFSET))(this, a1, a2);
		}

		::System::Void FadeToColor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FADETOCOLOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdColor_t GetCurrentFadeColor(::System::Boolean a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdColor_t(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTFADECOLOR_OFFSET))(this, a1);
		}

		::System::Void FadeGrid(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FADEGRID_OFFSET))(this, a1, a2);
		}

		::System::Single GetCurrentGridAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTGRIDALPHA_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError SetSkyboxOverride(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETSKYBOXOVERRIDE_OFFSET))(this, a1);
		}

		::System::Void ClearSkyboxOverride()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_CLEARSKYBOXOVERRIDE_OFFSET))(this);
		}

		::System::Void CompositorBringToFront()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORBRINGTOFRONT_OFFSET))(this);
		}

		::System::Void CompositorGoToBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORGOTOBACK_OFFSET))(this);
		}

		::System::Void CompositorQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORQUIT_OFFSET))(this);
		}

		::System::Boolean IsFullscreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_ISFULLSCREEN_OFFSET))(this);
		}

		::System::UInt32 GetCurrentSceneFocusProcess()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTSCENEFOCUSPROCESS_OFFSET))(this);
		}

		::System::UInt32 GetLastFrameRenderer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTFRAMERENDERER_OFFSET))(this);
		}

		::System::Boolean CanRenderScene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_CANRENDERSCENE_OFFSET))(this);
		}

		::System::Void ShowMirrorWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SHOWMIRRORWINDOW_OFFSET))(this);
		}

		::System::Void HideMirrorWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_HIDEMIRRORWINDOW_OFFSET))(this);
		}

		::System::Boolean IsMirrorWindowVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_ISMIRRORWINDOWVISIBLE_OFFSET))(this);
		}

		::System::Void CompositorDumpImages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORDUMPIMAGES_OFFSET))(this);
		}

		::System::Boolean ShouldAppRenderWithLowResources()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SHOULDAPPRENDERWITHLOWRESOURCES_OFFSET))(this);
		}

		::System::Void ForceInterleavedReprojectionOn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FORCEINTERLEAVEDREPROJECTIONON_OFFSET))(this, a1);
		}

		::System::Void ForceReconnectProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FORCERECONNECTPROCESS_OFFSET))(this);
		}

		::System::Void SuspendRendering(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUSPENDRENDERING_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError GetMirrorTextureD3D11(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::IntPtr a2, ::System::IntPtr& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETMIRRORTEXTURED3D11_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReleaseMirrorTextureD3D11(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_RELEASEMIRRORTEXTURED3D11_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError GetMirrorTextureGL(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::UInt32& a2, ::System::IntPtr a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::UInt32&, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETMIRRORTEXTUREGL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ReleaseSharedGLTexture(::System::UInt32 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_RELEASESHAREDGLTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void LockGLSharedTextureForAccess(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_LOCKGLSHAREDTEXTUREFORACCESS_OFFSET))(this, a1);
		}

		::System::Void UnlockGLSharedTextureForAccess(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_UNLOCKGLSHAREDTEXTUREFORACCESS_OFFSET))(this, a1);
		}

		::System::UInt32 GetVulkanInstanceExtensionsRequired(::System::Text::StringBuilder* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETVULKANINSTANCEEXTENSIONSREQUIRED_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetVulkanDeviceExtensionsRequired(::System::IntPtr a1, ::System::Text::StringBuilder* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IntPtr, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETVULKANDEVICEEXTENSIONSREQUIRED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetExplicitTimingMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETEXPLICITTIMINGMODE_OFFSET))(this, a1);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError SubmitExplicitTimingData()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUBMITEXPLICITTIMINGDATA_OFFSET))(this);
		}
	};
}
