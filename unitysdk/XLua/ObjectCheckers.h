#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class ObjectCheck; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTCHECKERS_BOOLCHECK_OFFSET UNITYSDK_OFFSET(0x14B3A700)
#define XLUA_OBJECTCHECKERS_BYTESCHECK_OFFSET UNITYSDK_OFFSET(0x14B3A4C0)
#define XLUA_OBJECTCHECKERS_DECIMALCHECK_OFFSET UNITYSDK_OFFSET(0x14B3A290)
#define XLUA_OBJECTCHECKERS_GENCHECKER_OFFSET UNITYSDK_OFFSET(0x14B3AC80)
#define XLUA_OBJECTCHECKERS_GENNULLABLECHECKER_OFFSET UNITYSDK_OFFSET(0x14B3B100)
#define XLUA_OBJECTCHECKERS_GETCHECKER_OFFSET UNITYSDK_OFFSET(0x14B3B180)
#define XLUA_OBJECTCHECKERS_INT64CHECK_OFFSET UNITYSDK_OFFSET(0x14B3A790)
#define XLUA_OBJECTCHECKERS_INTPTRCHECK_OFFSET UNITYSDK_OFFSET(0x14B3ABF0)
#define XLUA_OBJECTCHECKERS_LUAFUNCTIONCHECK_OFFSET UNITYSDK_OFFSET(0x14B3A990)
#define XLUA_OBJECTCHECKERS_LUATABLECHECK_OFFSET UNITYSDK_OFFSET(0x14B39FA0)
#define XLUA_OBJECTCHECKERS_NUMBERCHECK_OFFSET UNITYSDK_OFFSET(0x14B3A200)
#define XLUA_OBJECTCHECKERS_OBJECTCHECK_OFFSET UNITYSDK_OFFSET(0x14B39F90)
#define XLUA_OBJECTCHECKERS_STRCHECK_OFFSET UNITYSDK_OFFSET(0x14B3A3C0)
#define XLUA_OBJECTCHECKERS_UINT64CHECK_OFFSET UNITYSDK_OFFSET(0x14B3A890)
#define XLUA_OBJECTCHECKERS__CTOR_OFFSET UNITYSDK_OFFSET(0x14B391C0)

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
