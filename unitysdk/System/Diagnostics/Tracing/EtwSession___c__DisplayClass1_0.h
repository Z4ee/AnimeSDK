#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class WeakReference_1; }
namespace System::Diagnostics::Tracing { class EtwSession; }

#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5A510)
#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__DISPLAYCLASS1_0__REMOVEETWSESSION_B__0_OFFSET UNITYSDK_OFFSET(0x1AB5A690)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EtwSession___c__DisplayClass1_0_TypeDefinitionIndex = 1701;

	class EtwSession___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Diagnostics::Tracing::EtwSession* etwSession; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveEtwSession_b__0(::System::WeakReference_1<::System::Diagnostics::Tracing::EtwSession*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::WeakReference_1<::System::Diagnostics::Tracing::EtwSession*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__DISPLAYCLASS1_0__REMOVEETWSESSION_B__0_OFFSET))(this, a1);
		}
	};
}
