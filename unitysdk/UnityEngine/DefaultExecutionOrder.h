#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_DEFAULTEXECUTIONORDER_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1ED1F850)
#define UNITYENGINE_DEFAULTEXECUTIONORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED1F840)

namespace UnityEngine
{
	inline static constexpr unsigned int DefaultExecutionOrder_TypeDefinitionIndex = 4308;

	class DefaultExecutionOrder : public ::System::Attribute
	{
	public:
		::System::Int32 m_Order; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTEXECUTIONORDER__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTEXECUTIONORDER_GET_ORDER_OFFSET))(this);
		}
	};
}
