#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SYSTEMCLOCK_GET_NOW_OFFSET UNITYSDK_OFFSET(0x1A48A210)
#define UNITYENGINE_SYSTEMCLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A48A2A0)

namespace UnityEngine
{
	inline static constexpr unsigned int SystemClock_TypeDefinitionIndex = 4202;

	class SystemClock : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_s_Epoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(SystemClock_TypeDefinitionIndex)->GetStaticField(0x5F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMCLOCK__CCTOR_OFFSET))();
		}

		static ::System::DateTime get_now()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMCLOCK_GET_NOW_OFFSET))();
		}
	};
}
