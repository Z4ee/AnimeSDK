#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics::Tracing { class ActivityFilter; }

#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION_GETETWSESSION_OFFSET UNITYSDK_OFFSET(0x178E6500)
#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION_REMOVEETWSESSION_OFFSET UNITYSDK_OFFSET(0x178E6A00)
#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION_TRIMGLOBALLIST_OFFSET UNITYSDK_OFFSET(0x178E6870)
#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x178E6B80)
#define SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x178E6860)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EtwSession_TypeDefinitionIndex = 1691;

	class EtwSession : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference_1<::System::Diagnostics::Tracing::EtwSession*>*>** StaticGet_s_etwSessions()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference_1<::System::Diagnostics::Tracing::EtwSession*>*>**)Il2CppClass::FromTypeDefinitionIndex(EtwSession_TypeDefinitionIndex)->GetStaticField(0x5D60);
		}
		::System::Diagnostics::Tracing::ActivityFilter* m_activityFilter; // 0x10
		::System::Int32 m_etwSessionId; // 0x18

		::System::Void _ctor(::System::Int32 etwSessionId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION__CTOR_OFFSET))(this, etwSessionId);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION__CCTOR_OFFSET))();
		}

		static ::System::Diagnostics::Tracing::EtwSession* GetEtwSession(::System::Int32 etwSessionId, ::System::Boolean bCreateIfNeeded)
		{
			return ((::System::Diagnostics::Tracing::EtwSession*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION_GETETWSESSION_OFFSET))(etwSessionId, bCreateIfNeeded);
		}

		static ::System::Void RemoveEtwSession(::System::Diagnostics::Tracing::EtwSession* etwSession)
		{
			return ((::System::Void(*)(::System::Diagnostics::Tracing::EtwSession*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION_REMOVEETWSESSION_OFFSET))(etwSession);
		}

		static ::System::Void TrimGlobalList()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_ETWSESSION_TRIMGLOBALLIST_OFFSET))();
		}
	};
}
