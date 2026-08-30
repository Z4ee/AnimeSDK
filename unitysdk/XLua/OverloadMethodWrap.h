#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class PropertyInfo; }
namespace XLua { class ObjectCast; }
namespace XLua { class ObjectCasters; }
namespace XLua { class ObjectCheck; }
namespace XLua { class ObjectCheckers; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OVERLOADMETHODWRAP_CALL_OFFSET UNITYSDK_OFFSET(0xFA00690)
#define XLUA_OVERLOADMETHODWRAP_CHECK_OFFSET UNITYSDK_OFFSET(0xFA004D0)
#define XLUA_OVERLOADMETHODWRAP_GET_HASDEFALUTVALUE_OFFSET UNITYSDK_OFFSET(0xF9FE630)
#define XLUA_OVERLOADMETHODWRAP_INIT_OFFSET UNITYSDK_OFFSET(0xF9FE680)
#define XLUA_OVERLOADMETHODWRAP_SET_HASDEFALUTVALUE_OFFSET UNITYSDK_OFFSET(0xF9FE640)
#define XLUA_OVERLOADMETHODWRAP__CCTOR_OFFSET UNITYSDK_OFFSET(0xFA01080)
#define XLUA_OVERLOADMETHODWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0xF9FE650)

namespace XLua
{
	inline static constexpr unsigned int OverloadMethodWrap_TypeDefinitionIndex = 50545;

	class OverloadMethodWrap : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::XLua::ObjectCheck*>** StaticGet_paramsChecks()
		{
			return (::System::Collections::Generic::List_1<::XLua::ObjectCheck*>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x6A100);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_inPosList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x6A108);
		}
		static ::System::Collections::Generic::List_1<::System::Boolean>** StaticGet_isOptionalList()
		{
			return (::System::Collections::Generic::List_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x6A110);
		}
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_defaultValueList()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x6A118);
		}
		static ::System::Collections::Generic::List_1<::XLua::ObjectCast*>** StaticGet_paramsCasts()
		{
			return (::System::Collections::Generic::List_1<::XLua::ObjectCast*>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x6A120);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_outPosList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OverloadMethodWrap_TypeDefinitionIndex)->GetStaticField(0x6A128);
		}
		::System::Reflection::MethodBase* method; // 0x10
		::System::Type* targetType; // 0x18
		::Il2CppArray<::System::Int32>* outPosArray; // 0x20
		::Il2CppArray<::System::Int32>* inPosArray; // 0x28
		::Il2CppArray<::System::Boolean>* isOptionalArray; // 0x30
		::Il2CppArray<::XLua::ObjectCheck*>* checkArray; // 0x38
		::Il2CppArray<::System::Object*>* defaultValueArray; // 0x40
		::Il2CppArray<::System::Int32>* refPos; // 0x48
		::System::Reflection::PropertyInfo* returnValueProperty; // 0x50
		::System::Type* paramsType; // 0x58
		::Il2CppArray<::XLua::ObjectCast*>* castArray; // 0x60
		::XLua::ObjectTranslator* translator; // 0x68
		::Il2CppArray<::System::Object*>* args; // 0x70
		::System::Int32 luaStackPosStart; // 0x78
		::System::Boolean _HasDefalutValue_k__BackingField; // 0x7C
		::System::Boolean isVoid; // 0x7D
		::System::Boolean targetNeeded; // 0x7E

		::System::Void _ctor(::XLua::ObjectTranslator* a1, ::System::Type* a2, ::System::Reflection::MethodBase* a3, ::System::Reflection::PropertyInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectTranslator*, ::System::Type*, ::System::Reflection::MethodBase*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP__CCTOR_OFFSET))();
		}

		::System::Boolean get_HasDefalutValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_GET_HASDEFALUTVALUE_OFFSET))(this);
		}

		::System::Void set_HasDefalutValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_SET_HASDEFALUTVALUE_OFFSET))(this, a1);
		}

		::System::Void Init(::XLua::ObjectCheckers* a1, ::XLua::ObjectCasters* a2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectCheckers*, ::XLua::ObjectCasters*))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean Check(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_CHECK_OFFSET))(this, a1);
		}

		::System::Int32 Call(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OVERLOADMETHODWRAP_CALL_OFFSET))(this, a1);
		}
	};
}
