#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class PropertyInfo; }
namespace XLua { class MethodWrap; }
namespace XLua { class ObjectCasters; }
namespace XLua { class ObjectCheckers; }
namespace XLua { class ObjectTranslator; }
namespace XLua::LuaDLL { class lua_CSFunction; }

#define XLUA_METHODWRAPSCACHE_GETCONSTRUCTORWRAP_OFFSET UNITYSDK_OFFSET(0x118682B0)
#define XLUA_METHODWRAPSCACHE_GETDELEGATEWRAP_OFFSET UNITYSDK_OFFSET(0x11869720)
#define XLUA_METHODWRAPSCACHE_GETEVENTWRAP_OFFSET UNITYSDK_OFFSET(0x11869AB0)
#define XLUA_METHODWRAPSCACHE_GETMETHODWRAPINCACHE_OFFSET UNITYSDK_OFFSET(0x11869480)
#define XLUA_METHODWRAPSCACHE_GETMETHODWRAP_OFFSET UNITYSDK_OFFSET(0x11868FD0)
#define XLUA_METHODWRAPSCACHE_TRYMAKEGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x1186A110)
#define XLUA_METHODWRAPSCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x11868130)
#define XLUA_METHODWRAPSCACHE__GENMETHODWRAP_OFFSET UNITYSDK_OFFSET(0x11868980)

namespace XLua
{
	inline static constexpr unsigned int MethodWrapsCache_TypeDefinitionIndex = 50547;

	class MethodWrapsCache : public ::System::Object
	{
	public:
		::XLua::ObjectCasters* objCasters; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::XLua::LuaDLL::lua_CSFunction*>*>* methodsCache; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::XLua::LuaDLL::lua_CSFunction*>* constructorCache; // 0x20
		::XLua::ObjectTranslator* translator; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::XLua::LuaDLL::lua_CSFunction*>* delegateCache; // 0x30
		::XLua::ObjectCheckers* objCheckers; // 0x38

		::System::Void _ctor(::XLua::ObjectTranslator* a1, ::XLua::ObjectCheckers* a2, ::XLua::ObjectCasters* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectTranslator*, ::XLua::ObjectCheckers*, ::XLua::ObjectCasters*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::XLua::LuaDLL::lua_CSFunction* GetConstructorWrap(::System::Type* a1)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_GETCONSTRUCTORWRAP_OFFSET))(this, a1);
		}

		::XLua::LuaDLL::lua_CSFunction* GetMethodWrap(::System::Type* a1, ::System::String* a2)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_GETMETHODWRAP_OFFSET))(this, a1, a2);
		}

		::XLua::LuaDLL::lua_CSFunction* GetMethodWrapInCache(::System::Type* a1, ::System::String* a2)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_GETMETHODWRAPINCACHE_OFFSET))(this, a1, a2);
		}

		::XLua::LuaDLL::lua_CSFunction* GetDelegateWrap(::System::Type* a1)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_GETDELEGATEWRAP_OFFSET))(this, a1);
		}

		::XLua::LuaDLL::lua_CSFunction* GetEventWrap(::System::Type* a1, ::System::String* a2)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_GETEVENTWRAP_OFFSET))(this, a1, a2);
		}

		::XLua::MethodWrap* _GenMethodWrap(::System::Type* a1, ::System::String* a2, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* a3, ::System::Boolean a4, ::System::Reflection::PropertyInfo* a5)
		{
			return ((::XLua::MethodWrap*(*)(::PVOID, ::System::Type*, ::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*, ::System::Boolean, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE__GENMETHODWRAP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean tryMakeGenericMethod(::System::Reflection::MethodBase*& a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*&))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE_TRYMAKEGENERICMETHOD_OFFSET))(a1);
		}
	};
}
