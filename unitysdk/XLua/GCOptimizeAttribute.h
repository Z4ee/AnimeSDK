#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/XLua/OptimizeFlag.h"

#define XLUA_GCOPTIMIZEATTRIBUTE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x17A6F7D0)
#define XLUA_GCOPTIMIZEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6F7E0)

namespace XLua
{
	inline static constexpr unsigned int GCOptimizeAttribute_TypeDefinitionIndex = 8627;

	class GCOptimizeAttribute : public ::System::Attribute
	{
	public:
		::XLua::OptimizeFlag flag; // 0x10

		::System::Void _ctor(::XLua::OptimizeFlag flag)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::OptimizeFlag))((::PBYTE)hIl2Cpp + XLUA_GCOPTIMIZEATTRIBUTE__CTOR_OFFSET))(this, flag);
		}

		::XLua::OptimizeFlag get_Flag()
		{
			return ((::XLua::OptimizeFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_GCOPTIMIZEATTRIBUTE_GET_FLAG_OFFSET))(this);
		}
	};
}
