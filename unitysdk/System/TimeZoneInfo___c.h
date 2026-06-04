#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class TimeZoneInfo_AdjustmentRule; }
namespace System { template <typename T> class Comparison_1; }

#define SYSTEM_TIMEZONEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1864BC60)
#define SYSTEM_TIMEZONEINFO___C__CREATELOCALUNITY_B__19_0_OFFSET UNITYSDK_OFFSET(0x1864BCB0)
#define SYSTEM_TIMEZONEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1864BCA0)

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo___c_TypeDefinitionIndex = 346;

	class TimeZoneInfo___c : public ::System::Object
	{
	public:
		static ::System::TimeZoneInfo___c** StaticGet___9()
		{
			return (::System::TimeZoneInfo___c**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo___c_TypeDefinitionIndex)->GetStaticField(0x12C20);
		}
		static ::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>**)Il2CppClass::FromTypeDefinitionIndex(TimeZoneInfo___c_TypeDefinitionIndex)->GetStaticField(0x12C28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateLocalUnity_b__19_0(::System::TimeZoneInfo_AdjustmentRule* a1, ::System::TimeZoneInfo_AdjustmentRule* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::TimeZoneInfo_AdjustmentRule*, ::System::TimeZoneInfo_AdjustmentRule*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO___C__CREATELOCALUNITY_B__19_0_OFFSET))(this, a1, a2);
		}
	};
}
