#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/DistortionCoordinates_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CDECE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CDEDB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CDE910)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CDE8F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__ComputeDistortion_TypeDefinitionIndex = 29935;

	class IVRSystem__ComputeDistortion : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::Single fU, ::System::Single fV, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t& pDistortionCoordinates)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_INVOKE_OFFSET))(this, eEye, fU, fV, pDistortionCoordinates);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::Single fU, ::System::Single fV, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t& pDistortionCoordinates, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_BEGININVOKE_OFFSET))(this, eEye, fU, fV, pDistortionCoordinates, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t& pDistortionCoordinates, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::DistortionCoordinates_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__COMPUTEDISTORTION_ENDINVOKE_OFFSET))(this, pDistortionCoordinates, result);
		}
	};
}
