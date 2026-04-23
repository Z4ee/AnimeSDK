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

#define UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKEDGESINRECT_OFFSET UNITYSDK_OFFSET(0x1A2C1790)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKFACESINRECT_OFFSET UNITYSDK_OFFSET(0x1A2BF4C0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKFACE_OFFSET UNITYSDK_OFFSET(0x1A2C29B0)
#define UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKVERTICESINRECT_OFFSET UNITYSDK_OFFSET(0x1A2BE0D0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectionPicker_TypeDefinitionIndex = 39973;

	class SelectionPicker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* PickVerticesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, ::UnityEngine::ProBuilder::PickerOptions options, ::System::Single pixelsPerPoint)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::PickerOptions, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKVERTICESINRECT_OFFSET))(cam, rect, selectable, options, pixelsPerPoint);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* PickFacesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, ::UnityEngine::ProBuilder::PickerOptions options, ::System::Single pixelsPerPoint)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::PickerOptions, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKFACESINRECT_OFFSET))(cam, rect, selectable, options, pixelsPerPoint);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>* PickEdgesInRect(::UnityEngine::Camera* cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, ::UnityEngine::ProBuilder::PickerOptions options, ::System::Single pixelsPerPoint)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>*>*(*)(::UnityEngine::Camera*, ::UnityEngine::Rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::PickerOptions, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKEDGESINRECT_OFFSET))(cam, rect, selectable, options, pixelsPerPoint);
		}

		static ::UnityEngine::ProBuilder::Face* PickFace(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::ProBuilder::ProBuilderMesh* pickable)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTIONPICKER_PICKFACE_OFFSET))(camera, mousePosition, pickable);
		}
	};
}
