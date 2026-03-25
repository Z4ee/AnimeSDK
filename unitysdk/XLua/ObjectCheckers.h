#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class ObjectCheck; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTCHECKERS_BOOLCHECK_OFFSET UNITYSDK_OFFSET(0xFF79E00)
#define XLUA_OBJECTCHECKERS_BYTESCHECK_OFFSET UNITYSDK_OFFSET(0xFF79BC0)
#define XLUA_OBJECTCHECKERS_DECIMALCHECK_OFFSET UNITYSDK_OFFSET(0xFF79990)
#define XLUA_OBJECTCHECKERS_GENCHECKER_OFFSET UNITYSDK_OFFSET(0xFF7A370)
#define XLUA_OBJECTCHECKERS_GENNULLABLECHECKER_OFFSET UNITYSDK_OFFSET(0xFF7A620)
#define XLUA_OBJECTCHECKERS_GETCHECKER_OFFSET UNITYSDK_OFFSET(0xFF7A6B0)
#define XLUA_OBJECTCHECKERS_INT64CHECK_OFFSET UNITYSDK_OFFSET(0xFF79E90)
#define XLUA_OBJECTCHECKERS_INTPTRCHECK_OFFSET UNITYSDK_OFFSET(0xFF7A2E0)
#define XLUA_OBJECTCHECKERS_LUAFUNCTIONCHECK_OFFSET UNITYSDK_OFFSET(0xFF7A090)
#define XLUA_OBJECTCHECKERS_LUATABLECHECK_OFFSET UNITYSDK_OFFSET(0xFF796B0)
#define XLUA_OBJECTCHECKERS_NUMBERCHECK_OFFSET UNITYSDK_OFFSET(0xFF79900)
#define XLUA_OBJECTCHECKERS_OBJECTCHECK_OFFSET UNITYSDK_OFFSET(0xFF796A0)
#define XLUA_OBJECTCHECKERS_STRCHECK_OFFSET UNITYSDK_OFFSET(0xFF79AC0)
#define XLUA_OBJECTCHECKERS_UINT64CHECK_OFFSET UNITYSDK_OFFSET(0xFF79F90)
#define XLUA_OBJECTCHECKERS__CTOR_OFFSET UNITYSDK_OFFSET(0xFF78990)

namespace XLua
{
	inline static constexpr unsigned int ObjectCheckers_TypeDefinitionIndex = 40511;

	class ObjectCheckers : public ::System::Object
	{
	public:
		::XLua::ObjectTranslator* translator; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::XLua::ObjectCheck*>* checkersMap; // 0x18

		::System::Void _ctor(::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS__CTOR_OFFSET))(this, translator);
		}

		static ::System::Boolean objectCheck(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_OBJECTCHECK_OFFSET))(L, idx);
		}

		::System::Boolean luaTableCheck(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_LUATABLECHECK_OFFSET))(this, L, idx);
		}

		::System::Boolean numberCheck(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_NUMBERCHECK_OFFSET))(this, L, idx);
		}

		::System::Boolean decimalCheck(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_DECIMALCHECK_OFFSET))(this, L, idx);
		}

		::System::Boolean strCheck(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_STRCHECK_OFFSET))(this, L, idx);
		}

		::System::Boolean bytesCheck(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_BYTESCHECK_OFFSET))(this, L, idx);
		}

		::System::Boolean boolCheck(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_BOOLCHECK_OFFSET))(this, L, idx);
		}

		::System::Boolean int64Check(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_INT64CHECK_OFFSET))(this, L, idx);
		}

		::System::Boolean uint64Check(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_UINT64CHECK_OFFSET))(this, L, idx);
		}

		::System::Boolean luaFunctionCheck(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_LUAFUNCTIONCHECK_OFFSET))(this, L, idx);
		}

		::System::Boolean intptrCheck(::System::IntPtr L, ::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_INTPTRCHECK_OFFSET))(this, L, idx);
		}

		::XLua::ObjectCheck* genChecker(::System::Type* type)
		{
			return ((::XLua::ObjectCheck*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_GENCHECKER_OFFSET))(this, type);
		}

		::XLua::ObjectCheck* genNullableChecker(::XLua::ObjectCheck* oc)
		{
			return ((::XLua::ObjectCheck*(*)(::PVOID, ::XLua::ObjectCheck*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_GENNULLABLECHECKER_OFFSET))(this, oc);
		}

		::XLua::ObjectCheck* GetChecker(::System::Type* type)
		{
			return ((::XLua::ObjectCheck*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCHECKERS_GETCHECKER_OFFSET))(this, type);
		}
	};
}
