#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Networking/DownloadHandler.h"

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E4139E0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E413A30)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_INTERNALCREATEBUFFER_OFFSET UNITYSDK_OFFSET(0x1E4139F0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_INTERNALGETDATA_OFFSET UNITYSDK_OFFSET(0x1E413A40)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E413A10)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerBuffer_TypeDefinitionIndex = 6711;

	class DownloadHandlerBuffer : public ::UnityEngine::Networking::DownloadHandler
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerBuffer* obj)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Networking::DownloadHandlerBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_CREATE_OFFSET))(obj);
		}

		::System::Void InternalCreateBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_INTERNALCREATEBUFFER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_GETDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* InternalGetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_INTERNALGETDATA_OFFSET))(this);
		}
	};
}
