#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectTranslator; }
namespace XLua { class OverloadMethodWrap; }

#define XLUA_METHODWRAPCACHEEX_CREATE_OFFSET UNITYSDK_OFFSET(0x12E9ABE0)

namespace XLua
{
	inline static constexpr unsigned int MethodWrapCacheEx_TypeDefinitionIndex = 47011;

	class MethodWrapCacheEx : public ::System::Object
	{
	public:
		static ::XLua::OverloadMethodWrap* Create(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPCACHEEX_CREATE_OFFSET))(a1, a2, a3);
		}
	};
}
