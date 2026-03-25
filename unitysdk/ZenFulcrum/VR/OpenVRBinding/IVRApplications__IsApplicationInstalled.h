#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAAB20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAAB50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C96030)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAAB00)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__IsApplicationInstalled_TypeDefinitionIndex = 29997;

	class IVRApplications__IsApplicationInstalled : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* pchAppKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_INVOKE_OFFSET))(this, pchAppKey);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKey, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_BEGININVOKE_OFFSET))(this, pchAppKey, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__ISAPPLICATIONINSTALLED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
