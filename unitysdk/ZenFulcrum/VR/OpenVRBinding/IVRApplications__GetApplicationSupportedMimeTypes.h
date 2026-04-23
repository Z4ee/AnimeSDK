#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSUPPORTEDMIMETYPES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E5A50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSUPPORTEDMIMETYPES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E5AC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSUPPORTEDMIMETYPES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6D7990)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSUPPORTEDMIMETYPES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E5A30)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationSupportedMimeTypes_TypeDefinitionIndex = 35736;

	class IVRApplications__GetApplicationSupportedMimeTypes : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSUPPORTEDMIMETYPES__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* pchAppKey, ::System::String* pchMimeTypesBuffer, ::System::UInt32 unMimeTypesBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSUPPORTEDMIMETYPES_INVOKE_OFFSET))(this, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::System::String* pchMimeTypesBuffer, ::System::UInt32 unMimeTypesBuffer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSUPPORTEDMIMETYPES_BEGININVOKE_OFFSET))(this, pchAppKey, pchMimeTypesBuffer, unMimeTypesBuffer, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSUPPORTEDMIMETYPES_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
