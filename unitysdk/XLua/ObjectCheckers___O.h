#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class ObjectCheck; }

namespace XLua
{
	inline static constexpr unsigned int ObjectCheckers___O_TypeDefinitionIndex = 46425;

	class ObjectCheckers___O : public ::System::Object
	{
	public:
		static ::XLua::ObjectCheck** StaticGet__0___objectCheck()
		{
			return (::XLua::ObjectCheck**)Il2CppClass::FromTypeDefinitionIndex(ObjectCheckers___O_TypeDefinitionIndex)->GetStaticField(0x6B750);
		}
	};
}
