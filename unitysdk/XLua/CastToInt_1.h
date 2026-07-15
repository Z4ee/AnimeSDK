#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { template <typename T> class CastToInt_1_CastToIntFunc; }
namespace XLua { template <typename T> class ObjectTranslator_GetFunc_1; }

namespace XLua
{
	inline static constexpr unsigned int CastToInt_1_TypeDefinitionIndex = 48004;

	template <typename S>
	class CastToInt_1 : public ::System::Object
	{
	public:
		static ::XLua::CastToInt_1_CastToIntFunc<S>** StaticGet_caster()
		{
			return (::XLua::CastToInt_1_CastToIntFunc<S>**)Il2CppClass::FromTypeDefinitionIndex(CastToInt_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_isEnum()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CastToInt_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::XLua::ObjectTranslator_GetFunc_1<S>** StaticGet_getFunc()
		{
			return (::XLua::ObjectTranslator_GetFunc_1<S>**)Il2CppClass::FromTypeDefinitionIndex(CastToInt_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
