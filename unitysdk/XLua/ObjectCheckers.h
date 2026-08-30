#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class ObjectCheck; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTCHECKERS_BOOLCHECK_OFFSET UNITYSDK_OFFSET(0x11872C40)
#define XLUA_OBJECTCHECKERS_BYTESCHECK_OFFSET UNITYSDK_OFFSET(0x11872A00)
#define XLUA_OBJECTCHECKERS_DECIMALCHECK_OFFSET UNITYSDK_OFFSET(0x118727D0)
#define XLUA_OBJECTCHECKERS_GENCHECKER_OFFSET UNITYSDK_OFFSET(0x118731C0)
#define XLUA_OBJECTCHECKERS_GENNULLABLECHECKER_OFFSET UNITYSDK_OFFSET(0x11873640)
#define XLUA_OBJECTCHECKERS_GETCHECKER_OFFSET UNITYSDK_OFFSET(0x118736C0)
#define XLUA_OBJECTCHECKERS_INT64CHECK_OFFSET UNITYSDK_OFFSET(0x11872CD0)
#define XLUA_OBJECTCHECKERS_INTPTRCHECK_OFFSET UNITYSDK_OFFSET(0x11873130)
#define XLUA_OBJECTCHECKERS_LUAFUNCTIONCHECK_OFFSET UNITYSDK_OFFSET(0x11872ED0)
#define XLUA_OBJECTCHECKERS_LUATABLECHECK_OFFSET UNITYSDK_OFFSET(0x118724E0)
#define XLUA_OBJECTCHECKERS_NUMBERCHECK_OFFSET UNITYSDK_OFFSET(0x11872740)
#define XLUA_OBJECTCHECKERS_OBJECTCHECK_OFFSET UNITYSDK_OFFSET(0x118724D0)
#define XLUA_OBJECTCHECKERS_STRCHECK_OFFSET UNITYSDK_OFFSET(0x11872900)
#define XLUA_OBJECTCHECKERS_UINT64CHECK_OFFSET UNITYSDK_OFFSET(0x11872DD0)
#define XLUA_OBJECTCHECKERS__CTOR_OFFSET UNITYSDK_OFFSET(0x11871700)

namespace XLua
{
	inline static constexpr unsigned int ObjectCheckers_TypeDefinitionIndex = 50563;

	class ObjectCheckers : public ::System::Object
	{
	public:
		::XLua::ObjectTranslator* translator; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::XLua::ObjectCheck*>* checkersMap; // 0x18

		::System::Void _ctor(::XLua::ObjectTranslator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS__CTOR_OFFSET))(this, a1);
		}

		static ::System::Boolean objectCheck(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_OBJECTCHECK_OFFSET))(a1, a2);
		}

		::System::Boolean luaTableCheck(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_LUATABLECHECK_OFFSET))(this, a1, a2);
		}

		::System::Boolean numberCheck(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_NUMBERCHECK_OFFSET))(this, a1, a2);
		}

		::System::Boolean decimalCheck(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_DECIMALCHECK_OFFSET))(this, a1, a2);
		}

		::System::Boolean strCheck(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_STRCHECK_OFFSET))(this, a1, a2);
		}

		::System::Boolean bytesCheck(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_BYTESCHECK_OFFSET))(this, a1, a2);
		}

		::System::Boolean boolCheck(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_BOOLCHECK_OFFSET))(this, a1, a2);
		}

		::System::Boolean int64Check(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_INT64CHECK_OFFSET))(this, a1, a2);
		}

		::System::Boolean uint64Check(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_UINT64CHECK_OFFSET))(this, a1, a2);
		}

		::System::Boolean luaFunctionCheck(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_LUAFUNCTIONCHECK_OFFSET))(this, a1, a2);
		}

		::System::Boolean intptrCheck(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_INTPTRCHECK_OFFSET))(this, a1, a2);
		}

		::XLua::ObjectCheck* genChecker(::System::Type* a1)
		{
			return ((::XLua::ObjectCheck*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_GENCHECKER_OFFSET))(this, a1);
		}

		::XLua::ObjectCheck* genNullableChecker(::XLua::ObjectCheck* a1)
		{
			return ((::XLua::ObjectCheck*(*)(::PVOID, ::XLua::ObjectCheck*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_GENNULLABLECHECKER_OFFSET))(this, a1);
		}

		::XLua::ObjectCheck* GetChecker(::System::Type* a1)
		{
			return ((::XLua::ObjectCheck*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_GETCHECKER_OFFSET))(this, a1);
		}
	};
}
