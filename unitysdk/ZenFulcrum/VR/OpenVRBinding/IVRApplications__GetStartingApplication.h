#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA940)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA9A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C9D4B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAA920)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetStartingApplication_TypeDefinitionIndex = 30019;

	class IVRApplications__GetStartingApplication : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::String* pchAppKeyBuffer, ::System::UInt32 unAppKeyBufferLen)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_INVOKE_OFFSET))(this, pchAppKeyBuffer, unAppKeyBufferLen);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchAppKeyBuffer, ::System::UInt32 unAppKeyBufferLen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_BEGININVOKE_OFFSET))(this, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETSTARTINGAPPLICATION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
