#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TextMeshProUGUI; }

#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ECB1720)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ECB17A0)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ECB1800)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ECB17B0)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ECB1710)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECAE830)

namespace TMPro
{
	inline static constexpr unsigned int TextMeshProUGUI__DelayedMaterialRebuild_d__90_TypeDefinitionIndex = 43502;

	class TextMeshProUGUI__DelayedMaterialRebuild_d__90 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::TMPro::TextMeshProUGUI* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDMATERIALREBUILD_D__90_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
