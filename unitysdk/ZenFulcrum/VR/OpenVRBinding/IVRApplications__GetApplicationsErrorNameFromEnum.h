#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSERRORNAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA5C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSERRORNAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA630)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSERRORNAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C99640)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSERRORNAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAA5A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationsErrorNameFromEnum_TypeDefinitionIndex = 30008;

	class IVRApplications__GetApplicationsErrorNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSERRORNAMEFROMENUM__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError error)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSERRORNAMEFROMENUM_INVOKE_OFFSET))(this, error);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError error, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSERRORNAMEFROMENUM_BEGININVOKE_OFFSET))(this, error, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSERRORNAMEFROMENUM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
