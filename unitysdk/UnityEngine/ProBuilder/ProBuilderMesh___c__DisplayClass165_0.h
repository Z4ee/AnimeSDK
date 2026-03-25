#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__DISPLAYCLASS165_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18877F80)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__DISPLAYCLASS165_0__GETUNUSEDTEXTUREGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x1887CA80)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh___c__DisplayClass165_0_TypeDefinitionIndex = 34144;

	class ProBuilderMesh___c__DisplayClass165_0 : public ::System::Object
	{
	public:
		::System::Int32 i; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__DISPLAYCLASS165_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetUnusedTextureGroup_b__0(::UnityEngine::ProBuilder::Face* element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__DISPLAYCLASS165_0__GETUNUSEDTEXTUREGROUP_B__0_OFFSET))(this, element);
		}
	};
}
