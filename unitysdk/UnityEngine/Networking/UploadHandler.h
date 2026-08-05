#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_NETWORKING_UPLOADHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F83E8E0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F8427D0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F842860)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1F842850)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_INTERNALSETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1F842880)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1F8427B0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_SETCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1F842870)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1F83FFF0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8427C0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UploadHandler_TypeDefinitionIndex = 6717;

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

		::System::Void set_contentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* GetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_GETDATA_OFFSET))(this);
		}

		::System::Void SetContentType(::System::String* newContentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_SETCONTENTTYPE_OFFSET))(this, newContentType);
		}

		::System::Void InternalSetContentType(::System::String* newContentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLER_INTERNALSETCONTENTTYPE_OFFSET))(this, newContentType);
		}
	};
}
