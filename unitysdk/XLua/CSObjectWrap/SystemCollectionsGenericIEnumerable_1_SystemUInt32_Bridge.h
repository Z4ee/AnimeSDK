#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/XLua/LuaBase.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace XLua { class LuaEnv; }

#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_UINT32__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE64B2F0)
#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE64B830)
#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE64B2E0)
#define XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE___CREATE_OFFSET UNITYSDK_OFFSET(0xE64B290)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int SystemCollectionsGenericIEnumerable_1_SystemUInt32_Bridge_TypeDefinitionIndex = 51918;

	class SystemCollectionsGenericIEnumerable_1_SystemUInt32_Bridge : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::XLua::LuaBase* __Create(::System::Int32 a1, ::XLua::LuaEnv* a2)
		{
			return ((::XLua::LuaBase*(*)(::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_SYSTEMCOLLECTIONSGENERICIENUMERABLE_1_SYSTEMUINT32_BRIDGE___CREATE_OFFSET))(a1, a2);
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
