#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodBase; }
namespace XLua { class MethodWrap; }
namespace XLua { class ObjectCasters; }
namespace XLua { class ObjectCheckers; }
namespace XLua { class ObjectTranslator; }
namespace XLua::LuaDLL { class lua_CSFunction; }

#define XLUA_METHODWRAPSCACHE_GETCONSTRUCTORWRAP_OFFSET UNITYSDK_OFFSET(0xFF70580)
#define XLUA_METHODWRAPSCACHE_GETDELEGATEWRAP_OFFSET UNITYSDK_OFFSET(0xFF71290)
#define XLUA_METHODWRAPSCACHE_GETEVENTWRAP_OFFSET UNITYSDK_OFFSET(0xFF71550)
#define XLUA_METHODWRAPSCACHE_GETMETHODWRAPINCACHE_OFFSET UNITYSDK_OFFSET(0xFF710A0)
#define XLUA_METHODWRAPSCACHE_GETMETHODWRAP_OFFSET UNITYSDK_OFFSET(0xFF70DA0)
#define XLUA_METHODWRAPSCACHE_TRYMAKEGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0xFF719B0)
#define XLUA_METHODWRAPSCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF70400)
#define XLUA_METHODWRAPSCACHE__GENMETHODWRAP_OFFSET UNITYSDK_OFFSET(0xFF709B0)

namespace XLua
{
	inline static constexpr unsigned int MethodWrapsCache_TypeDefinitionIndex = 40495;

	class MethodWrapsCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::XLua::LuaDLL::lua_CSFunction*>* delegateCache; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::XLua::LuaDLL::lua_CSFunction*>*>* methodsCache; // 0x18
		::XLua::ObjectCheckers* objCheckers; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::XLua::LuaDLL::lua_CSFunction*>* constructorCache; // 0x28
		::XLua::ObjectTranslator* translator; // 0x30
		::XLua::ObjectCasters* objCasters; // 0x38

		::System::Void _ctor(::XLua::ObjectTranslator* translator, ::XLua::ObjectCheckers* objCheckers, ::XLua::ObjectCasters* objCasters)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectTranslator*, ::XLua::ObjectCheckers*, ::XLua::ObjectCasters*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE__CTOR_OFFSET))(this, translator, objCheckers, objCasters);
		}

		::XLua::LuaDLL::lua_CSFunction* GetConstructorWrap(::System::Type* type)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_GETCONSTRUCTORWRAP_OFFSET))(this, type);
		}

		::XLua::LuaDLL::lua_CSFunction* GetMethodWrap(::System::Type* type, ::System::String* methodName)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_GETMETHODWRAP_OFFSET))(this, type, methodName);
		}

		::XLua::LuaDLL::lua_CSFunction* GetMethodWrapInCache(::System::Type* type, ::System::String* methodName)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_GETMETHODWRAPINCACHE_OFFSET))(this, type, methodName);
		}

		::XLua::LuaDLL::lua_CSFunction* GetDelegateWrap(::System::Type* type)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_GETDELEGATEWRAP_OFFSET))(this, type);
		}

		::XLua::LuaDLL::lua_CSFunction* GetEventWrap(::System::Type* type, ::System::String* eventName)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_GETEVENTWRAP_OFFSET))(this, type, eventName);
		}

		::XLua::MethodWrap* _GenMethodWrap(::System::Type* type, ::System::String* methodName, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* methodBases, ::System::Boolean forceCheck)
		{
			return ((::XLua::MethodWrap*(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE__GENMETHODWRAP_OFFSET))(this, type, methodName, methodBases, forceCheck);
		}

		static ::System::Boolean tryMakeGenericMethod(::System::Reflection::MethodBase*& method)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*&))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_TRYMAKEGENERICMETHOD_OFFSET))(method);
		}
	};
}
