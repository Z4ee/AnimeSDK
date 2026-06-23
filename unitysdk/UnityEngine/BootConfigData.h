#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_BOOTCONFIGDATA_WRAPBOOTCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1D41A950)
#define UNITYENGINE_BOOTCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41A9F0)

namespace UnityEngine
{
	inline static constexpr unsigned int BootConfigData_TypeDefinitionIndex = 5133;

	class BootConfigData : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::IntPtr nativeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_BOOTCONFIGDATA__CTOR_OFFSET))(this, nativeHandle);
		}

		static ::UnityEngine::BootConfigData* WrapBootConfigData(::System::IntPtr nativeHandle)
		{
			return ((::UnityEngine::BootConfigData*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_BOOTCONFIGDATA_WRAPBOOTCONFIGDATA_OFFSET))(nativeHandle);
		}
	};
}
