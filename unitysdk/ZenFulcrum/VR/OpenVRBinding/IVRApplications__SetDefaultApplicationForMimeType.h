#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6600)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6640)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6D6D50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E65E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__SetDefaultApplicationForMimeType_TypeDefinitionIndex = 35734;

	class IVRApplications__SetDefaultApplicationForMimeType : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* pchAppKey, ::System::String* pchMimeType)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_INVOKE_OFFSET))(this, pchAppKey, pchMimeType);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::System::String* pchMimeType, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_BEGININVOKE_OFFSET))(this, pchAppKey, pchMimeType, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__SETDEFAULTAPPLICATIONFORMIMETYPE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
