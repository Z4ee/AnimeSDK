#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BEFORERENDERORDERATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1C4D0F90)

namespace UnityEngine
{
	inline static constexpr unsigned int BeforeRenderOrderAttribute_TypeDefinitionIndex = 4085;

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
