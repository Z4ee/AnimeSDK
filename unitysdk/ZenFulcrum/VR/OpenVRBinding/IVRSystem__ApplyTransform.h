#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/TrackedDevicePose_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B524730)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5247E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B524710)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B524690)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__ApplyTransform_TypeDefinitionIndex = 35969;

	class IVRSystem__ApplyTransform : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a1, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a2, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a1, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a2, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a1, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t& a2, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t& a3, ::System::IAsyncResult* a4)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::TrackedDevicePose_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__APPLYTRANSFORM_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
