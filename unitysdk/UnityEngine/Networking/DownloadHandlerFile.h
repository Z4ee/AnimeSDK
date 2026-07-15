#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Networking/DownloadHandler.h"

namespace System { class String; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_CREATE_OFFSET UNITYSDK_OFFSET(0x1D275AC0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D275C30)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1D275C80)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_INTERNALCREATEVFS_OFFSET UNITYSDK_OFFSET(0x1D275AD0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D275B80)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerFile_TypeDefinitionIndex = 5366;

	class DownloadHandlerFile : public ::UnityEngine::Networking::DownloadHandler
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE__CTOR_OFFSET))(this, a1);
		}

		static ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerFile* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Networking::DownloadHandlerFile*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void InternalCreateVFS(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_INTERNALCREATEVFS_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Byte>* GetData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETDATA_OFFSET))(this);
		}

		::System::String* GetText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETTEXT_OFFSET))(this);
		}
	};
}
