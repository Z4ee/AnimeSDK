#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRApplicationError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONKEYBYPROCESSID_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CA9FE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONKEYBYPROCESSID_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAA060)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONKEYBYPROCESSID_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C96C30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONKEYBYPROCESSID__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA9FC0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRApplications__GetApplicationKeyByProcessId_TypeDefinitionIndex = 30000;

	class IVRApplications__GetApplicationKeyByProcessId : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONKEYBYPROCESSID__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError Invoke(::System::UInt32 unProcessId, ::System::String* pchAppKeyBuffer, ::System::UInt32 unAppKeyBufferLen)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONKEYBYPROCESSID_INVOKE_OFFSET))(this, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unProcessId, ::System::String* pchAppKeyBuffer, ::System::UInt32 unAppKeyBufferLen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONKEYBYPROCESSID_BEGININVOKE_OFFSET))(this, unProcessId, pchAppKeyBuffer, unAppKeyBufferLen, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRApplicationError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRAPPLICATIONS__GETAPPLICATIONKEYBYPROCESSID_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
