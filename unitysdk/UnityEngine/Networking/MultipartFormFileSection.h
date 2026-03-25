#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x18B7D410)
#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x18B7D400)
#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_SECTIONDATA_OFFSET UNITYSDK_OFFSET(0x18B7D3F0)
#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_SECTIONNAME_OFFSET UNITYSDK_OFFSET(0x18B7D3E0)
#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_INIT_OFFSET UNITYSDK_OFFSET(0x18B7D300)
#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7D320)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int MultipartFormFileSection_TypeDefinitionIndex = 5266;

	class MultipartFormFileSection : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::Byte>* data; // 0x18
		::System::String* file; // 0x20
		::System::String* content; // 0x28

		::System::Void _ctor(::System::String* name, ::Il2CppArray<::System::Byte>* data, ::System::String* fileName, ::System::String* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION__CTOR_OFFSET))(this, name, data, fileName, contentType);
		}

		::System::Void Init(::System::String* name, ::Il2CppArray<::System::Byte>* data, ::System::String* fileName, ::System::String* contentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_INIT_OFFSET))(this, name, data, fileName, contentType);
		}

		::System::String* get_sectionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_SECTIONNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_sectionData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_SECTIONDATA_OFFSET))(this);
		}

		::System::String* get_fileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_FILENAME_OFFSET))(this);
		}

		::System::String* get_contentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_CONTENTTYPE_OFFSET))(this);
		}
	};
}
