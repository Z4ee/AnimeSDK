#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1EF67180)
#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1EF67170)
#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_SECTIONDATA_OFFSET UNITYSDK_OFFSET(0x1EF67160)
#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_GET_SECTIONNAME_OFFSET UNITYSDK_OFFSET(0x1EF67150)
#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_INIT_OFFSET UNITYSDK_OFFSET(0x1EF67070)
#define UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF67090)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int MultipartFormFileSection_TypeDefinitionIndex = 5347;

	class MultipartFormFileSection : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::Il2CppArray<::System::Byte>* data; // 0x18
		::System::String* file; // 0x20
		::System::String* content; // 0x28

		::System::Void _ctor(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Init(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_MULTIPARTFORMFILESECTION_INIT_OFFSET))(this, a1, a2, a3, a4);
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
