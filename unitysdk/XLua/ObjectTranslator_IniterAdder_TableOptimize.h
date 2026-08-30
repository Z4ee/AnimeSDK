#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaEnv; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE_INIT_OFFSET UNITYSDK_OFFSET(0xF9FCE30)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9FCDC0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE__CTOR_OFFSET UNITYSDK_OFFSET(0xF9FE380)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator_IniterAdder_TableOptimize_TypeDefinitionIndex = 50439;

	class ObjectTranslator_IniterAdder_TableOptimize : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE__CTOR_OFFSET))(this);
		}

		static ::System::Void Init(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE_INIT_OFFSET))(a1, a2);
		}
	};
}
