#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_NETWORKING_UPLOADHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4055E0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B409600)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B409690)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1B409680)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_INTERNALSETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B4096B0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B4095E0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_SETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B4096A0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B409180)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4095F0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UploadHandler_TypeDefinitionIndex = 5362;

	class UploadHandler : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_RELEASE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_GET_DATA_OFFSET))(this);
		}

		::System::Void set_contentType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* GetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_GETDATA_OFFSET))(this);
		}

		::System::Void SetContentType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_SETCONTENTTYPE_OFFSET))(this, a1);
		}

		::System::Void InternalSetContentType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_INTERNALSETCONTENTTYPE_OFFSET))(this, a1);
		}
	};
}
