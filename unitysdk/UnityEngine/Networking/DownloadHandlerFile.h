#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Networking/DownloadHandler.h"

namespace System { class String; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A5B8960)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A5B8AD0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_GETTEXT_OFFSET UNITYSDK_OFFSET(0x1A5B8B20)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_INTERNALCREATEVFS_OFFSET UNITYSDK_OFFSET(0x1A5B8970)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B8A20)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerFile_TypeDefinitionIndex = 5285;

	class DownloadHandlerFile : public ::UnityEngine::Networking::DownloadHandler
	{
	public:
		::System::Void _ctor(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE__CTOR_OFFSET))(this, path);
		}

		static ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerFile* obj, ::System::String* path, ::System::Boolean append)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Networking::DownloadHandlerFile*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_CREATE_OFFSET))(obj, path, append);
		}

		::System::Void InternalCreateVFS(::System::String* path, ::System::Boolean append)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERFILE_INTERNALCREATEVFS_OFFSET))(this, path, append);
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
