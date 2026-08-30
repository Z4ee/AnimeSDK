#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/XLua/OptimizeFlag.h"

#define XLUA_GCOPTIMIZEATTRIBUTE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1BFD5B30)
#define XLUA_GCOPTIMIZEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFD5B40)

namespace XLua
{
	inline static constexpr unsigned int GCOptimizeAttribute_TypeDefinitionIndex = 5601;

	class GCOptimizeAttribute : public ::System::Attribute
	{
	public:
		::XLua::OptimizeFlag flag; // 0x10

		::System::Void _ctor(::XLua::OptimizeFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::OptimizeFlag))((::PBYTE)hIl2Cpp + XLUA_GCOPTIMIZEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::XLua::OptimizeFlag get_Flag()
		{
			return ((::XLua::OptimizeFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_GCOPTIMIZEATTRIBUTE_GET_FLAG_OFFSET))(this);
		}
	};
}
