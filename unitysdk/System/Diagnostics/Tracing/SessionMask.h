#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_FROMEVENTKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1BCD3330)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_FROMID_OFFSET UNITYSDK_OFFSET(0x1BCE35B0)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_GET_ALL_OFFSET UNITYSDK_OFFSET(0x1BCD3450)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2F27060)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_ISEQUALORSUPERSETOF_OFFSET UNITYSDK_OFFSET(0x3B6AF20)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BCF3330)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1BCDB860)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3B6AF40)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_TOEVENTKEYWORDS_OFFSET UNITYSDK_OFFSET(0x3B6AF30)
#define SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x3B6AF10)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int SessionMask_TypeDefinitionIndex = 1703;

	struct alignas(4) SessionMask
	{
		::System::UInt32 m_mask; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEqualOrSupersetOf(::System::Diagnostics::Tracing::SessionMask a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_ISEQUALORSUPERSETOF_OFFSET))(this, a1);
		}

		static ::System::Diagnostics::Tracing::SessionMask get_All()
		{
			return ((::System::Diagnostics::Tracing::SessionMask(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_GET_ALL_OFFSET))();
		}

		static ::System::Diagnostics::Tracing::SessionMask FromId(::System::Int32 a1)
		{
			return ((::System::Diagnostics::Tracing::SessionMask(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_FROMID_OFFSET))(a1);
		}

		::System::UInt64 ToEventKeywords()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_TOEVENTKEYWORDS_OFFSET))(this);
		}

		static ::System::Diagnostics::Tracing::SessionMask FromEventKeywords(::System::UInt64 a1)
		{
			return ((::System::Diagnostics::Tracing::SessionMask(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_FROMEVENTKEYWORDS_OFFSET))(a1);
		}

		::System::Boolean get_Item(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::System::UInt64 op_Explicit(::System::Diagnostics::Tracing::SessionMask a1)
		{
			return ((::System::UInt64(*)(::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_OP_EXPLICIT_OFFSET))(a1);
		}

		static ::System::UInt32 op_Explicit_1(::System::Diagnostics::Tracing::SessionMask a1)
		{
			return ((::System::UInt32(*)(::System::Diagnostics::Tracing::SessionMask))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_SESSIONMASK_OP_EXPLICIT_1_OFFSET))(a1);
		}
	};
}
