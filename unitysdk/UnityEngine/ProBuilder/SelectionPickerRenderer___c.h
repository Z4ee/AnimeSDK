#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B128350)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B128390)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER___C__GENERATEFACEPICKINGOBJECTS_B__24_0_OFFSET UNITYSDK_OFFSET(0x1B1283A0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectionPickerRenderer___c_TypeDefinitionIndex = 40806;

	class SelectionPickerRenderer___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer___c_TypeDefinitionIndex)->GetStaticField(0x55E90);
		}
		static ::UnityEngine::ProBuilder::SelectionPickerRenderer___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::SelectionPickerRenderer___c**)Il2CppClass::FromTypeDefinitionIndex(SelectionPickerRenderer___c_TypeDefinitionIndex)->GetStaticField(0x55E98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _GenerateFacePickingObjects_b__24_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKERRENDERER___C__GENERATEFACEPICKINGOBJECTS_B__24_0_OFFSET))(this, a1);
		}
	};
}
