#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"
#include "unitysdk/System/Guid.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_DEBUGFACILITYMESSAGE1_OFFSET UNITYSDK_OFFSET(0x19197CE0)
#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_DEBUGFACILITYMESSAGE_OFFSET UNITYSDK_OFFSET(0x19197710)
#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_GET_DEBUG_OFFSET UNITYSDK_OFFSET(0x191976E0)
#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_SETACTIVITYID_OFFSET UNITYSDK_OFFSET(0x191A6850)
#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x191C1470)
#define SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x191C1430)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TplEtwProvider_TypeDefinitionIndex = 1669;

	class TplEtwProvider : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Diagnostics::Tracing::TplEtwProvider** StaticGet_Log()
		{
			return (::System::Diagnostics::Tracing::TplEtwProvider**)Il2CppClass::FromTypeDefinitionIndex(TplEtwProvider_TypeDefinitionIndex)->GetStaticField(0x53B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER__CCTOR_OFFSET))();
		}

		::System::Boolean get_Debug()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_GET_DEBUG_OFFSET))(this);
		}

		::System::Void DebugFacilityMessage(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_DEBUGFACILITYMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void DebugFacilityMessage1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_DEBUGFACILITYMESSAGE1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetActivityId(::System::Guid a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TPLETWPROVIDER_SETACTIVITYID_OFFSET))(this, a1);
		}
	};
}
