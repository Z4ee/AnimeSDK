#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class ObjectCast; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTCASTERS_ADDCASTER_OFFSET UNITYSDK_OFFSET(0xFF75680)
#define XLUA_OBJECTCASTERS_BYTECASTER_OFFSET UNITYSDK_OFFSET(0xFF73B50)
#define XLUA_OBJECTCASTERS_CHARCASTER_OFFSET UNITYSDK_OFFSET(0xFF73A10)
#define XLUA_OBJECTCASTERS_DECIMALCASTER_OFFSET UNITYSDK_OFFSET(0xFF740F0)
#define XLUA_OBJECTCASTERS_FLOATCASTER_OFFSET UNITYSDK_OFFSET(0xFF74050)
#define XLUA_OBJECTCASTERS_GENCASTER_OFFSET UNITYSDK_OFFSET(0xFF756F0)
#define XLUA_OBJECTCASTERS_GENNULLABLECASTER_OFFSET UNITYSDK_OFFSET(0xFF75E30)
#define XLUA_OBJECTCASTERS_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0xFF74140)
#define XLUA_OBJECTCASTERS_GETBYTES_OFFSET UNITYSDK_OFFSET(0xFF741F0)
#define XLUA_OBJECTCASTERS_GETCASTER_OFFSET UNITYSDK_OFFSET(0xFF75C40)
#define XLUA_OBJECTCASTERS_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0xFF73FB0)
#define XLUA_OBJECTCASTERS_GETINTPTR_OFFSET UNITYSDK_OFFSET(0xFF74340)
#define XLUA_OBJECTCASTERS_GETLUAFUNCTION_OFFSET UNITYSDK_OFFSET(0xFF74E40)
#define XLUA_OBJECTCASTERS_GETLUATABLE_OFFSET UNITYSDK_OFFSET(0xFF74B30)
#define XLUA_OBJECTCASTERS_GETOBJECT_OFFSET UNITYSDK_OFFSET(0xFF743E0)
#define XLUA_OBJECTCASTERS_GETSTRING_OFFSET UNITYSDK_OFFSET(0xFF741E0)
#define XLUA_OBJECTCASTERS_GETTEXTID_OFFSET UNITYSDK_OFFSET(0xFF75150)
#define XLUA_OBJECTCASTERS_INTCASTER_OFFSET UNITYSDK_OFFSET(0xFF73D30)
#define XLUA_OBJECTCASTERS_LONGCASTER_OFFSET UNITYSDK_OFFSET(0xFF73E70)
#define XLUA_OBJECTCASTERS_SBYTECASTER_OFFSET UNITYSDK_OFFSET(0xFF73AB0)
#define XLUA_OBJECTCASTERS_SHORTCASTER_OFFSET UNITYSDK_OFFSET(0xFF73BF0)
#define XLUA_OBJECTCASTERS_UINTCASTER_OFFSET UNITYSDK_OFFSET(0xFF73DD0)
#define XLUA_OBJECTCASTERS_ULONGCASTER_OFFSET UNITYSDK_OFFSET(0xFF73F10)
#define XLUA_OBJECTCASTERS_USHORTCASTER_OFFSET UNITYSDK_OFFSET(0xFF73C90)
#define XLUA_OBJECTCASTERS__CTOR_OFFSET UNITYSDK_OFFSET(0xFF72A90)

namespace XLua
{
	inline static constexpr unsigned int ObjectCasters_TypeDefinitionIndex = 40515;

	class ObjectCasters : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::XLua::ObjectCast*>* castersMap; // 0x10
		::XLua::ObjectTranslator* translator; // 0x18

		::System::Void _ctor(::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS__CTOR_OFFSET))(this, translator);
		}

		static ::System::Object* charCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_CHARCASTER_OFFSET))(L, idx, target);
		}

		static ::System::Object* sbyteCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_SBYTECASTER_OFFSET))(L, idx, target);
		}

		static ::System::Object* byteCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_BYTECASTER_OFFSET))(L, idx, target);
		}

		static ::System::Object* shortCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_SHORTCASTER_OFFSET))(L, idx, target);
		}

		static ::System::Object* ushortCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_USHORTCASTER_OFFSET))(L, idx, target);
		}

		static ::System::Object* intCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_INTCASTER_OFFSET))(L, idx, target);
		}

		static ::System::Object* uintCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_UINTCASTER_OFFSET))(L, idx, target);
		}

		static ::System::Object* longCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_LONGCASTER_OFFSET))(L, idx, target);
		}

		static ::System::Object* ulongCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_ULONGCASTER_OFFSET))(L, idx, target);
		}

		static ::System::Object* getDouble(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETDOUBLE_OFFSET))(L, idx, target);
		}

		static ::System::Object* floatCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_FLOATCASTER_OFFSET))(L, idx, target);
		}

		::System::Object* decimalCaster(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_DECIMALCASTER_OFFSET))(this, L, idx, target);
		}

		static ::System::Object* getBoolean(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETBOOLEAN_OFFSET))(L, idx, target);
		}

		static ::System::Object* getString(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETSTRING_OFFSET))(L, idx, target);
		}

		::System::Object* getBytes(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETBYTES_OFFSET))(this, L, idx, target);
		}

		::System::Object* getIntptr(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETINTPTR_OFFSET))(this, L, idx, target);
		}

		::System::Object* getObject(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETOBJECT_OFFSET))(this, L, idx, target);
		}

		::System::Object* getLuaTable(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETLUATABLE_OFFSET))(this, L, idx, target);
		}

		::System::Object* getLuaFunction(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETLUAFUNCTION_OFFSET))(this, L, idx, target);
		}

		::System::Object* getTextID(::System::IntPtr L, ::System::Int32 idx, ::System::Object* target)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETTEXTID_OFFSET))(this, L, idx, target);
		}

		::System::Void AddCaster(::System::Type* type, ::XLua::ObjectCast* oc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::XLua::ObjectCast*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_ADDCASTER_OFFSET))(this, type, oc);
		}

		::XLua::ObjectCast* genCaster(::System::Type* type)
		{
			return ((::XLua::ObjectCast*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GENCASTER_OFFSET))(this, type);
		}

		::XLua::ObjectCast* genNullableCaster(::XLua::ObjectCast* oc)
		{
			return ((::XLua::ObjectCast*(*)(::PVOID, ::XLua::ObjectCast*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GENNULLABLECASTER_OFFSET))(this, oc);
		}

		::XLua::ObjectCast* GetCaster(::System::Type* type)
		{
			return ((::XLua::ObjectCast*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_OBJECTCASTERS_GETCASTER_OFFSET))(this, type);
		}
	};
}
