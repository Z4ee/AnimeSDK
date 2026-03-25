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

#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_CANRENDERSCENE_OFFSET UNITYSDK_OFFSET(0x18CA5340)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_CLEARLASTSUBMITTEDFRAME_OFFSET UNITYSDK_OFFSET(0x18CA50D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_CLEARSKYBOXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18CA5260)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORBRINGTOFRONT_OFFSET UNITYSDK_OFFSET(0x18CA5280)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORDUMPIMAGES_OFFSET UNITYSDK_OFFSET(0x18CA53C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORGOTOBACK_OFFSET UNITYSDK_OFFSET(0x18CA52A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_COMPOSITORQUIT_OFFSET UNITYSDK_OFFSET(0x18CA52C0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FADEGRID_OFFSET UNITYSDK_OFFSET(0x18CA51F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FADETOCOLOR_OFFSET UNITYSDK_OFFSET(0x18CA5190)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FORCEINTERLEAVEDREPROJECTIONON_OFFSET UNITYSDK_OFFSET(0x18CA5400)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FORCERECONNECTPROCESS_OFFSET UNITYSDK_OFFSET(0x18CA5420)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCUMULATIVESTATS_OFFSET UNITYSDK_OFFSET(0x18CA5170)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTFADECOLOR_OFFSET UNITYSDK_OFFSET(0x18CA51B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTGRIDALPHA_OFFSET UNITYSDK_OFFSET(0x18CA5210)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTSCENEFOCUSPROCESS_OFFSET UNITYSDK_OFFSET(0x18CA5300)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMEREMAINING_OFFSET UNITYSDK_OFFSET(0x18CA5150)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMINGS_OFFSET UNITYSDK_OFFSET(0x18CA5130)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMING_OFFSET UNITYSDK_OFFSET(0x18CA5110)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTFRAMERENDERER_OFFSET UNITYSDK_OFFSET(0x18CA5320)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTPOSEFORTRACKEDDEVICEINDEX_OFFSET UNITYSDK_OFFSET(0x18CA5090)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTPOSES_OFFSET UNITYSDK_OFFSET(0x18CA5040)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETMIRRORTEXTURED3D11_OFFSET UNITYSDK_OFFSET(0x18CA5460)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETMIRRORTEXTUREGL_OFFSET UNITYSDK_OFFSET(0x18CA54A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETTRACKINGSPACE_OFFSET UNITYSDK_OFFSET(0x18CA4FD0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETVULKANDEVICEEXTENSIONSREQUIRED_OFFSET UNITYSDK_OFFSET(0x18CA5550)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETVULKANINSTANCEEXTENSIONSREQUIRED_OFFSET UNITYSDK_OFFSET(0x18CA5530)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_HIDEMIRRORWINDOW_OFFSET UNITYSDK_OFFSET(0x18CA5380)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_ISFULLSCREEN_OFFSET UNITYSDK_OFFSET(0x18CA52E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_ISMIRRORWINDOWVISIBLE_OFFSET UNITYSDK_OFFSET(0x18CA53A0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_LOCKGLSHAREDTEXTUREFORACCESS_OFFSET UNITYSDK_OFFSET(0x18CA54F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_POSTPRESENTHANDOFF_OFFSET UNITYSDK_OFFSET(0x18CA50F0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_RELEASEMIRRORTEXTURED3D11_OFFSET UNITYSDK_OFFSET(0x18CA5480)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_RELEASESHAREDGLTEXTURE_OFFSET UNITYSDK_OFFSET(0x18CA54D0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETEXPLICITTIMINGMODE_OFFSET UNITYSDK_OFFSET(0x18CA5570)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETSKYBOXOVERRIDE_OFFSET UNITYSDK_OFFSET(0x18CA5230)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETTRACKINGSPACE_OFFSET UNITYSDK_OFFSET(0x18CA4FB0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SHOULDAPPRENDERWITHLOWRESOURCES_OFFSET UNITYSDK_OFFSET(0x18CA53E0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SHOWMIRRORWINDOW_OFFSET UNITYSDK_OFFSET(0x18CA5360)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUBMITEXPLICITTIMINGDATA_OFFSET UNITYSDK_OFFSET(0x18CA5590)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUBMIT_OFFSET UNITYSDK_OFFSET(0x18CA50B0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUSPENDRENDERING_OFFSET UNITYSDK_OFFSET(0x18CA5440)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_UNLOCKGLSHAREDTEXTUREFORACCESS_OFFSET UNITYSDK_OFFSET(0x18CA5510)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_WAITGETPOSES_OFFSET UNITYSDK_OFFSET(0x18CA4FF0)
#define ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA4EC0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int CVRCompositor_TypeDefinitionIndex = 30243;

	class CVRCompositor : public ::System::Object
	{
	public:
		::ZenFulcrum::VR::OpenVRBinding::IVRCompositor FnTable; // 0x10

		::System::Void _ctor(::System::IntPtr pInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR__CTOR_OFFSET))(this, pInterface);
		}

		::System::Void SetTrackingSpace(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETTRACKINGSPACE_OFFSET))(this, eOrigin);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin GetTrackingSpace()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETTRACKINGSPACE_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError WaitGetPoses(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pRenderPoseArray, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pGamePoseArray)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_WAITGETPOSES_OFFSET))(this, pRenderPoseArray, pGamePoseArray);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError GetLastPoses(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pRenderPoseArray, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pGamePoseArray)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTPOSES_OFFSET))(this, pRenderPoseArray, pGamePoseArray);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError GetLastPoseForTrackedDeviceIndex(::System::UInt32 unDeviceIndex, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputPose, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputGamePose)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETLASTPOSEFORTRACKEDDEVICEINDEX_OFFSET))(this, unDeviceIndex, pOutputPose, pOutputGamePose);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Submit(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::ZenFulcrum::VR::OpenVRBinding::Texture_t& pTexture, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pBounds, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags nSubmitFlags)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUBMIT_OFFSET))(this, eEye, pTexture, pBounds, nSubmitFlags);
		}

		::System::Void ClearLastSubmittedFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_CLEARLASTSUBMITTEDFRAME_OFFSET))(this);
		}

		::System::Void PostPresentHandoff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_POSTPRESENTHANDOFF_OFFSET))(this);
		}

		::System::Boolean GetFrameTiming(::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming& pTiming, ::System::UInt32 unFramesAgo)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMING_OFFSET))(this, pTiming, unFramesAgo);
		}

		::System::UInt32 GetFrameTimings(::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming& pTiming, ::System::UInt32 nFrames)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_FrameTiming&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMINGS_OFFSET))(this, pTiming, nFrames);
		}

		::System::Single GetFrameTimeRemaining()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETFRAMETIMEREMAINING_OFFSET))(this);
		}

		::System::Void GetCumulativeStats(::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats& pStats, ::System::UInt32 nStatsSizeInBytes)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCUMULATIVESTATS_OFFSET))(this, pStats, nStatsSizeInBytes);
		}

		::System::Void FadeToColor(::System::Single fSeconds, ::System::Single fRed, ::System::Single fGreen, ::System::Single fBlue, ::System::Single fAlpha, ::System::Boolean bBackground)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FADETOCOLOR_OFFSET))(this, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdColor_t GetCurrentFadeColor(::System::Boolean bBackground)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdColor_t(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTFADECOLOR_OFFSET))(this, bBackground);
		}

		::System::Void FadeGrid(::System::Single fSeconds, ::System::Boolean bFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FADEGRID_OFFSET))(this, fSeconds, bFadeIn);
		}

		::System::Single GetCurrentGridAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETCURRENTGRIDALPHA_OFFSET))(this);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError SetSkyboxOverride(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>* pTextures)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::Texture_t>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETSKYBOXOVERRIDE_OFFSET))(this, pTextures);
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

		::System::Void ForceInterleavedReprojectionOn(::System::Boolean bOverride)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FORCEINTERLEAVEDREPROJECTIONON_OFFSET))(this, bOverride);
		}

		::System::Void ForceReconnectProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_FORCERECONNECTPROCESS_OFFSET))(this);
		}

		::System::Void SuspendRendering(::System::Boolean bSuspend)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUSPENDRENDERING_OFFSET))(this, bSuspend);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError GetMirrorTextureD3D11(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::IntPtr pD3D11DeviceOrResource, ::System::IntPtr& ppD3D11ShaderResourceView)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETMIRRORTEXTURED3D11_OFFSET))(this, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
		}

		::System::Void ReleaseMirrorTextureD3D11(::System::IntPtr pD3D11ShaderResourceView)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_RELEASEMIRRORTEXTURED3D11_OFFSET))(this, pD3D11ShaderResourceView);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError GetMirrorTextureGL(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::UInt32& pglTextureId, ::System::IntPtr pglSharedTextureHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::UInt32&, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETMIRRORTEXTUREGL_OFFSET))(this, eEye, pglTextureId, pglSharedTextureHandle);
		}

		::System::Boolean ReleaseSharedGLTexture(::System::UInt32 glTextureId, ::System::IntPtr glSharedTextureHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_RELEASESHAREDGLTEXTURE_OFFSET))(this, glTextureId, glSharedTextureHandle);
		}

		::System::Void LockGLSharedTextureForAccess(::System::IntPtr glSharedTextureHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_LOCKGLSHAREDTEXTUREFORACCESS_OFFSET))(this, glSharedTextureHandle);
		}

		::System::Void UnlockGLSharedTextureForAccess(::System::IntPtr glSharedTextureHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_UNLOCKGLSHAREDTEXTUREFORACCESS_OFFSET))(this, glSharedTextureHandle);
		}

		::System::UInt32 GetVulkanInstanceExtensionsRequired(::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETVULKANINSTANCEEXTENSIONSREQUIRED_OFFSET))(this, pchValue, unBufferSize);
		}

		::System::UInt32 GetVulkanDeviceExtensionsRequired(::System::IntPtr pPhysicalDevice, ::System::Text::StringBuilder* pchValue, ::System::UInt32 unBufferSize)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IntPtr, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_GETVULKANDEVICEEXTENSIONSREQUIRED_OFFSET))(this, pPhysicalDevice, pchValue, unBufferSize);
		}

		::System::Void SetExplicitTimingMode(::System::Boolean bExplicitTimingMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SETEXPLICITTIMINGMODE_OFFSET))(this, bExplicitTimingMode);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError SubmitExplicitTimingData()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_CVRCOMPOSITOR_SUBMITEXPLICITTIMINGDATA_OFFSET))(this);
		}
	};
}
