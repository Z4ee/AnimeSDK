#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectTranslator; }
namespace XLua { class OverloadMethodWrap; }

#define XLUA_METHODWRAPCACHEEX_CREATE_OFFSET UNITYSDK_OFFSET(0xFF6FF80)

namespace XLua
{
	inline static constexpr unsigned int MethodWrapCacheEx_TypeDefinitionIndex = 40508;

	class MethodWrapCacheEx : public ::System::Object
	{
	public:
		static ::XLua::OverloadMethodWrap* Create(::XLua::ObjectTranslator* translator, ::System::Type* targetType, ::System::Reflection::MethodBase* method)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPCACHEEX_CREATE_OFFSET))(translator, targetType, method);
		}
	};
}
