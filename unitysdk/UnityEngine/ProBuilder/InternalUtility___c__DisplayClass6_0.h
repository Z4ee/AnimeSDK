#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PROBUILDER_INTERNALUTILITY___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A249D70)
#define UNITYENGINE_PROBUILDER_INTERNALUTILITY___C__DISPLAYCLASS6_0__TRYPARSECOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1A24A100)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int InternalUtility___c__DisplayClass6_0_TypeDefinitionIndex = 39923;

	class InternalUtility___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* valid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTERNALUTILITY___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryParseColor_b__0(::System::Char c)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTERNALUTILITY___C__DISPLAYCLASS6_0__TRYPARSECOLOR_B__0_OFFSET))(this, c);
		}
	};
}
