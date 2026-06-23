#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TextMeshProUGUI; }

#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E7AEA80)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7AEAF0)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E7AEB50)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E7AEB00)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7AEA70)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AEA60)

namespace TMPro
{
	inline static constexpr unsigned int TextMeshProUGUI__DelayedGraphicRebuild_d__89_TypeDefinitionIndex = 39251;

	class TextMeshProUGUI__DelayedGraphicRebuild_d__89 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::TMPro::TextMeshProUGUI* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
