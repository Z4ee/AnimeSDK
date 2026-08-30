#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class PropertyInfo; }
namespace XLua { class ObjectTranslator; }
namespace XLua { class OverloadMethodWrap; }

#define XLUA_METHODWRAPCACHEEX_CREATE_OFFSET UNITYSDK_OFFSET(0x14B2F1C0)

namespace XLua
{
	inline static constexpr unsigned int MethodWrapCacheEx_TypeDefinitionIndex = 50560;

	class MethodWrapCacheEx : public ::System::Object
	{
	public:
		static ::XLua::OverloadMethodWrap* Create(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3, ::System::Reflection::PropertyInfo* a4)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPCACHEEX_CREATE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
