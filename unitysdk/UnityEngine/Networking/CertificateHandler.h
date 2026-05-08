#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1C0E9000)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C0E90C0)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C0E9040)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C0E9010)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_VALIDATECERTIFICATENATIVE_OFFSET UNITYSDK_OFFSET(0x1C0E9100)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1C0E90F0)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E9020)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int CertificateHandler_TypeDefinitionIndex = 6626;

	class CertificateHandler : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr Create(::UnityEngine::Networking::CertificateHandler* obj)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Networking::CertificateHandler*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_CREATE_OFFSET))(obj);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_RELEASE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_FINALIZE_OFFSET))(this);
		}

		::System::Boolean ValidateCertificate(::Il2CppArray<::System::Byte>* certificateData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_VALIDATECERTIFICATE_OFFSET))(this, certificateData);
		}

		::System::Boolean ValidateCertificateNative(::Il2CppArray<::System::Byte>* certificateData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_VALIDATECERTIFICATENATIVE_OFFSET))(this, certificateData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_DISPOSE_OFFSET))(this);
		}
	};
}
