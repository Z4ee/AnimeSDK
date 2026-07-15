#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Networking/UploadHandler.h"

#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_CREATE_OFFSET UNITYSDK_OFFSET(0x1D27B590)
#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D27B5B0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_INTERNALGETDATA_OFFSET UNITYSDK_OFFSET(0x1D27B5A0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27A230)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UploadHandlerRaw_TypeDefinitionIndex = 5368;

	class UploadHandlerRaw : public ::UnityEngine::Networking::UploadHandler
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLERRAW__CTOR_OFFSET))(this, a1);
		}

		static ::System::IntPtr Create(::UnityEngine::Networking::UploadHandlerRaw* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Networking::UploadHandlerRaw*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_CREATE_OFFSET))(a1, a2);
		}

		::Il2CppArray<::System::Byte>* InternalGetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_INTERNALGETDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_GETDATA_OFFSET))(this);
		}
	};
}
