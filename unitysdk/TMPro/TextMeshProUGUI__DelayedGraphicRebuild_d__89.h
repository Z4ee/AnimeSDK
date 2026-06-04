#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class TextMeshProUGUI; }

#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B229B90)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B229C00)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B229C60)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B229C10)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B229B80)
#define TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89__CTOR_OFFSET UNITYSDK_OFFSET(0x1B226E70)

namespace TMPro
{
	inline static constexpr unsigned int TextMeshProUGUI__DelayedGraphicRebuild_d__89_TypeDefinitionIndex = 41075;

	class TextMeshProUGUI__DelayedGraphicRebuild_d__89 : public ::System::Object
	{
	public:
		::TMPro::TextMeshProUGUI* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__DELAYEDGRAPHICREBUILD_D__89__CTOR_OFFSET))(this, a1);
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
