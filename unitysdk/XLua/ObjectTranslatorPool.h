#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTTRANSLATORPOOL_ADD_OFFSET UNITYSDK_OFFSET(0x103D2AE0)
#define XLUA_OBJECTTRANSLATORPOOL_FIND_OFFSET UNITYSDK_OFFSET(0x103D2AF0)
#define XLUA_OBJECTTRANSLATORPOOL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x103D2A90)
#define XLUA_OBJECTTRANSLATORPOOL_REMOVE_OFFSET UNITYSDK_OFFSET(0x103D2B00)
#define XLUA_OBJECTTRANSLATORPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x103D2AD0)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslatorPool_TypeDefinitionIndex = 40532;

	class ObjectTranslatorPool : public ::System::Object
	{
	public:
		::XLua::ObjectTranslator* lastTranslator; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATORPOOL__CTOR_OFFSET))(this);
		}

		static ::XLua::ObjectTranslatorPool* get_Instance()
		{
			return ((::XLua::ObjectTranslatorPool*(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATORPOOL_GET_INSTANCE_OFFSET))();
		}

		::System::Void Add(::System::IntPtr L, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATORPOOL_ADD_OFFSET))(this, L, translator);
		}

		::XLua::ObjectTranslator* Find(::System::IntPtr L)
		{
			return ((::XLua::ObjectTranslator*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATORPOOL_FIND_OFFSET))(this, L);
		}

		::System::Void Remove(::System::IntPtr L)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATORPOOL_REMOVE_OFFSET))(this, L);
		}
	};
}
