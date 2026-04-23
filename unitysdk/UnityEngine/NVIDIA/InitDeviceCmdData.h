#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_NVIDIA_INITDEVICECMDDATA_SET_APPDIR_OFFSET UNITYSDK_OFFSET(0xAF80)
#define UNITYENGINE_NVIDIA_INITDEVICECMDDATA_SET_ENGINEVERSION_OFFSET UNITYSDK_OFFSET(0x8D10)
#define UNITYENGINE_NVIDIA_INITDEVICECMDDATA_SET_PROJECTID_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int InitDeviceCmdData_TypeDefinitionIndex = 5174;

	struct alignas(8) InitDeviceCmdData
	{
		::System::IntPtr m_ProjectId; // 0x10
		::System::IntPtr m_EngineVersion; // 0x18
		::System::IntPtr m_AppDir; // 0x20

		::System::Void set_projectId(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_INITDEVICECMDDATA_SET_PROJECTID_OFFSET))(this, value);
		}

		::System::Void set_engineVersion(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_INITDEVICECMDDATA_SET_ENGINEVERSION_OFFSET))(this, value);
		}

		::System::Void set_appDir(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_INITDEVICECMDDATA_SET_APPDIR_OFFSET))(this, value);
		}
	};
}
