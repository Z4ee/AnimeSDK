#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SYSTEMCLOCK_GET_NOW_OFFSET UNITYSDK_OFFSET(0x1B4DF130)
#define UNITYENGINE_SYSTEMCLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4DF150)
#define UNITYENGINE_SYSTEMCLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4DF140)

namespace UnityEngine
{
	inline static constexpr unsigned int SystemClock_TypeDefinitionIndex = 5400;

	class SystemClock : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_s_Epoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(SystemClock_TypeDefinitionIndex)->GetStaticField(0x2CB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SYSTEMCLOCK__CTOR_OFFSET))(this);
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
