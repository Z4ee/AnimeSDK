#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_TIMEPROVIDER_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1F014C10)
#define SYSTEM_TIMEPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F014C80)
#define SYSTEM_TIMEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F014C70)

namespace System
{
	inline static constexpr unsigned int TimeProvider_TypeDefinitionIndex = 10160;

	class TimeProvider : public ::System::Object
	{
	public:
		static ::System::TimeProvider** StaticGet__System_k__BackingField()
		{
			return (::System::TimeProvider**)Il2CppClass::FromTypeDefinitionIndex(TimeProvider_TypeDefinitionIndex)->GetStaticField(0x7E0);
		}
		static ::System::Int64* StaticGet_s_maxDateTicks()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(TimeProvider_TypeDefinitionIndex)->GetStaticField(0x4A0);
		}
		static ::System::Int64* StaticGet_s_minDateTicks()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(TimeProvider_TypeDefinitionIndex)->GetStaticField(0x4A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEPROVIDER__CCTOR_OFFSET))();
		}

		static ::System::TimeProvider* get_System()
		{
			return ((::System::TimeProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEPROVIDER_GET_SYSTEM_OFFSET))();
		}
	};
}
