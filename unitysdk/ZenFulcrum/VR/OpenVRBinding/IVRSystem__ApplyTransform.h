#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CDE4E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CDE590)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CDE140)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDE120)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__ApplyTransform_TypeDefinitionIndex = 29949;

	class IVRSystem__ApplyTransform : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputPose, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pTransform)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_INVOKE_OFFSET))(this, pOutputPose, pTrackedDevicePose, pTransform);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputPose, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pTransform, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_BEGININVOKE_OFFSET))(this, pOutputPose, pTrackedDevicePose, pTransform, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pOutputPose, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& pTrackedDevicePose, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& pTransform, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_ENDINVOKE_OFFSET))(this, pOutputPose, pTrackedDevicePose, pTransform, result);
		}
	};
}
