#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTHATSUPPORTMIMETYPE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E5BD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTHATSUPPORTMIMETYPE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E5C40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTHATSUPPORTMIMETYPE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6D7FF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTHATSUPPORTMIMETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E5BB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationsThatSupportMimeType_TypeDefinitionIndex = 35737;

	class IVRApplications__GetApplicationsThatSupportMimeType : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTHATSUPPORTMIMETYPE__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::String* pchMimeType, ::System::String* pchAppKeysThatSupportBuffer, ::System::UInt32 unAppKeysThatSupportBuffer)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTHATSUPPORTMIMETYPE_INVOKE_OFFSET))(this, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchMimeType, ::System::String* pchAppKeysThatSupportBuffer, ::System::UInt32 unAppKeysThatSupportBuffer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTHATSUPPORTMIMETYPE_BEGININVOKE_OFFSET))(this, pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONSTHATSUPPORTMIMETYPE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
