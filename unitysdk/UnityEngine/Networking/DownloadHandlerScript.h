#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Networking/DownloadHandler.h"

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_CREATE_OFFSET UNITYSDK_OFFSET(0x1E413A50)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_INTERNALCREATESCRIPT_OFFSET UNITYSDK_OFFSET(0x1E413A60)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E413A80)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerScript_TypeDefinitionIndex = 6712;

	class DownloadHandlerScript : public ::UnityEngine::Networking::DownloadHandler
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerScript* obj)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Networking::DownloadHandlerScript*))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_CREATE_OFFSET))(obj);
		}

		::System::Void InternalCreateScript()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_INTERNALCREATESCRIPT_OFFSET))(this);
		}
	};
}
