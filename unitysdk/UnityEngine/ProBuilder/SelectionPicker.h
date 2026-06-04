#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/PickerOptions.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKEDGESINRECT_OFFSET UNITYSDK_OFFSET(0x1B123540)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKFACESINRECT_OFFSET UNITYSDK_OFFSET(0x1B121820)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKFACE_OFFSET UNITYSDK_OFFSET(0x1B124600)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKVERTICESINRECT_OFFSET UNITYSDK_OFFSET(0x1B1205F0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectionPicker_TypeDefinitionIndex = 40800;

	class SelectionPicker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* PickVerticesInRect(::UnityEngine::Camera* a1, ::UnityEngine::Rect a2, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a3, ::UnityEngine::ProBuilder::PickerOptions a4, ::System::Single a5)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::PickerOptions, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKVERTICESINRECT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* PickFacesInRect(::UnityEngine::Camera* a1, ::UnityEngine::Rect a2, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a3, ::UnityEngine::ProBuilder::PickerOptions a4, ::System::Single a5)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::PickerOptions, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKFACESINRECT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>* PickEdgesInRect(::UnityEngine::Camera* a1, ::UnityEngine::Rect a2, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a3, ::UnityEngine::ProBuilder::PickerOptions a4, ::System::Single a5)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::PickerOptions, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKEDGESINRECT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::ProBuilder::Face* PickFace(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::ProBuilder::ProBuilderMesh* a3)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKFACE_OFFSET))(a1, a2, a3);
		}
	};
}
