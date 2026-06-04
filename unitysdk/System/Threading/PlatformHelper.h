#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_PLATFORMHELPER_GET_ISSINGLEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1861BC60)
#define SYSTEM_THREADING_PLATFORMHELPER_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x18618C80)

namespace System::Threading
{
	inline static constexpr unsigned int PlatformHelper_TypeDefinitionIndex = 811;

	class PlatformHelper : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_lastProcessorCountRefreshTicks()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlatformHelper_TypeDefinitionIndex)->GetStaticField(0x53C0);
		}
		static ::System::Int32* StaticGet_s_processorCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlatformHelper_TypeDefinitionIndex)->GetStaticField(0x53C4);
		}

		static ::System::Int32 get_ProcessorCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PLATFORMHELPER_GET_PROCESSORCOUNT_OFFSET))();
		}

		static ::System::Boolean get_IsSingleProcessor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PLATFORMHELPER_GET_ISSINGLEPROCESSOR_OFFSET))();
		}
	};
}
