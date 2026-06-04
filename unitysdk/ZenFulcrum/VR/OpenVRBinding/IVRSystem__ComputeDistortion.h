#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/DistortionCoordinates_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B524990)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B524A60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B524960)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5248F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__ComputeDistortion_TypeDefinitionIndex = 35955;

	class IVRSystem__ComputeDistortion : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::Single a2, ::System::Single a3, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::Single a2, ::System::Single a3, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t& a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
