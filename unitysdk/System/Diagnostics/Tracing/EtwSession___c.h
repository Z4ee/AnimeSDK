#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Diagnostics::Tracing { class EtwSession; }

#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCCEE00)
#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCEE40)
#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__TRIMGLOBALLIST_B__2_0_OFFSET UNITYSDK_OFFSET(0x1BCCEE50)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EtwSession___c_TypeDefinitionIndex = 1702;

	class EtwSession___c : public ::System::Object
	{
	public:
		static ::System::Diagnostics::Tracing::EtwSession___c** StaticGet___9()
		{
			return (::System::Diagnostics::Tracing::EtwSession___c**)Il2CppClass::FromTypeDefinitionIndex(EtwSession___c_TypeDefinitionIndex)->GetStaticField(0xBAE0);
		}
		static ::System::Predicate_1<::System::WeakReference_1<::System::Diagnostics::Tracing::EtwSession*>*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::System::WeakReference_1<::System::Diagnostics::Tracing::EtwSession*>*>**)Il2CppClass::FromTypeDefinitionIndex(EtwSession___c_TypeDefinitionIndex)->GetStaticField(0xBAE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TrimGlobalList_b__2_0(::System::WeakReference_1<::System::Diagnostics::Tracing::EtwSession*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::WeakReference_1<::System::Diagnostics::Tracing::EtwSession*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION___C__TRIMGLOBALLIST_B__2_0_OFFSET))(this, a1);
		}
	};
}
