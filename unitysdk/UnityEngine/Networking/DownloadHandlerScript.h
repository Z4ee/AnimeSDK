#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Networking/DownloadHandler.h"

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_CREATE_OFFSET UNITYSDK_OFFSET(0x1F83DF80)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_INTERNALCREATESCRIPT_OFFSET UNITYSDK_OFFSET(0x1F83DF90)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F83DFB0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerScript_TypeDefinitionIndex = 6716;

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
