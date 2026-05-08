#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define SYSTEM_THREADING_TIMEOUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EE0980)

namespace System::Threading
{
	inline static constexpr unsigned int Timeout_TypeDefinitionIndex = 855;

	class Timeout : public ::System::Object
	{
	public:
		static ::System::TimeSpan* StaticGet_InfiniteTimeSpan()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Timeout_TypeDefinitionIndex)->GetStaticField(0x200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TIMEOUT__CCTOR_OFFSET))();
		}
	};
}
