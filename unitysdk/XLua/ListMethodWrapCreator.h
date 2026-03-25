#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class ObjectTranslator; }
namespace XLua { class OverloadMethodWrap; }

#define XLUA_LISTMETHODWRAPCREATOR_CHECKARGS_OFFSET UNITYSDK_OFFSET(0xFF5FF50)
#define XLUA_LISTMETHODWRAPCREATOR_CREATEWRAP_GETCOUNT_OFFSET UNITYSDK_OFFSET(0xFF60080)
#define XLUA_LISTMETHODWRAPCREATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF5FE40)

namespace XLua
{
	inline static constexpr unsigned int ListMethodWrapCreator_TypeDefinitionIndex = 40507;

	class ListMethodWrapCreator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet__ValidTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ListMethodWrapCreator_TypeDefinitionIndex)->GetStaticField(0x268F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_LISTMETHODWRAPCREATOR__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckArgs(::System::Type* targetType)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_LISTMETHODWRAPCREATOR_CHECKARGS_OFFSET))(targetType);
		}

		static ::XLua::OverloadMethodWrap* CreateWrap_GetCount(::XLua::ObjectTranslator* translator, ::System::Type* targetType, ::System::Reflection::MethodBase* method)
		{
			return ((::XLua::OverloadMethodWrap*(*)(::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + XLUA_LISTMETHODWRAPCREATOR_CREATEWRAP_GETCOUNT_OFFSET))(translator, targetType, method);
		}
	};
}
