#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BEFORERENDERORDERATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1E1E8160)

namespace UnityEngine
{
	inline static constexpr unsigned int BeforeRenderOrderAttribute_TypeDefinitionIndex = 4095;

	class BeforeRenderOrderAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 _order_k__BackingField; // 0x10

		::System::Int32 get_order()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BEFORERENDERORDERATTRIBUTE_GET_ORDER_OFFSET))(this);
		}
	};
}
