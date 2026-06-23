#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Networking/UploadHandler.h"

#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_CREATE_OFFSET UNITYSDK_OFFSET(0x1E418360)
#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E418380)
#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_INTERNALGETDATA_OFFSET UNITYSDK_OFFSET(0x1E418370)
#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E415A60)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UploadHandlerRaw_TypeDefinitionIndex = 6714;

	class UploadHandlerRaw : public ::UnityEngine::Networking::UploadHandler
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLERRAW__CTOR_OFFSET))(this, data);
		}

		static ::System::IntPtr Create(::UnityEngine::Networking::UploadHandlerRaw* self, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Networking::UploadHandlerRaw*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_CREATE_OFFSET))(self, data);
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
