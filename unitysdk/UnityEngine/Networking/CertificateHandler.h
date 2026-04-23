#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5B83B0)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1A5B8380)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_VALIDATECERTIFICATENATIVE_OFFSET UNITYSDK_OFFSET(0x1A5B83A0)
#define UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_VALIDATECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1A5B8390)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int CertificateHandler_TypeDefinitionIndex = 5282;

	class CertificateHandler : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_CERTIFICATEHANDLER_RELEASE_OFFSET))(this);
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
