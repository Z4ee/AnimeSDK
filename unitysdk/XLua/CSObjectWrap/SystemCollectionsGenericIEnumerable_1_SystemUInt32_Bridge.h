#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace XLua { class LuaEnv; }

#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xFCEE050)
#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xFCEE580)
#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xFCEE040)
#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE___CREATE_OFFSET UNITYSDK_OFFSET(0xFCEDFF0)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int SystemCollectionsGenericIEnumerable_1_SystemUInt32_Bridge_TypeDefinitionIndex = 41797;

	class SystemCollectionsGenericIEnumerable_1_SystemUInt32_Bridge : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE__CTOR_OFFSET))(this, reference, luaenv);
		}

		static ::XLua::LuaBase* __Create(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::XLua::LuaBase*(*)(::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE___CREATE_OFFSET))(reference, luaenv);
		}

		::System::Collections::Generic::IEnumerator_1<::System::UInt32>* System_Collections_Generic_IEnumerable_System_UInt32__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
