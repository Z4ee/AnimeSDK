#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectTranslator; }
namespace XLua { class OverloadMethodWrap; }

#define XLUA_DICTIONARYMETHODWRAPCREATOR_CHECKARGS_OFFSET UNITYSDK_OFFSET(0x1120E5A0)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_ENUMERATORGETCURRENT_OFFSET UNITYSDK_OFFSET(0x1120EDB0)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_ENUMERATORMOVENEXT_OFFSET UNITYSDK_OFFSET(0x1120EA60)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1120E710)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_KEYVALUEPAIRGETKEY_OFFSET UNITYSDK_OFFSET(0x1120F100)
#define XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_KEYVALUEPAIRGETVALUE_OFFSET UNITYSDK_OFFSET(0x1120F450)
#define XLUA_DICTIONARYMETHODWRAPCREATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1120E4B0)

namespace XLua
{
	inline static constexpr unsigned int DictionaryMethodWrapCreator_TypeDefinitionIndex = 46418;

	class DictionaryMethodWrapCreator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Type*>>** StaticGet__ValidTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Collections::Generic::KeyValuePair_2<::System::Type*, ::System::Type*>>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryMethodWrapCreator_TypeDefinitionIndex)->GetStaticField(0x6B630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckArgs(::System::Type* targetType)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CHECKARGS_OFFSET))(targetType);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_GetEnumerator(::XLua::ObjectTranslator* translator, ::System::Type* targetType, ::System::Reflection::MethodBase* method)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_GETENUMERATOR_OFFSET))(translator, targetType, method);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_EnumeratorMoveNext(::XLua::ObjectTranslator* translator, ::System::Type* targetType, ::System::Reflection::MethodBase* method)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_ENUMERATORMOVENEXT_OFFSET))(translator, targetType, method);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_EnumeratorGetCurrent(::XLua::ObjectTranslator* translator, ::System::Type* targetType, ::System::Reflection::MethodBase* method)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_ENUMERATORGETCURRENT_OFFSET))(translator, targetType, method);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_KeyValuePairGetKey(::XLua::ObjectTranslator* translator, ::System::Type* targetType, ::System::Reflection::MethodBase* method)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_KEYVALUEPAIRGETKEY_OFFSET))(translator, targetType, method);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_KeyValuePairGetValue(::XLua::ObjectTranslator* translator, ::System::Type* targetType, ::System::Reflection::MethodBase* method)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_DICTIONARYMETHODWRAPCREATOR_CREATEWRAP_KEYVALUEPAIRGETVALUE_OFFSET))(translator, targetType, method);
		}
	};
}
