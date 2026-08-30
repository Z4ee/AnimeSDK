#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_BOOTCONFIGDATA_WRAPBOOTCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1ED0C550)
#define UNITYENGINE_BOOTCONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED0C5F0)

namespace UnityEngine
{
	inline static constexpr unsigned int BootConfigData_TypeDefinitionIndex = 4035;

	class BootConfigData : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_BOOTCONFIGDATA__CTOR_OFFSET))(this, a1);
		}

		static ::UnityEngine::BootConfigData* WrapBootConfigData(::System::IntPtr a1)
		{
			return ((::UnityEngine::BootConfigData*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_BOOTCONFIGDATA_WRAPBOOTCONFIGDATA_OFFSET))(a1);
		}
	};
}
