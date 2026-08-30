#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__DISPLAYCLASS167_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1920A200)
#define UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__DISPLAYCLASS167_0__UNUSEDELEMENTGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x1920F100)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderMesh___c__DisplayClass167_0_TypeDefinitionIndex = 43217;

	class ProBuilderMesh___c__DisplayClass167_0 : public ::System::Object
	{
	public:
		::System::Int32 i; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__DISPLAYCLASS167_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UnusedElementGroup_b__0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERMESH___C__DISPLAYCLASS167_0__UNUSEDELEMENTGROUP_B__0_OFFSET))(this, a1);
		}
	};
}
