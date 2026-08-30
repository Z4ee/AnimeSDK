#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SYSTEMCLOCK_GET_NOW_OFFSET UNITYSDK_OFFSET(0x1EE09A40)
#define UNITYENGINE_SYSTEMCLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE09AD0)

namespace UnityEngine
{
	inline static constexpr unsigned int SystemClock_TypeDefinitionIndex = 4391;

	class SystemClock : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_s_Epoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(SystemClock_TypeDefinitionIndex)->GetStaticField(0x8A30);
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
