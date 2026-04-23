#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__WAITGETPOSES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F22F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__WAITGETPOSES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F2380)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__WAITGETPOSES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F1F70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__WAITGETPOSES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F1F50)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__WaitGetPoses_TypeDefinitionIndex = 35779;

	class IVRCompositor__WaitGetPoses : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__WAITGETPOSES__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pRenderPoseArray, ::System::UInt32 unRenderPoseArrayCount, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pGamePoseArray, ::System::UInt32 unGamePoseArrayCount)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::System::UInt32, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__WAITGETPOSES_INVOKE_OFFSET))(this, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pRenderPoseArray, ::System::UInt32 unRenderPoseArrayCount, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>* pGamePoseArray, ::System::UInt32 unGamePoseArrayCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::System::UInt32, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__WAITGETPOSES_BEGININVOKE_OFFSET))(this, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__WAITGETPOSES_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
