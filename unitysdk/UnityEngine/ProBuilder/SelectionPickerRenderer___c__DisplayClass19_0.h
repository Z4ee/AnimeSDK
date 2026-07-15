#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class SharedVertex; }

#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1777B3C0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER___C__DISPLAYCLASS19_0__PICKVERTICESINRECT_B__0_OFFSET UNITYSDK_OFFSET(0x1777E990)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectionPickerRenderer___c__DisplayClass19_0_TypeDefinitionIndex = 41622;

	class SelectionPickerRenderer___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* positions; // 0x10
		::Il2CppArray<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _PickVerticesInRect_b__0(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER___C__DISPLAYCLASS19_0__PICKVERTICESINRECT_B__0_OFFSET))(this, a1);
		}
	};
}
