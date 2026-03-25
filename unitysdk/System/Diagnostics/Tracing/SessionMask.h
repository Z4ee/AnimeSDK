#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_FROMEVENTKEYWORDS_OFFSET UNITYSDK_OFFSET(0x162BDF80)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_FROMID_OFFSET UNITYSDK_OFFSET(0x162CD670)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_GET_ALL_OFFSET UNITYSDK_OFFSET(0x162BE0A0)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1517B50)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_ISEQUALORSUPERSETOF_OFFSET UNITYSDK_OFFSET(0x20D5B80)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x162DC390)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x162C5A20)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x20D5BA0)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_TOEVENTKEYWORDS_OFFSET UNITYSDK_OFFSET(0x20D5B90)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x20D5B70)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int SessionMask_TypeDefinitionIndex = 1693;

	struct alignas(4) SessionMask
	{
		::System::UInt32 m_mask; // 0x10

		::System::Void _ctor(::System::UInt32 mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK__CTOR_OFFSET))(this, mask);
		}

		::System::Boolean IsEqualOrSupersetOf(::System::Diagnostics::Tracing::SessionMask m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_ISEQUALORSUPERSETOF_OFFSET))(this, m);
		}

		static ::System::Diagnostics::Tracing::SessionMask get_All()
		{
			return ((::System::Diagnostics::Tracing::SessionMask(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_GET_ALL_OFFSET))();
		}

		static ::System::Diagnostics::Tracing::SessionMask FromId(::System::Int32 perEventSourceSessionId)
		{
			return ((::System::Diagnostics::Tracing::SessionMask(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_FROMID_OFFSET))(perEventSourceSessionId);
		}

		::System::UInt64 ToEventKeywords()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_TOEVENTKEYWORDS_OFFSET))(this);
		}

		static ::System::Diagnostics::Tracing::SessionMask FromEventKeywords(::System::UInt64 m)
		{
			return ((::System::Diagnostics::Tracing::SessionMask(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_FROMEVENTKEYWORDS_OFFSET))(m);
		}

		::System::Boolean get_Item(::System::Int32 perEventSourceSessionId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_GET_ITEM_OFFSET))(this, perEventSourceSessionId);
		}

		::System::Void set_Item(::System::Int32 perEventSourceSessionId, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_SET_ITEM_OFFSET))(this, perEventSourceSessionId, value);
		}

		static ::System::UInt64 op_Explicit(::System::Diagnostics::Tracing::SessionMask m)
		{
			return ((::System::UInt64(*)(::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_OP_EXPLICIT_OFFSET))(m);
		}

		static ::System::UInt32 op_Explicit_1(::System::Diagnostics::Tracing::SessionMask m)
		{
			return ((::System::UInt32(*)(::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_OP_EXPLICIT_1_OFFSET))(m);
		}
	};
}
